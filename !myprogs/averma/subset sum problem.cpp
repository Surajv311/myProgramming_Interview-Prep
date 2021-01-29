/*
///////////////////////////////////////////
//Question/Info

subset sum problem
Given a set of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum.

Example:

Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 9
Output: True
There is a subset (4, 5) with sum 9.

Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 30
Output: False
There is no subset that add up to 30.

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

	// for (int i = 0; i < n + 1; i++)
	// 	dp[i][0] = true;

	// for (int i = 0; i < W + 1; i++)
	// 	dp[0][i] = false;

	forx(i, 0, (n + 1)) {
		forx(j, 0, (W + 1)) {
			if (i == 0 or j == 0) {
				dp[i][j] = false ;
				if (j == 0) {
					dp[i][j] = true;
				}
			}

			else {
				if (arr[i] > W) {
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

	int arr[] = {1, 2, 3, 4, 5, 7};
	int W = 40 ;
	int n = sizeof(arr) / sizeof(arr[0]);
	if (subss(arr, n, W)) {
		ct("Yes");
	}
	else {
		ct("No");
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

/*
bool isSubsetSum(int set[], int n, int sum)
{
    // Base Cases
    if (sum == 0)
        return true;
    if (n == 0)
        return false;

    // If last element is greater than sum,
    // then ignore it
    if (set[n - 1] > sum)
        return isSubsetSum(set, n - 1, sum);

    //else, check if sum can be obtained by any
//of the following:
  //    (a) including the last element
    //  (b) excluding the last element

    return isSubsetSum(set, n - 1, sum)
           || isSubsetSum(set, n - 1, sum - set[n - 1]);
}
*/