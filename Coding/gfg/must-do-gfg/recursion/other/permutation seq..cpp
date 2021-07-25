/*
//////////////////////////////////////////////////////
//Question/Info

60. Permutation Sequence
Hard

2493

372

Add to List

Share
The set [1, 2, 3, ..., n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order, we get the following sequence for n = 3:

"123"
"132"
"213"
"231"
"312"
"321"
Given n and k, return the kth permutation sequence.



Example 1:

Input: n = 3, k = 3
Output: "213"
Example 2:

Input: n = 4, k = 9
Output: "2314"
Example 3:

Input: n = 3, k = 1
Output: "123"


Constraints:

1 <= n <= 9
1 <= k <= n!

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

	class Solution {
	public:
		string getPermutation(int n, int k) {

//         complexity of recursion is o(n!)..~finding sets.. and finding... exponential...
//         hence we optimise to o(n^2)

			int ft = 1;
			vector<int> v;
			for (int i = 1; i < n; i++) {
				ft = ft * i; // for factorial...
				v.push_back(i); // stores 1,2,3,4....n
			}
			v.push_back(n);
			string ans = "";
			k--; // decrementing, as 0 based indexing... like in josephus problem...
			while (1) {
				// note that 'n' and 'k' is given in the question...
				ans = ans + to_string(v[k / ft]); // 16/6...
				v.erase(v.begin() + k / ft);

				if (v.size() == 0) break;

				k = k % ft;
				ft = ft / v.size();
			}
			return ans;

			/*

			say n = 4, you have {1, 2, 3, 4}

			If you were to list out all the permutations you have

			1 + (permutations of 2, 3, 4) - its total permutations possible is 3! = 6...

			2 + (permutations of 1, 3, 4) - ... 3! = 6 ...

			3 + (permutations of 1, 2, 4) -...6...

			4 + (permutations of 1, 2, 3) -...6...

			*/


		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////