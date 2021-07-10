/*
//////////////////////////////////////////////////////
//Question/Info

Number of paths
Easy Accuracy: 57.94% Submissions: 11068 Points: 2
The problem is to count all the possible paths from top left to bottom right of a MxN matrix with the constraints that from each cell you can either move to right or down.

Example 1:

Input:
M = 3 and N = 3
Output: 6
Explanation:
Let the given input 3*3 matrix is filled
as such:
A B C
D E F
G H I
The possible paths which exists to reach
'I' from 'A' following above conditions
are as follows:ABCFI, ABEHI, ADGHI, ADEFI,
ADEHI, ABEFI


Example 2:

Input:
M = 2 and N = 8
Output: 8

Your Task:
You don't need to read input or print anything. Your task is to complete the function numberOfPaths() which takes the integer M and integer N as input parameters and returns the number of paths..

Expected Time Complexity: O(m + n - 1))
Expected Auxiliary Space: O(1)



Constraints:
1 ≤ M, N ≤ 10

Company Tags
 Amazon Microsoft Zoho

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


	long long  numberOfPaths(int m, int n)
	{
		// Code Here

		if (m == 1 || n == 1)
		{
			return true;
		}
		while (m > 0 & n > 0)
		{
			return numberOfPaths(m - 1, n) + numberOfPaths(m, n - 1); // going rowwise & col wise...
		}

	}




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////