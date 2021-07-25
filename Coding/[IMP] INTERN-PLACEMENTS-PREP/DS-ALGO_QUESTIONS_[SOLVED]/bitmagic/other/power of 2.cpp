/*
///////////////////////////////////////////
//Question/Info

Power of 2
Basic Accuracy: 50.29% Submissions: 24148 Points: 1
Given a non-negative integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x.


Example 1:

Input: N = 1
Output: true
Explanation:
1 is equal to 2 raised to 0 (20 = 1).
Example 2:

Input: N = 98
Output: false
Explanation:
98 cannot be obtained by any power of 2.

Your Task: Your task is to complete the function isPowerofTwo() which takes n as a parameter and returns true or false by checking is given number can be represented as a power of two or not.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
0 ≤ N ≤ 1018

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
		// Function to check if given number n is a power of two.
		bool isPowerofTwo(long long n) {

			// Your code here


			long long int k = n - 1 ;

			long long int x = n & n - 1;

			if (x == 0 and n != 0) {
				return true ;
			}

			else {
				return false;
			}

		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}