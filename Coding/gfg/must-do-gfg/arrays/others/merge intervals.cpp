/*
///////////////////////////////////////////
//Question/Info

Merge Intervals
Medium

7409

385

Add to List

Share
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.



Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.


Constraints:

1 <= intervals.length <= 104
intervals[i].length == 2
0 <= starti <= endi <= 104

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
		vector<vector<int>> merge(vector<vector<int>>& intervals) {

			// brute force approach is o(n^2) after sorting ~ o(nlogn)

			// optimal is o(n) after sorting

			vector<vector<int>> ans;
			if (intervals.size() == 0) {
				return ans;
			}


			sort(intervals.begin(), intervals.end());

			vector<int> start = intervals[0];

			for (auto it : intervals) {

				if (start[1] >= it[0]) {
					start[1] = max(start[1], it[1]);
				}
				else {
					ans.push_back(start);
					start = it;
				}

			}

			// pushing the last element

			ans.push_back(start);

			return ans;

		}
	};


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}