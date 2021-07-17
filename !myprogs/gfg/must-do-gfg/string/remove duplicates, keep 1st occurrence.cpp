/*
//////////////////////////////////////////////////////
//Question/Info

Remove Duplicates
Easy Accuracy: 55.08% Submissions: 18129 Points: 2
Given a string without spaces, the task is to remove duplicates from it.

Note: The original order of characters must be kept the same.

Example 1:

Input: S = "zvvo"
Output: "zvo"
Explanation: Only keep the first
occurrence
Example 2:

Input: S = "gfg"
Output: gf
Explanation: Only keep the first
occurrence
Your task:
Your task is to complete the function removeDups() which takes a single string as input and returns the string. You need not take any input or print anything.


Expected Time Complexity: O(|s|)
Expected Auxiliary Space: O(constant)

Constraints:
1 <= |S| <= 105
S conatins lowercase english alphabets

Company Tags
 Microsoft

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


	string removeDups(string s)
	{
		// Your code goes here
		//          string ans;

		// for(auto i:s){

		//     if(ans.size()==0) ans.push_back(i);
		//     else if(i==ans.back()) ans.pop_back();
		//     else ans.push_back(i);

		// }

		// return ans;

		int A[26] = {0};

		string ans = "";
		for (int i = 0; i < s.size(); i++)
		{
			if (A[s[i] - 'a'] == 0) ans += s[i];

			A[s[i] - 'a']++;
		}

		return ans;

	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////