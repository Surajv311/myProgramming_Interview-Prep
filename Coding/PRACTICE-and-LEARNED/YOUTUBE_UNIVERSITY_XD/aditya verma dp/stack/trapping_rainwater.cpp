/*
///////////////////////////////////////////
//Question/Info

// rainwater trapping problem

Given n non-negative integers representing an elevation
map where the width of each bar is 1, compute how much
water it is able to trap after raining.

Examples:

Input: arr[]   = {2, 0, 2}
Output: 2
Explanation:
The structure is like below


We can trap 2 units of water in the middle gap.

Input: arr[]   = {3, 0, 2, 0, 4}
Output: 7
Explanation:
Structure is like below


We can trap "3 units" of water between 3 and 2,
"1 unit" on top of bar 2 and "3 units" between 2
and 4.  See below diagram also.

Input: arr[] = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]
Output: 6

Explanation:
The structure is like below


Trap "1 unit" between first 1 and 2, "4 units" between
first 2 and 3 and "1 unit" between second last 1 and last 2


Basic Insight:
An element of the array can store water
if there are higher bars on left and right.
The amount of water to be stored in every
element can be found out by finding the heights
of bars on the left and right sides.
The idea is to compute the amount of water
that can be stored in every element of the array.




//author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define int 		   long long int
#define setbits(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout << x << endl;
#define ct2(x,y) 	   cout << x << " " << y << endl;
#define forn(i,n) 	   for(int i = 0; i < (int)(n); ++i)
#define forx(i,x,n)    for(int i = x; i < (int)(n); ++i)
#define nfor(i,n)      for(int i = n-1; i >= 0; --i)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed << setprecision(y) << x;
#define PI 			   3.1415926535897932384626433832795
#define MOD 		   1000000007 // (1e9+7)
#define pii 		   pair<int,int>
#define pis 		   pair<int,string>
#define vi  		   vector<int>
#define vii 		   vector<pii>
#define mii 		   map<int,int>
#define p_q            priority_queue // priority_queue<int> (&) priority_queue< int,vi,greater<int> >
#define _IOS      	   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long double ld;

#pragma GCC optimize("Ofast")

void c_p_c()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int rw(int arr[], int n) {

	/*
	consider building of height 2. so the water
	trapped above it depends on the height of the
	max building on the left side ~ side L... and sideR...
	since width is 1 unit, we subtract min value from
	sideL and sideR to that of arr[i]...
	so basically :
	water[i] (where arr_(i=3) = 2) = min(maxL, maxR) - arr[i]

	... do that for each index an then sum it to get all the
	area of trapped rainwater... (note that our area is 1 unit...)

	*/


	int mxl[n], mxr[n];

	mxl[0] = arr[0];

	forx(i, 1, n) {
		mxl[i] = max(mxl[i - 1], arr[i]);
	}

	mxr[n - 1] = arr[n - 1];

	for (int i = n - 2; i >= 0; i--) {
		mxr[i] = max(mxr[i + 1], arr[i]);
	}

	int wtr[n];

	forn(i, n) {
		wtr[i] = min(mxl[i], mxr[i]) - arr[i];
		// since 1 unit width...
	}

// hence total area filled by rainwater would be :
	int sum = accumulate(wtr, wtr + n, 0);

	return sum;

}

int32_t main() {
///////////
	c_p_c();
///////////
	_IOS
//////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	int arr[] = {3, 0, 0, 2, 0, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << rw(arr, n) << endl;


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}
