/*
///////////////////////////////////////////
//Question/Info

Max Consecutive Ones
Easy

1292

383

Add to List

Share
Given a binary array nums, return the maximum number of consecutive 1's in the array.



Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2


Constraints:

1 <= nums.length <= 105
nums[i] is either 0 or 1.

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

	class Solution {
	public:
		int findMaxConsecutiveOnes(vector<int>& nums) {


			int maxC = 0, count = 0;
			for (auto i : nums) {
				if (i == 1) {
					maxC = max(++count, maxC);
				}
				else {
					count = 0;
				}
			}
			return maxC;

		}
	};


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}