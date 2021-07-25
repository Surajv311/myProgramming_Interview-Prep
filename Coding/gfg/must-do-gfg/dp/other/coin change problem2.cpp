/*
///////////////////////////////////////////
//Question/Info

Coin change problem -2
Minimum number of coins

Given a value V, if we want to make change for V cents, and we have infinite supply of each of C = { C1, C2, .. , Cm} valued coins, what is the minimum number of coins to make the change?

Examples:

Input: coins[] = {25, 10, 5}, V = 30
Output: Minimum 2 coins required
We can use one coin of 25 cents and one of 5 cents

Input: coins[] = {9, 6, 5, 1}, V = 11
Output: Minimum 2 coins required
We can use one coin of 6 cents and 1 coin of 5 cents

///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

// #define int 		   long long int
#define setbits(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
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

typedef long long int lli;
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

int ccpp(int wt[], int W , int n) {

	int dp[n + 1][W + 1];

	forn(j, W + 1) {
		dp[0][j] = INT_MAX - 1;
	}

	forx(i, 1, n + 1) {
		dp[i][0] = 0 ;
	}

	forx(i, 1, n + 1) {
		forx(j, 1, W + 1) {

			if (i == 1) {
				if ( j % wt[i - 1] == 0) {
					dp[i][j] = j / wt[i - 1];
				}
				else {
					dp[i][j] = INT_MAX - 1;
				}
			}

			else {

				if (wt[i - 1] <= j) {
					dp[i][j] = min((1 + dp[i][j - wt[i - 1]]) , dp[i - 1][j]);
				}

				else {
					dp[i][j] = dp[i - 1][j];
				}

			}
		}
	}
	return dp[n][W];
}
int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	int wt[] = {1, 2, 3};
	int W = 5;
	int n = sizeof(wt) / sizeof(wt[0]);

	ct(ccpp(wt, W , n));


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}