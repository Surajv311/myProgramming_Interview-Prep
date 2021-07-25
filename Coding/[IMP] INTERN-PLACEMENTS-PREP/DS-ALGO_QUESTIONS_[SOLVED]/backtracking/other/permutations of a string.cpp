/*
//////////////////////////////////////////////////////
//Question/Info

Permutations of a given string
Basic Accuracy: 49.85% Submissions: 16142 Points: 1
Given a string S. The task is to print all permutations of a given string.

Example 1:

Input: ABC
Output:
ABC ACB BAC BCA CAB CBA
Explanation:
Given string ABC has permutations in 6
forms as ABC, ACB, BAC, BCA, CAB and CBA .
Example 2:

Input: ABSG
Output:
ABGS ABSG AGBS AGSB ASBG ASGB BAGS
BASG BGAS BGSA BSAG BSGA GABS GASB
GBAS GBSA GSAB GSBA SABG SAGB SBAG
SBGA SGAB SGBA
Explanation:
Given string ABSG has 24 permutations.


Your Task:
You don't need to read input or print anything. Your task is to complete the function find_permutaion() which takes the string S as input parameter and returns a vector of string in lexicographical order.



Expected Time Complexity: O(n! * n)

Expected Space Complexity: O(n)



Constraints:
1 <= length of string <= 5




Company Tags
 Accolite Amazon Cisco Citrix MAQ Software OYO Rooms Samsung Snapdeal Walmart Zoho Microsoft

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


	class Solution
	{
	public:

		void permute(string &a, int l, int r, vector<string>&v)
		{
			// Base case
			if (l == r)
			{ v.push_back(a);}
			else
			{
				// Permutations made
				for (int i = l; i < r; i++)
				{

					// Swapping done
					swap(a[l], a[i]);

					// Recursion called
					permute(a, l + 1, r, v);

					//backtrack
					swap(a[l], a[i]);
				}
			}
		}
		vector<string>find_permutation(string S)
		{
			// Code here there

// 		      sort(S.begin(),S.end());

// 		    vector<string> v;

// 		    do{
// 		        v.push_back(S);
// 		    }
// 		    while(next_permutation(S.begin(),S.end()));

// 		 return v;

			string a = S;

			sort(a.begin(), a.end());
			vector<string> v;

			permute(a, 0, a.length(), v);

			return v;



		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////