/*
///////////////////////////////////////////
//Question/Info


WHENEVER ARRAY IS SORTED, THINK OF USING BINARY SEARCH ,
SINCE FOR LINEAR SEARCH : O(n) AND BINARY SEARCH - O(log(n))

find number of rotations in a sorted and rotated array.



author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define int 		   long long int
#define setbits(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout << x << "\n";
#define ct2(x,y) 	   cout << x << " " << y << "\n";
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

int cr(int arr[], int l, int h)
{
	// This condition is needed to handle the case
	// when the array is not rotated at all
	if (h < l)
		return 0;

	// If there is only one element left
	if (h == l)
		return l;

	// Find mid
	int m = l + (h - l) / 2; /*(low + high)/2;*/

	// Check if element (mid+1) is minimum element.
	// Consider the cases like {3, 4, 5, 1, 2}
	if (m < h && arr[m + 1] < arr[m])
		return (m + 1);

	// Check if mid itself is minimum element
	if (m > l && arr[m] < arr[m - 1])
		return m;

	// Decide whether we need to go to left half or
	// right half
	if (arr[h] > arr[m])
		return cr(arr, l, m - 1);

	return cr(arr, m + 1, h);
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

	int arr[] = {15, 18, 2, 3, 6, 12};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << cr(arr, 0, n - 1);


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}