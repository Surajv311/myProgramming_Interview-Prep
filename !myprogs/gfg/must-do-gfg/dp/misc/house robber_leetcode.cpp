/*
//////////////////////////////////////////////////////
//Question/Info

198. House Robber
Medium

7612

202

Add to List

Share
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.



Example 1:

Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.
Example 2:

Input: nums = [2,7,9,3,1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
Total amount you can rob = 2 + 9 + 1 = 12.


Constraints:

1 <= nums.length <= 100
0 <= nums[i] <= 400

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

		int dp[10001];

		int fun(vector<int> &nums, int n, int &ans) {

			if (n < 0) return 0;

			if (dp[n] != -1) return dp[n];

			int a =  nums[n] + fun(nums, n - 2, ans);
			int b = fun(nums, n - 1, ans);

			ans = max(a, b);
			dp[n] = ans;

			return dp[n];
		}
		int rob(vector<int>& nums) {

			if (nums.size() == 1) return nums[0];

			memset(dp, -1, sizeof(dp));
			int n = nums.size();
			int ans = 0;
			fun(nums, n - 1, ans);

			return ans;
		}
	};




	/*

	//////////////////////////////////////////////////////////

	This particular problem and most of others can be approached using the following sequence:

	Find recursive relation
	Recursive (top-down)
	Recursive + memo (top-down)
	Iterative + memo (bottom-up)
	Iterative + N variables (bottom-up)
	Step 1. Figure out recursive relation.
	A robber has 2 options: a) rob current house i; b) don't rob current house.
	If an option "a" is selected it means she can't rob previous i-1 house but can safely proceed to the one before previous i-2 and gets all cumulative loot that follows.
	If an option "b" is selected the robber gets all the possible loot from robbery of i-1 and all the following buildings.
	So it boils down to calculating what is more profitable:

	robbery of current house + loot from houses before the previous
	loot from the previous house robbery and any loot captured before that
	rob(i) = Math.max( rob(i - 2) + currentHouseValue, rob(i - 1) )

	Step 2. Recursive (top-down)
	Converting the recurrent relation from Step 1 shound't be very hard.

	public int rob(int[] nums) {
	    return rob(nums, nums.length - 1);
	}
	private int rob(int[] nums, int i) {
	    if (i < 0) {
	        return 0;
	    }
	    return Math.max(rob(nums, i - 2) + nums[i], rob(nums, i - 1));
	}
	This algorithm will process the same i multiple times and it needs improvement. Time complexity: [to fill]

	Step 3. Recursive + memo (top-down).

	int[] memo;
	public int rob(int[] nums) {
	    memo = new int[nums.length + 1];
	    Arrays.fill(memo, -1);
	    return rob(nums, nums.length - 1);
	}

	private int rob(int[] nums, int i) {
	    if (i < 0) {
	        return 0;
	    }
	    if (memo[i] >= 0) {
	        return memo[i];
	    }
	    int result = Math.max(rob(nums, i - 2) + nums[i], rob(nums, i - 1));
	    memo[i] = result;
	    return result;
	}
	Much better, this should run in O(n) time. Space complexity is O(n) as well, because of the recursion stack, let's try to get rid of it.

	Step 4. Iterative + memo (bottom-up)

	public int rob(int[] nums) {
	    if (nums.length == 0) return 0;
	    int[] memo = new int[nums.length + 1];
	    memo[0] = 0;
	    memo[1] = nums[0];
	    for (int i = 1; i < nums.length; i++) {
	        int val = nums[i];
	        memo[i+1] = Math.max(memo[i], memo[i-1] + val);
	    }
	    return memo[nums.length];
	}
	Step 5. Iterative + 2 variables (bottom-up)
	We can notice that in the previous step we use only memo[i] and memo[i-1], so going just 2 steps back. We can hold them in 2 variables instead. This optimization is met in Fibonacci sequence creation and some other problems [to paste links].

	// the order is: prev2, prev1, num
	public int rob(int[] nums) {
	    if (nums.length == 0) return 0;
	    int prev1 = 0;
	    int prev2 = 0;
	    for (int num : nums) {
	        int tmp = prev1;
	        prev1 = Math.max(prev2 + num, prev1);
	        prev2 = tmp;
	    }
	    return prev1;
	}


	////////////////////////////////////////////////////

	*/


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////