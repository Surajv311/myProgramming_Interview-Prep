/*
///////////////////////////////////////////
//Question/Info

count number of subset with a given difference, say 2
(It's similar to target sum question leetcode)

In case of target sum it basically asks:
Given an integer array, find number of ways to calculate a target number using only array elements and addition or subtraction operator.

Example:

Input: arr[] = {-3, 1, 3, 5}, k = 6
Output: 4
Explanation -
- (-3) + (3)
+ (1) + (5)
+ (-3) + (1) + (3) + (5)
- (-3) + (1) - (3) + (5)

Input: arr[] = {2, 3, -4, 4}, k = 5
Output: 6
Explanation -
+ (2) + (3)
+ (2) + (3) + (4) + (-4)
+ (2) + (3) - (4) - (-4)
- (3) + (4) - (-4)
- (2) + (3) + (4)
- (2) + (3) - (-4)

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

int tss(int arr[], int n, int W) {

	int dp[n + 1][W + 1];
// memset(dp, -1, sizeof(dp));
	for (int i = 0 ; i < (n + 1); i++) {
		for (int j = 0; j < (W + 1); j++) {
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

	int arr[] = {1, 1, 2, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	int diff = 1;
	int sum = accumulate(arr, arr + n, 0);

// so basically the difference of sum of two subsets must be (say/given) 2

	/*
	So

	s1 - s2 = 2
	s1 + s2 = sumof(arr)

	So:
	(2 + sumof(arr))/2 = s1

	Hence we must find existence of a set s1 with sum = (shown above)
	*/
//

	int W = (diff + sum) / 2;

	cout << tss(arr, n, W);


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

/* ANOTHER SOLID APPROACH:

	int n, w  ;
	n = 4 ; w = 4;
	vector<int>a(n), dp(w + 1) ;
	dp[0] = 1 ;
	for (int &x : a) {
		cin >> x  ; // input in the array
		for (int j = w; j >= x; --j)
			dp[j] += dp[j - x] ;
	}
	cout << dp[w] ;

*/