/*
///////////////////////////////////////////

// OPTIMISED KNAPSACK VIA DP

///////////////////////////////////////////
*/

#include <bits/stdc++.h>
#define int long long int
#define setbits(x) __builtin_popcount(x)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ct(x) cout<<x<<endl;
#define ct2(x,y) cout<<x<<" "<<y<<endl;
#define forn(i, n) for (int i = 0; i < (int)(n); i++)
#define forx(i, x, n) for (int i = x ; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

//typedef long long int lli;
typedef long double ld;
//typedef pair<int, int> pii;
//typedef vector<int> vi;
//typedef vector<pii> vii;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

using namespace std;


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

// OPTIMISED KNAPSACK VIA DP

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