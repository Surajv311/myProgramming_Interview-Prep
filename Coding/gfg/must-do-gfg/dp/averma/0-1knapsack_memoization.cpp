/*
///////////////////////////////////////////
//Question/Info

0-1 knapsack memoization

///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define int 		   long long int
#define setbits(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define ct(x) 		   cout<<x<<endl;
#define ct2(x,y) 	   cout<<x<<" "<<y<<endl;
#define forn(i,n) 	   for(int i = 0; i < (int)(n); i++)
#define forx(i,x,n)    for(int i = x; i < (int)(n); i++)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed<<setprecision(y)<<x;
#define PI 			   3.1415926535897932384626433832795
#define MOD 		   1000000007 // (1e9+7)
#define pii 		   pair<int,int>
#define pis 		   pair<int,string>
#define vi  		   vector<int>
#define vii 		   vector<pii>
#define mii 		   map<int,int>
//typedef long long int lli;
typedef long double ld;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int dp[101][101]; // upper limits ... constraints

int knapsack(int wt[], int val[], int W, int n)
{

	if (n == 0 or W == 0) {
		return 0;
	}

	if (dp[n][W] != -1) {
		return dp[n][W];
	}
	if (wt[n - 1] > W) {
		return dp[n][W] = (knapsack(wt, val, W, n - 1));
	}



	return dp[n][W] = (max((val[n - 1] + knapsack(wt, val, W - wt[n - 1], n - 1)), knapsack(wt, val, W, n - 1) ));





}


int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

// 0-1 knapsack memoization

// memoizing dp

	int wt[5] = {1, 2, 3, 4, 5};
	int val[5] = {12, 10, 9, 8, 7};
	int W = 8 ;
	int n = 5 ;

	memset(dp, -1, sizeof(dp)); // you may initialise only by 0 or -1 ...
	ct(knapsack(wt, val, W, n));


	return 0;
}