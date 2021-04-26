/*
///////////////////////////////////////////
//Question/Info
equal sum partition

Partition problem is to determine whether a given set can be partitioned into two subsets such that the sum of elements in both subsets is the same.

Examples:

arr[] = {1, 5, 11, 5}
Output: true
The array can be partitioned as {1, 5, 5} and {11}

arr[] = {1, 5, 3}
Output: false
The array cannot be partitioned into equal sum sets.
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


int subss(int arr[], int n, int W)
{


	bool dp[n + 1][W + 1];


	forx(i, 0, (n + 1)) {
		forx(j, 0, (W + 1)) {
			if (i == 0 or j == 0) {
				dp[i][j] = false ;
				if (j == 0) {
					dp[i][j] = true;
				}
			}

			else {
				if (arr[i - 1] > j) {
					dp[i][j] = dp[i - 1][j];
				}
				else {
					dp[i][j] = ((dp[i - 1][j]) or (dp[i - 1][j - arr[i - 1]]));
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

	int arr[] = {1, 1, 5, 3};

	// int W = 40 ;
	int n = sizeof(arr) / sizeof(arr[0]);

	int sum = accumulate(arr, arr + n, 0);
	int hsum = sum / 2;

// check odd/even
	// only even sum array can be partitioned into two halves...then only two equal sum sets would exist
	// once partitioned into a half, all we have to do now is find a subset with that given sum(half of...)
	// if such a set with half sum exist then obviously other set would be full-half = half...
	// its like subset sum problem

	if (sum & 1) {
		ct("No")
	}
	else {
		if (subss(arr, n, hsum)) {
			ct("Yes");
		}
		else {
			ct("No");
		}
	}


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}