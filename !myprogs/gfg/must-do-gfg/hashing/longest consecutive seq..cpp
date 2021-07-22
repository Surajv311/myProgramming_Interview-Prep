/*
//////////////////////////////////////////////////////
//Question/Info

128. Longest Consecutive Sequence
Medium

6183

287

Add to List

Share
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.

Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9


Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109

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


	int longestConsecutive(vector<int>& nums) {

		unordered_set<int> s;

		for (auto x : nums) s.insert(x);

		int count = 0;

		for (auto x : nums) {

			if (!s.count(x - 1)) {

				/*  if a number one less than x doesn't exist means
				     x is the minimum number and know we can move
				     upwards and count all the numbers in this
				     streak. As if a number less than x existed means
				     x is not the minimum so we skip it. We must start
				     with minimum number only and move upwards
				     to maintain o(n) complexity...
				 */

				int num = x;
				int curCount = 1;

				while (s.count(num + 1)) {
					curCount++;
					num++; // incrementing num...
				}

				count = max(count, curCount);
			}
		}

		return count;

	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////