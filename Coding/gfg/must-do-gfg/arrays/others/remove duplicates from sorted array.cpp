/*
///////////////////////////////////////////
//Question/Info

Remove Duplicates from Sorted Array
Easy

3933

7086

Add to List

Share
Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Clarification:

Confused why the returned value is an integer but your answer is an array?

Note that the input array is passed in by reference, which means a modification to the input array will be known to the caller as well.

Internally you can think of this:

// nums is passed in by reference. (i.e., without making a copy)
int len = removeDuplicates(nums);

// any modification to nums in your function would be known by the caller.
// using the length returned by your function, it prints the first len elements.
for (int i = 0; i < len; i++) {
    print(nums[i]);
}


Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2]
Explanation: Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the returned length.
Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4]
Explanation: Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively. It doesn't matter what values are set beyond the returned length.


Constraints:

0 <= nums.length <= 3 * 104
-104 <= nums[i] <= 104
nums is sorted in ascending order.

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
		int removeDuplicates(vector<int>& nums) {

			int i = 0;

			for (int j = 1; j < nums.size(); j++) {

				if (nums[i] != nums[j]) {
					i++;
					nums[i] = nums[j];

				}

			}

			if (nums.size() == 0) {
				return 0;
			}

			return i + 1;
		}

		/*
		WE CAN ALSO USE SET STL ......

		or

		{
		nums.erase(unique(nums.begin() ,nums.end()),nums.end() );
		return nums.size() ;
		}


		*/
	};




////////////////
	// unordered_set<int> us;


	// int arr[8] = {1, 1, 2, 2, 4, 6, 7, 7};

	// for (int i = 0 ; i < 8 ; i++) {
	// 	us.insert(arr[i]);
	// }

	// for (auto it = us.begin(); it != us.end(); it++) {
	// 	cout << *it << " ";
	// }


	// // set<int, int> s; -> error

	// set<pair<int, int>> ss; -> correct

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}