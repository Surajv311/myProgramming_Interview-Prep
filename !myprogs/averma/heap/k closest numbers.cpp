/*
///////////////////////////////////////////
//Question/Info

Find k closest numbers in an unsorted array

Given an unsorted array and two numbers x and k, find k closest values to x.
Examples:


Input : arr[] = {10, 2, 14, 4, 7, 6}, x = 5, k = 3
Output : 4 6 7
Three closest values of x are 4, 6 and 7.

Input : arr[] = {-10, -50, 20, 17, 80}, x = 20, k = 2
Output : 17, 20

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


void pkc(int arr[], int n, int x, int k)
{
	// Make a max heap of difference with
	// first k elements.
	p_q<pii> pqh;

	forn(i, n) {
		pqh.push({ abs(arr[i] - x), arr[i] });

		if (pqh.size() > k) {
			pqh.pop();
		}
	}

	// Print contents of heap.
	while (!pqh.empty()) {
		cout << pqh.top().second << " ";
		pqh.pop();
	}
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
	int arr[] = {10, 2, 14, 4, 7, 6};
	int x = 5, k = 3;
	int n = sizeof arr / sizeof arr[0];
	pkc(arr, n, x, k);

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}