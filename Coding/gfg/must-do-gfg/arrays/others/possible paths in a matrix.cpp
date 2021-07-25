/*
///////////////////////////////////////////
//Question/Info

Count all possible paths from top left to bottom right
Easy Accuracy: 41.69% Submissions: 2981 Points: 2
The task is to count all the possible paths from top left to bottom right of a m X n matrix with the constraints that from each cell you can either move only to right or down.

Example 1:

Input: m = 2, n = 2
Output: 2
Explanation: Two possible ways are
RD and DR.

Example 2:

Input: m = 3, R = 3
Output: 6
Explanation: Six possible ways are
RRDD, DDRR, RDDR, DRRD, RDRD, DRDR.

Your Task:
You dont need to read input or print anything. Complete the function numberOfPaths() which takes m and n as input parameter and returns count all the possible paths.The answer may be very large, compute the answer modulo 109 + 7.


Expected Time Complexity: O(m*n)
Expected Auxiliary Space: O(m*n)

Constraints:
1 <= m <=100
1 <= n <=100

Company Tags
 Amazon Cisco Linkedin Ola Cabs Paytm Walmart

author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define _IOS   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long double ld;
typedef long long int lli;

#pragma GCC optimize("Ofast")

void c_p_c()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int32_t main() {
///////////
	c_p_c();
///////////
	_IOS
//////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

// grid question
	// recursion and dp solution...

	class Solution {
	public:

		int dp[1000][1000];

		long long int solve(int i, int j , int m , int n ) {


			if (i == m - 1 and j == n - 1) {
				return 1;
			}

			else if (i >= m or j >= n) {
				return 0;
			}

			if (dp[i][j] != -1) {
				return dp[i][j];
			}
			return dp[i][j] = (solve(i + 1, j, m, n) + solve(i, j + 1, m, n)) % 1000000007;
		}


		long long int numberOfPaths(int m, int n) {
			// code here


			memset(dp, -1, sizeof(dp));
			return solve(0, 0, m, n);

		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}