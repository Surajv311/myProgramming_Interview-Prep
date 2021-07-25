/*
//////////////////////////////////////////////////////
//Question/Info

Sort an array according to the other
Medium Accuracy: 53.64% Submissions: 15835 Points: 4
Given two integer arrays A1[ ] and A2[ ] of size N and M respectively. Sort the first array A1[ ] such that all the relative positions of the elements in the first array are the same as the elements in the second array A2[ ].
See example for better understanding.
Note: If elements are repeated in the second array, consider their first occurance only.

Example 1:

Input:
N = 11
M = 4
A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
A2[] = {2, 1, 8, 3}
Output:
2 2 1 1 8 8 3 5 6 7 9
Explanation: Array elements of A1[] are
sorted according to A2[]. So 2 comes first
then 1 comes, then comes 8, then finally 3
comes, now we append remaining elements in
sorted order.
Example 2:

Input:
N = 11
M = 4
A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
A2[] = {99, 22, 444, 56}
Output:
1 1 2 2 3 5 6 7 8 8 9
Explanation: No A1[] elements are in A2[]
so we cannot sort A1[] according to A2[].
Hence we sort the elements in non-decreasing
order.
Your Task:
You don't need to read input or print anything. Your task is to complete the function sortA1ByA2() which takes the array A1[ ], array A2[ ] and their respective size N and M as input parameters and returns the sorted array A1[ ] such that the relative positions of the elements in A1[ ] are same as the elements in A2[ ]. For the elements not present in A2[ ] but in A1[ ], it appends them at the last in increasing order.

Expected Time Complexity: O(N * Log(N)).
Expected Auxiliary Space: O(N).

Constraints:
1 ≤ N, M ≤ 106
1 ≤ A1[i], A2[i] ≤ 106

Company Tags
 Amazon Microsoft

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


	vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M)
	{
		//Your code here
		// GOOD Q...

		vector<int> ans;

		map<int, int> mp; // considering map only... so that if elements not present then its displayed in sorted form...
		// A1 larger than A2..

		for (auto i : A1) mp[i]++; // ++ count of the varibles...

		for (auto i : A2) { // iterating through A2 to push elements in the sorted order via A2...
			if (mp.find(i) != mp.end()) {
				while (mp[i]--) ans.push_back(i);

				mp.erase(i); // erasing...
			}

			else continue;
		}

		/* not there could be elements in A1 which were not in A2 ...
		the common elements of A1 and A2 are sorted according to A2 ...
		but the left elements ? to accomodate them, we just run a loop again..
		and add thos element in ans.. in a general sorted way...
		*/
		if (ans.size() != A1.size())
		{
			for (auto i : mp) {
				while (i.second--) ans.push_back(i.first);
			}
		}

		return ans;
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////