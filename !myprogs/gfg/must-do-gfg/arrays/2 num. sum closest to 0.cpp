/*
///////////////////////////////////////////
//Question/Info

Two numbers with sum closest to zero
Medium Accuracy: 31.86% Submissions: 7260 Points: 4
Given an integer array of N elements. You need to find the maximum sum of two elements such that sum is closest to zero.

Example 1:

Input:
N = 3
arr[] = {-8 -66 -60}
Output: -68
Explanation: Sum of two elements closest to
zero is -68 using numbers -60 and -8.
â€‹Example 2:

Input:
N = 6
arr[] = {-21 -67 -37 -18 4 -65}
Output: -14
Explanation: Sum of two elements closest to
zero is -14 using numbers -18 and 4.

Your Task:
You don't need to read input or print anything. You just need to complete the function closestToZero() which takes an array arr[] and its size n as inputs and returns the maximum sum closest to zero that can be formed by summing any two elements in the array.


Expected Time Complexity: O(N*logN).
Expected Auxiliary Space: O(1).


Constraints:
1 ≤ N ≤ 5 * 105
-106 ≤ arr[i] ≤ 106

Company Tags
 Accolite Amazon Fab.com Microsoft Snapdeal

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


	class Solution
	{
	public:

		int closestToZero(int arr[], int n)
		{

			sort(arr, arr + n);

			int i = 0; int j = n - 1;

			int res = INT_MIN; int flag = INT_MAX;

			while (i < j) {

				int sum = arr[i] + arr[j];

				if (sum == 0) {
					return 0 ;
				}

				else if (sum < 0) {
					i++;
				}
				else {
					j--;
				}

				if (abs(sum) < flag) {

					flag = abs(sum);
					res = sum;
				}

// NUM SUM. CLOSEST TO 0 ~ MAX CASE :

				else if (abs(sum) == flag) {
					res = max(res, sum);
				}

			}

			return res;

		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}