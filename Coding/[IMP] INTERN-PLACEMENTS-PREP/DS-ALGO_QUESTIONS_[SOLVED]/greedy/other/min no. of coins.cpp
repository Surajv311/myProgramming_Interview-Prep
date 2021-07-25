/*
//////////////////////////////////////////////////////
//Question/Info

Greedy Algorithm to find Minimum number of Coins

Given a value V, if we want to make a change for V Rs, and we have an infinite supply of each of the denominations in Indian currency, i.e., we have an infinite supply of { 1, 2, 5, 10, 20, 50, 100, 500, 1000} valued coins/notes, what is the minimum number of coins and/or notes needed to make the change?

Examples:

Input: V = 70
Output: 2
We need a 50 Rs note and a 20 Rs note.

Input: V = 121
Output: 3
We need a 100 Rs note, a 20 Rs note and a 1 Rs coin.

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


// All denominations of Indian Currency
	int deno[] = { 1, 2, 5, 10, 20,
	               50, 100, 500, 1000
	             };
	int n = sizeof(deno) / sizeof(deno[0]);

	void findMin(int V)
	{
		sort(deno, deno + n);

		// Initialize result
		vector<int> ans;

		// Traverse through all denomination
		for (int i = n - 1; i >= 0; i--) {

			// Find denominations
			while (V >= deno[i]) {
				V -= deno[i];
				ans.push_back(deno[i]);
			}
		}

		// Print result
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << " ";
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////