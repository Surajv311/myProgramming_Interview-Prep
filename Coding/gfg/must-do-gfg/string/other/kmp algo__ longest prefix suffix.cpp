/*
//////////////////////////////////////////////////////
//Question/Info

Longest Prefix Suffix
Medium Accuracy: 49.39% Submissions: 23505 Points: 4
Given a string of characters, find the length of the longest proper prefix which is also a proper suffix.

Example 1:

Input: s = "abab"
Output: 2
Explanation: "ab" is the longest proper
prefix and suffix.
Example 2:

Input: s = "aaaa"
Output: 3
Explanation: "aaa" is the longest proper
prefix and suffix.
Your task:
You do not need to read any input or print anything. The task is to complete the function lps(), which takes a string as input and returns an integer.

Expected Time Complexity: O(|s|)
Expected Auxiliary Space: O(|s|)

Constraints:
1 ≤ |s| ≤ 105
s contains lower case English alphabets

Company Tags
 Accolite Amazon MakeMyTrip Microsoft

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



	int lps(string s)
	{
		// Your code goes here

		// kmp algo :

		// not very clear...
		int n = s.length();
		vector<int> lps(n + 1, 0);

		int i = 0, j = 1;

		lps[0] = 0;

		while (j < n) {

			if (s[i] == s[j]) {

				lps[j++] = i + 1;
				i++;

			}

			else {

				if (i != 0) i = lps[i - 1];
				else j++;

			}
		}

		return lps[n - 1];


	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////