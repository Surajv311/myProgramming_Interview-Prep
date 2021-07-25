/*
//////////////////////////////////////////////////////
//Question/Info

Maximum sum increasing subsequence
Medium Accuracy: 49.92% Submissions: 17398 Points: 4
Given an array arr of N positive integers, the task is to find the maximum sum increasing subsequence of the given array.


Example 1:

Input: N = 5, arr[] = {1, 101, 2, 3, 100}
Output: 106
Explanation:The maximum sum of a
increasing sequence is obtained from
{1, 2, 3, 100}
Example 2:

Input: N = 3, arr[] = {1, 2, 3}
Output: 6
Explanation:The maximum sum of a
increasing sequence is obtained from
{1, 2, 3}

Your Task:
You don't need to read input or print anything. Complete the function maxSumIS() which takes N and array arr as input parameters and returns the maximum value.


Expected Time Complexity: O(N2)
Expected Auxiliary Space: O(N)


Constraints:
1 ≤ N ≤ 103
1 ≤ arr[i] ≤ 105

Company Tags
 Amazon Morgan Stanley Microsoft

author: srj_v
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


	class Solution {


	public:
		int maxSumIS(int arr[], int n)
		{
			// Your code goes here

			int dp[n];

			for (int i = 0 ; i < n ; i++) {
				dp[i] = arr[i];
			}

			for (int i = 1 ; i < n ; i ++) {
				for (int j = 0 ; j < i ; j++) {

					if (arr[i] > arr[j])
					{
						dp[i] = max(dp[i], dp[j] + arr[i]);
					}

				}
			}
			int ans;
			return (ans = *max_element(dp, dp + n));

		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////