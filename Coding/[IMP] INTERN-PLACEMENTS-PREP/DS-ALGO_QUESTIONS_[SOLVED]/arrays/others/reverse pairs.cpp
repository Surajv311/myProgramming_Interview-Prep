/*
///////////////////////////////////////////
//Question/Info

Reverse Pairs
Hard

1437

146

Add to List

Share
Given an integer array nums, return the number of reverse pairs in the array.

A reverse pair is a pair (i, j) where 0 <= i < j < nums.length and nums[i] > 2 * nums[j].



Example 1:

Input: nums = [1,3,2,3,1]
Output: 2
Example 2:

Input: nums = [2,4,3,5,1]
Output: 3


Constraints:

1 <= nums.length <= 5 * 104
-231 <= nums[i] <= 231 - 1

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

		int count;

		void merge(vector<int> &nums, int low , int mid , int high) {

			int x = low; int y = mid + 1;

			while (x <= mid and y <= high) {

				if ((long)nums[x] > (long)2 * nums[y])
				{
					count += (mid - x + 1);
					y++;
				}
				else {
					x++;
				}

			}

			sort(nums.begin() + low , nums.begin() + high + 1);
			return;

		}

		int mergeSort(vector<int> &nums, int low, int high ) {
			// int count = 0;
			if (low < high) {

				int mid = low + (high - low) / 2;
				//count+=
				mergeSort(nums, low, mid);
				mergeSort(nums, mid + 1, high);
				merge(nums, low, mid, high);

			}

			// return count;
		}

		int reversePairs(vector<int>& nums) {

			count = 0;
			int size = nums.size() - 1;
			(mergeSort(nums, 0, size));

			return count;

		}

		/*

		 int merge(vector<int> &nums, int l, int m, int h) {
		    int count=0;
		    int j=m+1;
		    for(int i=l;i<=m;++i) {
		        while(j<=h && nums[i] > 2LL*nums[j]) ++j;
		        count += (j - (m+1));
		    }
		    // merge of two sorted array
		    vector<int> temp;
		    int left=l,right=m+1;
		    // loop till on of them execuested
		    while(left<=m && right<=h) {
		        if(nums[left]<=nums[right]) temp.push_back(nums[left++]);
		        else temp.push_back(nums[right++]);
		    }
		    // remaining elements of left side
		    while(left<=m) temp.push_back(nums[left++]);
		    // remaining elements of right side
		    while(right<=h) temp.push_back(nums[right++]);
		    // assingn in main vector after merging
		    for(int i=l;i<=h;++i) {
		        nums[i]=temp[i-l];
		    }
		    return count;
		}
		int mergeSort(vector<int> &nums, int l, int h) {
		    if(l>=h) return 0; // A single element does not contain any pair
		    int m=(l+h)/2;
		    int count=0;
		    count += mergeSort(nums,l,m);    // count from left side of vector
		    count += mergeSort(nums,m+1,h);  // count from right side of vector
		    count += merge(nums,l,m,h);      // count merge
		    return count;
		}
		int reversePairs(vector<int>& nums) {
		    return mergeSort(nums, 0, nums.size()-1);
		}


		*/


	};


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}