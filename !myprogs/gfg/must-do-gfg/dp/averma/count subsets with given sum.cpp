/*
///////////////////////////////////////////
//Question/Info

count subsets sum with X

Given an array arr[] of length N and an integer X, the task is to find the number of subsets with sum equal to X.

Examples:

Input: arr[] = {1, 2, 3, 3}, X = 6
Output: 3
All the possible subsets are {1, 2, 3},
{1, 2, 3} and {3, 3}

Input: arr[] = {1, 1, 1, 1}, X = 1
Output: 4

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


int subsx(int arr[], int n, int W)
{


	int dp[n + 1][W + 1];
	// memset(dp, -1, sizeof(dp));
	forx(i, 0, (n + 1)) {
		forx(j, 0, (W + 1)) {
			if (i == 0 or j == 0) {
				dp[i][j] = 0 ;
				if (j == 0) {
					dp[i][j] = 1;
				}
			}

			else {
				if (arr[i - 1] > j) {
					dp[i][j] = dp[i - 1][j];
				}
				else {
					dp[i][j] = ((dp[i - 1][j]) + (dp[i - 1][j - arr[i - 1]]));
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

	int arr[] = {1, 2, 3, 4, 5, 7};
	int W = 6 ;
	int n = sizeof(arr) / sizeof(arr[0]);

	// its very similar to subset sum problem
	ct(subsx(arr, n, W));




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

