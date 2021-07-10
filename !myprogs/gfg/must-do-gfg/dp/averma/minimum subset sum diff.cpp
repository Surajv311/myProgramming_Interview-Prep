/*
///////////////////////////////////////////
//Question/Info

minimum subset sum difference

Given a set of integers, the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum.
If there is a set S with n elements, then if we assume Subset1 has m elements, Subset2 must have n-m elements and the value of abs(sum(Subset1) – sum(Subset2)) should be minimum.
Example:

Input:  arr[] = {1, 6, 11, 5}
Output: 1
Explanation:
Subset1 = {1, 5, 6}, sum of Subset1 = 12
Subset2 = {11}, sum of Subset2 = 11

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


int mssd(int arr[], int n)
{

	int sum = accumulate(arr, arr + n, 0);

	int dp[n + 1][sum + 1]; // can be bool also
	// memset(dp, -1, sizeof(dp));

	//  so first we mark all the true/false nodes...
	// now we jump to the last row of the dp table
	// Since we know we have to find min difference,
	//  means min diff of set1 and set2, i.e set1-set2...
	// We know set1+set2 = sum of the arr.
	// So means we have to find min value of total sum - (2*sum of set1 elements)
	// Now we go to the last row of dp table
	// there we would get true/false values for different 'j' value, i.e total sum
	// Now we iterate backwards from half (of 'j'/total sum) in the last row
	// Visualize (.....SET1 total...|half/middle|......SET2 total.....->Total sum)
	// so from half or middle the first true value we encounter would be the max
	// value from set1...
	// Hence min diff: sum-(2*set1 sum)... So that first element we encounter would
	// be the weight that is possible with the given sum of elements....
	// Hence we get the ans....

	forx(i, 0, (n + 1)) {
		forx(j, 0, (sum + 1)) {
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

	int dif = INT_MIN;
	for (int i = sum / 2; i >= 0; i--) {
		if (dp[n][i]) {
			// ct(dp[n][i])
			dif = sum - (2 * i);
			break;
		}
	}

	return dif;
}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	// int arr[] = {1, 2, 3, 4, 5, 7};
	int arr[] = {2, 2, 7};
	int n = sizeof(arr) / sizeof(arr[0]);


	ct(mssd(arr, n));




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

