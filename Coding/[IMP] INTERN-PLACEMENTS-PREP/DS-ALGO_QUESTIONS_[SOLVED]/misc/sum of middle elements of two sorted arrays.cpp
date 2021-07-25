/*
//////////////////////////////////////////////////////
//Question/Info

Sum of Middle Elements of two sorted arrays
Medium Accuracy: 54.11% Submissions: 3374 Points: 4
Given 2 sorted arrays Ar1 and Ar2 of size N each. Merge the given arrays and find the sum of the two middle elements of the merged array.

Example 1:

Input:
N = 5
Ar1[] = {1, 2, 4, 6, 10}
Ar2[] = {4, 5, 6, 9, 12}
Output: 11
Explanation: The merged array looks like
{1,2,4,4,5,6,6,9,10,12}. Sum of middle
elements is 11 (5 + 6).


Example 2:

Input:
N = 5
Ar1[] = {1, 12, 15, 26, 38}
Ar2[] = {2, 13, 17, 30, 45}
Output: 32
Explanation: The merged array looks like
{1, 2, 12, 13, 15, 17, 26, 30, 38, 45}
sum of middle elements is 32 (15 + 17).

Your Task:
You don't need to read input or print anything. Your task is to complete the function findMidSum() which takes  ar1, ar2 and n as input parameters and returns the sum of middle elements.

Expected Time Complexity: O(log N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 103
1 <= Ar1[i] <= 106
1 <= Ar2[i] <= 106

Company Tags
 Amazon D-E-Shaw

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


	int findMidSum(int ar1[], int ar2[], int n) {
		// code here
		// we can do merging of array in o(1) space implementation..and find the sum...

		int i = 0, j = n - 1;
		while (ar2[i] < ar1[j]) {
			swap(ar2[i], ar1[j]); i++; j--;
		}
// merging in o(1) space...
		sort(ar1, ar1 + n);
		sort(ar2, ar2 + n);

		int x = ar2[0] + ar1[n - 1];
		return x;


	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////