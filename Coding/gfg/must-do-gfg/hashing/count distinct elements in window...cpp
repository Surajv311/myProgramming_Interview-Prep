/*
//////////////////////////////////////////////////////
//Question/Info

Count distinct elements in every window
Easy Accuracy: 44.16% Submissions: 65447 Points: 2
Given an array of integers and a number K. Find the count of distinct elements in every window of size K in the array.

Example 1:

Input:
N = 7, K = 4
A[] = {1,2,1,3,4,2,3}
Output: 3 4 4 3
Explanation: Window 1 of size k = 4 is
1 2 1 3. Number of distinct elements in
this window are 3.
Window 2 of size k = 4 is 2 1 3 4. Number
of distinct elements in this window are 4.
Window 3 of size k = 4 is 1 3 4 2. Number
of distinct elements in this window are 4.
Window 4 of size k = 4 is 3 4 2 3. Number
of distinct elements in this window are 3.
Example 2:

Input:
N = 3, K = 2
A[] = {4,1,1}
Output: 2 1
Your Task:
Your task is to complete the function countDistinct() which takes the array A[], the size of the array(N) and the window size(K) as inputs and returns an array containing the count of distinct elements in every contiguous window of size K in the array A[].

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= N <= K <= 105
1 <= A[i] <= 105 , for each valid i

Company Tags
 Accolite Amazon Microsoft

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


	vector <int> countDistinct (int A[], int n, int k)
	{
		//code here.

		unordered_map<int, int> mp;

		for (int i = 0 ; i < k ; i++) mp[A[i]]++;

		vector<int> ans;
		ans.push_back(mp.size());

		for (int i = k ; i < n; i++) {
			// starting from i = k ...

			mp[A[i - k]]--;

			if (mp[A[i - k]] == 0) {

				// so it won't be zero if our earlier element was repeated...
				//say 1,1,2,3,4... so 1 repeated so as the window would slide,
				//at (--) it won't be zero as it would signify that same
				//number is ahead in the series...

				mp.erase(A[i - k]);
			}

			mp[A[i]]++;

			ans.push_back(mp.size());
		}

		return ans;
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////