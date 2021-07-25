/*
///////////////////////////////////////////
//Question/Info

Find Missing And Repeating
Medium Accuracy: 37.77% Submissions: 31681 Points: 4
Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.

Example 1:

Input:
N = 2
Arr[] = {2, 2}
Output: 2 1
Explanation: Repeating number is 2 and
smallest positive missing number is 1.
Example 2:

Input:
N = 3
Arr[] = {1, 3, 3}
Output: 3 2
Explanation: Repeating number is 3 and
smallest positive missing number is 2.
Your Task:
You don't need to read input or print anything. Your task is to complete the function findTwoElement() which takes the array of integers arr and n as parameters and returns an array of integers of size 2 denoting the answer ( The first index contains B and second index contains A.)

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 105
1 ≤ Arr[i] ≤ N

Company Tags
 Amazon D-E-Shaw Goldman Sachs MAQ Software Samsung

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
		int *findTwoElement(int *arr, int n) {
			// code here


			int ar[n + 1] = {0};
			ar[0] = INT_MAX;

			for (int i = 0 ; i < n ; i++ )
			{
				ar[arr[i]]++;
			}

			int rep , mis;

			for (int i = 1 ; i < n + 1 ; i++ )
			{
				if (ar[i] == 2) {
					rep = i;
				}
				if (ar[i] == 0) {
					mis = i;
				}
			}


			// delete[] ar;

			int *ans = new int[2];
			ans[0] = rep;
			ans[1] = mis;

			return ans;

			/*

			Method -2 :

			Find relation between
			sum of elements of arr. & (sum of elements of arr.)^2

			You get 2 eqn. & solve both of them & code

			Only issue could be memory limitation since
			we are doing ^2 ...

			->

			Let x be the missing and y be the repeating element.
			Get the sum of all numbers using formula S = n(n+1)/2 – x + y
			Get product of all numbers using formula P = 1*2*3*…*n * y / x
			The above two steps give us two equations, we can solve the equations and get the values of x and y.

			------------------------------------------------



			*/


		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}