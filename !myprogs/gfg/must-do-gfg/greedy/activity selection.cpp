/*
//////////////////////////////////////////////////////
//Question/Info

Activity Selection
Easy Accuracy: 47.53% Submissions: 15783 Points: 2
Given N activities with their start and finish day given in array start[ ] and end[ ]. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a given day.
Note : Duration of the activity includes both starting and ending day.


Example 1:

Input:
N = 2
start[] = {2, 1}
end[] = {2, 2}
Output:
1
Explanation:
A person can perform only one of the
given activities.
Example 2:

Input:
N = 4
start[] = {1, 3, 2, 5}
end[] = {2, 4, 3, 6}
Output:
3
Explanation:
A person can perform activities 1, 2
and 4.

Your Task :
You don't need to read input or print anything. Your task is to complete the function activityselection() which takes array start[ ], array end[ ] and integer N as input parameters and returns the maximum number of activities that can be done.


Expected Time Complexity : O(N * Log(N))
Expected Auxilliary Space : O(N)

Constraints:
1 ≤ N ≤ 2*105
1 ≤ start[i] ≤ end[i] ≤ 109

Company Tags
 Facebook Morgan Stanley

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

	int activitySelection(vector<int> start, vector<int> end, int n)
	{
		// Your code here

		vector<pair<int, int>> v;

		for (int i = 0 ; i < n ; i++) v.push_back({start[i], end[i]});

		sort(v.begin(), v.end(), [](pair<int, int>A, pair<int, int>B) {
			return A.second < B.second; // sorting based on end time..
		});

		int count = 1 ;

		pair<int, int> l = v[0];

		for (int i = 1 ;  i < n ; i++) {

			if (v[i].first > l.second) {
				count++;
				l = v[i];
			}

		}

		return count ;
	}





// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////