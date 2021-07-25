/*
///////////////////////////////////////////
//Question/Info

Consecutive 1's not allowed
Medium Accuracy: 32.27% Submissions: 6585 Points: 4
Given a positive integer N, count all possible distinct binary strings of length N such that there are no consecutive 1’s. Output your answer modulo 10^9 + 7.

Example 1:

Input:
N = 3
Output: 5
Explanation: 5 strings are (000,
001, 010, 100, 101).
Example 2:

Input:
N = 2
Output: 3
Explanation: 3 strings are
(00,01,10).
Your Task:
Complete the function countStrings() which takes single integer n, as input parameters and returns an integer denoting the answer. You don't to print answer or take inputs.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤ 105

Company Tags
 Flipkart Microsoft Morgan Stanley Snapdeal

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
		// #define ll long long
		ll countStrings(int n) {
			// code here


			// using dp
			// similar to fibonacci series....

			ll a[n], b[n];
			a[0] = b[0] = 1;
			for (ll i = 1; i < n; i++)
			{
				a[i] = (a[i - 1] + b[i - 1]) % 1000000007;
				b[i] = a[i - 1];
			}
			return (a[n - 1] + b[n - 1]) % (1000000007);

			/*

			 if(n == 1)
			    {
			        return 2;
			    }

			    if(n == 2)
			    {
			        return 3;
			    }

			    ll a = 2;
			    ll b = 3;
			    ll c;
			    for(int i = 3; i <= n; i++)
			    {
			        c = (a + b) % 1000000007;

			        a = b;
			        b = c;
			    }

			    return c;

			*/


		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}