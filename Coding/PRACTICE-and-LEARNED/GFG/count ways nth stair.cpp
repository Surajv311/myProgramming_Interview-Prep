/*
//////////////////////////////////////////////////////
//Info-Que.

Count ways to N'th Stair(Order does not matter)
Medium Accuracy: 51.45% Submissions: 23241 Points: 4
There are N stairs, and a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top (order does not matter).
Note: Order does not matter means for n=4 {1 2 1},{2 1 1},{1 1 2} are considered same.

Example 1:

Input:
N = 4
Output: 3
Explanation: You can reach 4th stair in
3 ways.
3 possible ways are:
1, 1, 1, 1
1, 1, 2
2, 2
Example 2:

Input:
N = 5
Output: 3
Explanation:
You may reach the 5th stair in 3 ways.
The 3 possible ways are:
1, 1, 1, 1, 1
1, 1, 1, 2
1, 2, 2
Your Task:
Your task is to complete the function countWays() which takes single argument(N) and returns the answer.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 <= N <= 106

Company Tags
 Accolite Amazon

//////////////////////////////////////////////////////
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

//////////////////////////////////////////////////////


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


	long long countWays(int m)
	{
		// your code here

		long long dp[m + 1];

		dp[0] = dp[1] = 1;

		for (int i = 2; i <= m; i++)
		{
			dp[i] = (dp[1] + dp[i - 2]) % 1000000007;
		}

		return dp[m];
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////


/*
// code by: srj_v //
*/


