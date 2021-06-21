/*
///////////////////////////////////////////
//Question/Info

Minimum Swaps to Sort
Medium Accuracy: 50.0% Submissions: 53681 Points: 4
Given an array of n distinct elements. Find the minimum number of swaps required to sort the array in strictly increasing order.


Example 1:

Input:
nums = {2, 8, 5, 4}
Output:
1
Explaination:
swap 8 with 4.
Example 2:

Input:
nums = {10, 19, 6, 3, 5}
Output:
2
Explaination:
swap 10 with 3 and swap 19 with 5.

Your Task:
You do not need to read input or print anything. Your task is to complete the function minSwaps() which takes the nums as input parameter and returns an integer denoting the minimum number of swaps required to sort the array. If the array is already sorted, return 0.


Expected Time Complexity: O(nlogn)
Expected Auxiliary Space: O(n)


Constraints:
1 ≤ n ≤ 105
1 ≤ numsi ≤ 106

Company Tags
 Microsoft

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


	class Solution
	{
	public:
		//Function to find the minimum number of swaps required to sort the array.
		int minSwaps(vector<int>&nums)
		{
			// Code here
			vector<pair<int, int>> v;
			int x = 0;
			for (int i = 0; i < nums.size(); i++) {
				v.push_back({nums[i], i});
			}

			sort(v.begin(), v.end()); // properly sorted...

			for (int i = 0; i < nums.size(); i++) {
				if (i == v[i].second)  continue;
				else {
					x++;

					/* now scrambling back to original & counting at
					 the same time.... */
					swap(v[i], v[v[i].second]);

					i--; // necessary step...
				}
			}

			return x;
		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

