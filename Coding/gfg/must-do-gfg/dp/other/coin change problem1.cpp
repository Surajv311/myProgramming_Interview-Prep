/*
///////////////////////////////////////////
//Question/Info

Coin change problem -1
Maximum number of ways

Given a value N, if we want to make change for N cents,
and we have infinite supply of each of S = { S1, S2, .. , Sm}
valued coins, how many ways can we make the change?
The order of coins doesn’t matter.

For example, for N = 4 and S = {1,2,3},
there are four solutions: {1,1,1,1},{1,1,2},{2,2},{1,3}.
So output should be 4. For N = 10 and S = {2, 5, 3, 6},
there are five solutions:
{2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} and {5,5}.
So the output should be 5.

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

int ccp(int wt[], int W , int n) {

	int dp[n + 1][W + 1];

	forn(i, n + 1) {
		forn(j, W + 1) {

			if (i == 0 or j == 0) {
				dp[i][j] = 0 ;

				if (j == 0) {
					dp[i][j] = 1;
				}
			}

			else {

				if (wt[i - 1] <= j) {
					dp[i][j] = dp[i][j - wt[i - 1]] + dp[i - 1][j];
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

	int n = sizeof(wt) / sizeof(wt[0]);

	int W = 5; // capacity of unbounded knapsack

	ct(ccp(wt, W , n));


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}