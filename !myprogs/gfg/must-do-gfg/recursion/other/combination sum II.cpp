/*
//////////////////////////////////////////////////////
//Question/Info

40. Combination Sum II
Medium

3126

94

Add to List

Share
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.



Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output:
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
Example 2:

Input: candidates = [2,5,2,1,2], target = 5
Output:
[
[1,2,2],
[5]
]


Constraints:

1 <= candidates.length <= 100
1 <= candidates[i] <= 50
1 <= target <= 30


 ABCO Accolite Amazon Infosys Microsoft


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
// no need to use ind... unlike CSI question earlier...
			if (target == 0) {
				ans.push_back(ds);
				return;
			}


// including the numbers...

			for (int i = ind ; i < arr.size(); i++) {

				if (arr[i] > target) break; // since elements ahead would obviously be greater..
				if (i > ind and arr[i] == arr[i - 1]) continue; // since we must have uniques elements....

				ds.push_back(arr[i]);
				recur(arr, target - arr[i], ds, ans, i + 1); // hence 'i' is same.... i & ind..same...
				ds.pop_back();

			}
		}


		vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

			vector<vector<int>> ans;
			vector<int> ds;
			int ind = 0 ;

//          sorting ....
			sort(candidates.begin(), candidates.end());

			recur(candidates, target, ds, ans, ind);

			return ans;
		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////