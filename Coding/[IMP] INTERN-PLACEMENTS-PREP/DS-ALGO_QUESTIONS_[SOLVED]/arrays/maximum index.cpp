/*
///////////////////////////////////////////
//Question/Info

Maximum Index
Medium Accuracy: 42.72% Submissions: 35414 Points: 4
Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] <= A[j].


Example 1:

Input:
N = 2
A[] = {1, 10}
Output:
1
Explanation:
A[0]<=A[1] so (j-i) is 1-0 = 1.
Example 2:

Input:
N = 9
A[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
Output:
6
Explanation:
In the given array A[1] < A[7]
satisfying the required
condition(A[i] <= A[j]) thus giving
the maximum difference of j - i
which is 6(7-1).


Your Task:
The task is to complete the function maxIndexDiff() which finds and returns maximum index difference. Printing the output will be handled by driver code.


Constraints:
1 ≤ N ≤ 107
0 ≤ A[i] ≤ 1018


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Company Tags
 MakeMyTrip Amazon VMWare Microsoft

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

		// arr[]: input array
		// n: size of array
		// Function to find the maximum index difference.
		int maxIndexDiff(int arr[], int n)
		{

			// Your code here

			/*
			Brute force would be using O(n^2) approach...
			*/

			// optimised one is:

			int maxDiff;
			int i, j;

			int* LMin = new int[(sizeof(int) * n)];
			int* RMax = new int[(sizeof(int) * n)];

			/* Construct LMin[] such that
			LMin[i] stores the minimum value
			from (arr[0], arr[1], ... arr[i]) */
			LMin[0] = arr[0];
			for (i = 1; i < n; ++i)
				LMin[i] = min(arr[i], LMin[i - 1]);

			/* Construct RMax[] such that
			RMax[j] stores the maximum value from
			(arr[j], arr[j+1], ..arr[n-1]) */
			RMax[n - 1] = arr[n - 1];
			for (j = n - 2; j >= 0; --j)
				RMax[j] = max(arr[j], RMax[j + 1]);

			/* Traverse both arrays from left to right
			to find optimum j - i. This process is similar to
			merge() of MergeSort */
			i = 0, j = 0, maxDiff = -1;
			while (j < n && i < n) {
				if (LMin[i] <= RMax[j]) {
					maxDiff = max(maxDiff, j - i);
					j++;
				}
				else
					i++;
			}

			return maxDiff;

		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}