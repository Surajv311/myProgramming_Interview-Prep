/*
//////////////////////////////////////////////////////
//Question/Info

Minimize the sum of product
Basic Accuracy: 72.84% Submissions: 5617 Points: 1
You are given two arrays, A and B, of equal size N. The task is to find the minimum value of A[0] * B[0] + A[1] * B[1] +…+ A[N-1] * B[N-1], where shuffling of elements of arrays A and B is allowed.


Example 1:

Input:
N = 3
A[] = {3, 1, 1}
B[] = {6, 5, 4}
Output:
23
Explanation:
1*6+1*5+3*4 = 6+5+12
= 23 is the minimum sum


Example 2:

Input:
N = 5
A[] = {6, 1, 9, 5, 4}
B[] = {3, 4, 8, 2, 4}
Output:
80
Explanation:
2*9+3*6+4*5+4*4+8*1
=18+18+20+16+8
= 80 is the minimum sum


Your Task:
You don't need to read input or print anything. Your task is to complete the function minValue() which takes the arrays A[], B[] and its size N as inputs and returns the minimum sum.



Expected Time Complexity: O(N. log(N))
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 105
1 ≤ A[] ≤ 106

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


	long long int minValue(int a[], int b[], int n)
	{
		// Your code goes here

		sort(a, a + n); sort(b, b + n, greater<int>()); // reverse sorted.. .hence now just multiply a[i] & b[i]...


		long long int sum = 0;

		for (int i = 0 ; i < n ; i++) {

			sum += a[i] * b[i];

		}
		return sum;
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////