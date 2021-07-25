/*
///////////////////////////////////////////
//Question/Info

recursion is the parent of dp.
dp is enhanced recursion.
we us dp when choice given or its asking optimal...
if two functions are being called in a recursion then its probable that you could use dp.

recusrsive function-> memoization and top-down

knapsack types: fractional(done via greedy) , 0-1 knapsack , unbounded knapsack

fractional... we can divide the weight of items and add in values...
0-1... we either put an item or not,...can't divide like fractional...
unbounded... we can add multiple occurences of an item...

recursive base condition becomes similarly initialization for top down...

When to apply dp... when knapsack like questions given...
like to find max of something from..............


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

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

// 0- 1 knapsack dp

	int knapSack(int W, int wt[], int val[], int n)
	{
		int i, j;
		int K[n + 1][W + 1];

		// Build table K[][] in bottom up manner
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= W; j++)
			{
				if (i == 0 || j == 0)
					K[i][j] = 0;
				else if (wt[i - 1] <= j)
					K[i][j] = max(val[i - 1]
					              + K[i - 1][j - wt[i - 1]],
					              K[i - 1][j]);
				else
					K[i][j] = K[i - 1][j];
			}
		}

		return K[n][W];
	}



	return 0;
}
// int dp[n + 1][W + 1];

