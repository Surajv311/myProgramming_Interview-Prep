/*
///////////////////////////////////////////
//Question/Info

 Next Permutation
Medium

5623

1913

Add to List

Share
Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

The replacement must be in place and use only constant extra memory.



Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]
Example 3:

Input: nums = [1,1,5]
Output: [1,5,1]
Example 4:

Input: nums = [1]
Output: [1]


Constraints:

1 <= nums.length <= 100
0 <= nums[i] <= 100

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
		void nextPermutation(vector<int>& nums) {

			next_permutation(nums.begin(), nums.end());


			/*

			Solution 1

			Just for info: There's a library function that does the job, even going from totally reverse sorted to sorted:

			void nextPermutation(vector<int>& nums) {
			next_permutation(begin(nums), end(nums));
			}
			//////////////////////////////////////////

			Solution 2

			Using library functions for all building blocks of the algorithm. Very nice how they all play together, notice the total lack of +1/-1, it all fits exactly.

			void nextPermutation(vector<int>& nums) {
			auto i = is_sorted_until(nums.rbegin(), nums.rend());
			if (i != nums.rend())
			swap(*i, *upper_bound(nums.rbegin(), i, *i));
			reverse(nums.rbegin(), i);
			}
			/////////////////////////////////////////

			Solution 3

			Doing it all on my own (except swap, let's not be silly):

			void nextPermutation(vector<int>& nums) {
			int i = nums.size() - 1, k = i;
			while (i > 0 && nums[i-1] >= nums[i])
			i--;
			for (int j=i; j<k; j++, k--)
			swap(nums[j], nums[k]);
			if (i > 0) {
			k = i--;
			while (nums[k] <= nums[i])
			    k++;
			swap(nums[i], nums[k]);
			}
			}

			////////////////////////////////////////////////////

			void nextPermutation(vector<int> &num)
			{
			if (num.empty()) return;

			// in reverse order, find the first number which is in increasing trend (we call it violated number here)
			int i;
			for (i = num.size()-2; i >= 0; --i)
			{
			    if (num[i] < num[i+1]) break;
			}

			// reverse all the numbers after violated number
			reverse(begin(num)+i+1, end(num));
			// if violated number not found, because we have reversed the whole array, then we are done!
			if (i == -1) return;
			// else binary search find the first number larger than the violated number
			auto itr = upper_bound(begin(num)+i+1, end(num), num[i]);
			// swap them, done!
			swap(num[i], *itr);
			}


			*/
		}
	};


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}