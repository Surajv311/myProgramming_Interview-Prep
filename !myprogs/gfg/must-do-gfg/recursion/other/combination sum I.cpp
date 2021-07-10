/*
//////////////////////////////////////////////////////
//Question/Info

39. Combination Sum I
Medium

6599

166

Add to List

Share
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

It is guaranteed that the number of unique combinations that sum up to target is less than 150 combinations for the given input.



Example 1:

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.
Example 2:

Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]
Example 3:

Input: candidates = [2], target = 1
Output: []
Example 4:

Input: candidates = [1], target = 1
Output: [[1]]
Example 5:

Input: candidates = [1], target = 2
Output: [[1,1]]


Constraints:

1 <= candidates.length <= 30
1 <= candidates[i] <= 200
All elements of candidates are distinct.
1 <= target <= 500

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

		void recur(vector<int>& arr, int target, vector<int> &ds ,  vector<vector<int>>& ans, int ind) {

//     base case

			if (ind == arr.size()) {
				if (target == 0) ans.push_back(ds);
				return;
			}


//     including the number
//     when including , ensure its lesss than target

			if (arr[ind] <= target) {
				ds.push_back(arr[ind]);
				recur(arr, target - arr[ind], ds, ans, ind); // hence 'i' is same...
				ds.pop_back();
			}

//         skipping the number

			recur(arr, target, ds, ans, ind + 1);

		}

		vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

			vector<vector<int>> ans;
			vector<int> ds;
			int ind = 0 ;
			recur(candidates, target, ds, ans, ind);

			return ans;

		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////