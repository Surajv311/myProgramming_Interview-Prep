/*
//////////////////////////////////////////////////////
//Info-Que.

Interleaved Strings
Medium Accuracy: 37.0% Submissions: 47011 Points: 4
Given strings A, B, and C, find whether C is formed by an interleaving of A and B.

An interleaving of two strings S and T is a configuration where they are divided into non-empty substrings such that:

S = S1 + S2 + ... + SN
T = T1 + T2 + ... + TM
|N - M| <= 1
The interleaving is S1 + T1+ S2 + T2 + S3 + T3 + ... or T1 + S1+ T2 + S2 + T3 + S3 ...
Note: a + b is the concatenation of strings a and b.

Return true if C is formed by an interleaving of A and B, else return false.

Example 1:

Input:
A = YX, B = X, C = XXY
Output: 0
Explanation: XXY is not interleaving
of YX and X
Example 2:

Input:
A = XY, B = X, C = XXY
Output: 1
Explanation: XXY is interleaving of
XY and X.
Your Task:
Complete the function isInterleave() which takes three strings A, B and C as input and returns true if C is an interleaving of A and B else returns false. (1 is printed by the driver code if the returned value is true, otherwise 0.)

Expected Time Complexity: O(N * M)
Expected Auxiliary Space: O(N * M)
here, N = length of A, and M = length of B

Constraints:
1 ≤ length of A, B, C ≤ 100

Company Tags
 Amazon FactSet Google Microsoft Paytm Yahoo Zillious

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


	bool fun(string a, string b, string c) {

		if (a.length() == 0 and b.length() == 0 and c.length() == 0) return true;

		if (c.length() == 0) return false;

		bool x = a.length() and a[0] == c[0] and fun(a.substr(1), b, c.substr(1));
		bool y = b.length() and b[0] == c[0] and fun(a, b.substr(1), c.substr(1));

		return x or y;

	}

	bool isInterleave(string A, string B, string C)
	{
		//Your code here

		return fun(A, B, C);
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////


/*
// code by: srj_v //
*/


