/*
///////////////////////////////////////////
//Question/Info
64. Minimum Path Sum
Medium

4960

87

Add to List

Share
Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.

Note: You can only move either down or right at any point in time.

Example 1:

Input: grid = [[1,3,1],[1,5,1],[4,2,1]]
Output: 7
Explanation: Because the path 1 → 3 → 1 → 1 → 1 minimizes the sum.
Example 2:

Input: grid = [[1,2,3],[4,5,6]]
Output: 12


Constraints:

m == grid.length
n == grid[i].length
1 <= m, n <= 200
0 <= grid[i][j] <= 100

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
//	c_p_c();
///////////
	_IOS
//////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	class Solution {
	public:
		int minPathSum(vector<vector<int>>& grid) {

			int m = grid.size(); // rows...
			int n = grid[0].size();

			vector<vector<int>> dp(m, vector<int>(n, 0));

			dp[0][0] = grid[0][0];

//         intialising the rows & columns of dp table...

//         rows

			for (int i = 1 ; i < m ; i++ )
			{
				dp[i][0] = dp[i - 1][0] + grid[i][0];
			}

			// cols
			for (int j = 1 ; j < n ; j++ )
			{
				dp[0][j] = dp[0][j - 1] + grid[0][j];
			}

//         now dp

			for (int i = 1 ; i < m ; i++)
			{
				for (int j = 1 ; j < n ; j++) {

					dp[i][j] = min(dp[i][j - 1], dp[i - 1][j]) + grid[i][j];

				}
			}

			return dp[m - 1][n - 1];

		}
	};

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

