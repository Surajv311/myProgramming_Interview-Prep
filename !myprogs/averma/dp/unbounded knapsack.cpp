/*
///////////////////////////////////////////
//Question/Info

unbounded knapsack
(Eg. Rod Cutting Problem)

Given a knapsack weight W and a set of n items with certain value vali and weight wti, we need to calculate the maximum amount that could make up this quantity exactly. This is different from classical Knapsack problem, here we are allowed to use unlimited number of instances of an item.
Examples:

Input : W = 100
       val[]  = {1, 30}
       wt[] = {1, 50}
Output : 100
There are many ways to fill knapsack.
1) 2 instances of 50 unit weight item.
2) 100 instances of 1 unit weight item.
3) 1 instance of 50 unit weight item and 50
   instances of 1 unit weight items.
We get maximum value with option 2.

Input : W = 8
       val[] = {10, 40, 50, 70}
       wt[]  = {1, 3, 4, 5}
Output : 110
We get maximum value with one unit of
weight 5 and one unit of weight 3.

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

int ukpk(int wt[], int val[], int W , int n) {

	int dp[n + 1][W + 1];

	forn(i, n + 1) {
		forn(j, W + 1) {

			if (i == 0 or j == 0) {
				dp[i][j] = 0 ;
			}

			else if (wt[i - 1] <= j) {
				dp[i][j] = max( val[i - 1] + dp[i][j - wt[i - 1]] , dp[i - 1][j]);
			}
			else {
				dp[i][j] = dp[i - 1][j];
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
	int val[] = {10, 20, 30};

//  to find maximum weight
// You can repeat the weights again even if you have included, but rejected weight are not included again

	int n = sizeof(wt) / sizeof(wt[0]);

	int W = 8; // capacity of unbounded knapsack

	ct(ukpk(wt, val, W , n));


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}