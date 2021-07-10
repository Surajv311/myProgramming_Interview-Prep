/*
//////////////////////////////////////////////////////
//Question/Info

Subset Sums
Basic Accuracy: 68.71% Submissions: 4380 Points: 1
Given a list arr of N integers, print sums of all subsets in it. Output should be printed in increasing order of sums.

Example 1:

Input:
N = 2
arr[] = {2, 3}
Output:
0 2 3 5
Explanation:
When no elements is taken then Sum = 0.
When only 2 is taken then Sum = 2.
When only 3 is taken then Sum = 3.
When element 2 and 3 are taken then
Sum = 2+3 = 5.
Example 2:

Input:
N = 3
arr = {5, 2, 1}
Output:
0 1 2 3 5 6 7 8
Your Task:
You don't need to read input or print anything. Your task is to complete the function subsetSums() which takes a list/vector and an integer N as an input parameter and return the list/vector of all the subset sums in increasing order.

Expected Time Complexity: O(2N)
Expected Auxiliary Space: O(2N)

Constraints:
1 <= N <= 15
0 <= arr[i] <= 10000

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


	class Solution
	{
	public:

		void recur(vector<int> arr, int sum , int i ,  vector<int> &ans, int N) {

			if (i == N) {
				ans.push_back(sum); return;
			}

			recur(arr, sum + arr[i], i + 1, ans, N);
			recur(arr, sum, i + 1, ans, N);
			return;
		}

		vector<int> subsetSums(vector<int> arr, int N)
		{
			// Write Your Code here
			// brute force is generate power sets and then sum each set and store...
			// it is o((2^n) * n)
			// else..for o(2^n) soln.

			vector<int> ans;
			int i, sum; i = sum = 0 ;
			recur(arr, sum, i, ans, N);

			sort(ans.begin(), ans.end());
			return ans;

		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////