/*
//////////////////////////////////////////////////////
//Question/Info

Maximum of all subarrays of size k
Medium Accuracy: 44.42% Submissions: 37437 Points: 4
Given an array arr[] of size N and an integer K. Find the maximum for each and every contiguous subarray of size K.

Example 1:

Input:
N = 9, K = 3
arr[] = 1 2 3 1 4 5 2 3 6
Output:
3 3 4 5 5 5 6
Explanation:
1st contiguous subarray = {1 2 3} Max = 3
2nd contiguous subarray = {2 3 1} Max = 3
3rd contiguous subarray = {3 1 4} Max = 4
4th contiguous subarray = {1 4 5} Max = 5
5th contiguous subarray = {4 5 2} Max = 5
6th contiguous subarray = {5 2 3} Max = 5
7th contiguous subarray = {2 3 6} Max = 6
Example 2:

Input:
N = 10, K = 4
arr[] = 8 5 10 7 9 4 15 12 90 13
Output:
10 10 10 15 15 90 90
Explanation:
1st contiguous subarray = {8 5 10 7}, Max = 10
2nd contiguous subarray = {5 10 7 9}, Max = 10
3rd contiguous subarray = {10 7 9 4}, Max = 10
4th contiguous subarray = {7 9 4 15}, Max = 15
5th contiguous subarray = {9 4 15 12},
Max = 15
6th contiguous subarray = {4 15 12 90},
Max = 90
7th contiguous subarray = {15 12 90 13},
Max = 90
Your Task:
You dont need to read input or print anything. Complete the function max_of_subarrays() which takes the array, N and K as input parameters and returns a list of integers denoting the maximum of every contiguous subarray of size K.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(k)

Constraints:
1 ≤ N ≤ 107
1 ≤ K ≤ N
0 ≤ arr[i] ≤ 107

Company Tags
 Amazon Directi Flipkart Microsoft Google

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


	vector <int> max_of_subarrays(int *arr, int n, int k)
	{
		// your code here

		// brute force...o(n+k)
		//     int ans; vector<int> res;

		// for (int i = 0; i <= n - k; i++)
		// {
		//     ans = arr[i];

		//     for (int j = 1; j < k; j++)
		//     {
		//             ans = max(ans,arr[i + j]);
		//     }
		//     res.push_back(ans);
		// }

		// return res;

		// using dequeue o(n).. dequeue is like doubly ll, here you can push/pop front/back...

		deque<int> q(k);

		for (int i = 0 ; i < k; i++) {

			while (!q.empty() and arr[i] >= arr[q.back()]) q.pop_back();

			q.push_back(i);// passing the index...
		}

		int i = k ;
		vector<int> ans;
		while (i < n) {

			ans.push_back(arr[q.front()]);

			// removing elements out of this window..
			while (!q.empty() and q.front() <= i - k) q.pop_front();

			while (!q.empty() and arr[i] >= arr[q.back()]) q.pop_back();

			q.push_back(i);
			i++;
		}

		// pushing the last element...
		ans.push_back(arr[q.front()]);

		return ans;
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////