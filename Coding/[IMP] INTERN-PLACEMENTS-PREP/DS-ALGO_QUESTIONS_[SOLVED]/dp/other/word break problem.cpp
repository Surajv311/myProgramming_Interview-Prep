/*
//////////////////////////////////////////////////////
//Question/Info

Word Break
Medium Accuracy: 50.24% Submissions: 13735 Points: 4
Given a string A and a dictionary of n words B, find out if A can be segmented into a space-separated sequence of dictionary words.


Example 1:

Input:
n = 12
B = { "i", "like", "sam", "sung", "samsung", "mobile",
"ice","cream", "icecream", "man", "go", "mango" }
A = "ilike"
Output: 1
Explanation:The string can be segmented as "i like".

â€‹Example 2:

Input:
n = 12
B = { "i", "like", "sam", "sung", "samsung", "mobile",
"ice","cream", "icecream", "man", "go", "mango" }
A = "ilikesamsung"
Output: 1
Explanation: The string can be segmented as
"i like samsung" or "i like sam sung".


Your Task:
Complete wordBreak() function which takes a string and list of strings as a parameter and returns 1 if it is possible to break words, else return 0. You don't need to read any input or print any output, it is done by driver code.


Expected time complexity: O(s2)
â€‹Expected auxiliary space: O(s) , where s = length of string A



Constraints:
1 <= N <= 12
1 <= s <=1000 , where s = length of string A
 The length of each word is less than 15.



Company Tags
 Amazon Google Hike IBM MAQ Software Microsoft Walmart Zoho

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


//User function template for C++

// A : given string to search
// B : vector of available strings

	int wordBreak(string A, vector<string> &B) {
		//code here
		if (B.size() == 0 or A.length() == 0) return false;

		vector<bool> dp(A.size() + 1, false);
		dp[0] = true;

		for (int i = 1; i <= A.size(); i++)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (dp[j]) // NOTE HERE DP[J]
				{
					string word = A.substr(j, i - j);
					auto it = find(B.begin(), B.end(), word);
					if (it != B.end())
					{
						dp[i] = true; // NOTE HERE DP[I]
						break; //next i
					}
				}
			}
		}

		return dp[A.size()];
		// ~ O(N^2 * S) complexity...

		// its similar to .....
		// leetcode
// -
// leetcode
//  -
// --
// leetcode
//   -
//  --
// ---
// leetcode
//    -
//   --
//  ---
// ----     !!! leet
// leetcode
//     -
//    --
//   ---
//  ----
// -----
// leetcode
//      -
//     --
//    ---
//   ----
//  -----
// ------
// leetcode
//       -
//      --
//     ---
//    ----
//   -----
//  ------
// -------
// leetcode
//        -
//       --
//      ---
//     ----  !!! code
// All the lines below won't run b/c of break;
// Index 4 is a valid start index, and index 4 - index 7 make up the word `code`
// We can break once we've found any connecting word because
// all we're trying to do is find SOME valid way to connect to s[i].
// Once we've found SOME word that does that, there's no need to continue checking.
//    -----
//   ------
//  -------
// --------

	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////