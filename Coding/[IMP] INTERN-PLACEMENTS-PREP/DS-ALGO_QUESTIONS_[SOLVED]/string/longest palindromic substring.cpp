/*
///////////////////////////////////////////
//Question/Info

Longest Palindrome in a String
Medium Accuracy: 42.63% Submissions: 4740 Points: 4
Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). Palindrome string: A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S. Incase of conflict, return the substring which occurs first ( with the least starting index).

Example 1:

Input:
S = "aaaabbaa"
Output: aabbaa
Explanation: The longest Palindromic
substring is "aabbaa".
â€‹Example 2:

Input:
S = "abc"
Output: a
Explanation: "a", "b" and "c" are the
longest palindromes with same length.
The result is the one with the least
starting index.

Your Task:
You don't need to read input or print anything. Your task is to complete the function longestPalin() which takes the string S as input and returns the longest palindromic substring of S.


Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).


Constraints:
1<=|S|<=103



Company Tags
 Accolite Amazon Groupon MakeMyTrip Microsoft Qualcomm Samsung Visa Walmart Zoho

author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

// #define int 		   long long int
#define sbit(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout << x << "\n";
#define ct2(x,y) 	   cout << x << " " << y << "\n";
#define tc(x) 		   cout << x << " ";
#define tc2(x,y) 	   cout << x << " " << y << " ";
#define forn(i,n) 	   for(int i = 0; i < (int)(n); ++i)
#define forx(i,x,n)    for(int i = x; i < (int)(n); ++i)
#define nfor(i,n)      for(int i = n-1; i >= 0; --i)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed << setprecision(y) << x
#define PI 			   3.1415926535897932384626433832795
#define MOD 		   1000000007 // (1e9+7)
#define pii 		   pair<int,int>
#define pis 		   pair<int,string>
#define vi  		   vector<int>
#define vii 		   vector<pii>
#define mii 		   map<int,int>
#define p_q            priority_queue // priority_queue<int> (&) priority_queue< int,vi,greater<int> >
#define _IOS      	   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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
		string longestPalindrome(string s) {
			if (s.length() <= 1) return s;
			int max_len = 1;
			int n = s.length();
			int st = 0, end = 0;

			// Odd length
			for (int i = 0; i < n - 1; ++i) {
				int l = i, r = i;
				while (l >= 0 && r < n) {
					if (s[l] == s[r]) {
						l--; r++;
					} else
						break;
				}
				int len = r - l - 1;
				if (len > max_len) {
					max_len = len;
					st = l + 1;
					end = r - 1;
				}
			}

			// Even length
			for (int i = 0; i < n - 1; ++i) {
				int l = i, r = i + 1;
				while (l >= 0 && r < n) {
					if (s[l] == s[r]) {
						l--; r++;
					} else
						break;
				}
				int len = r - l - 1;
				if (len > max_len) {
					max_len = len;
					st = l + 1;
					end = r - 1;
				}
			}

			return s.substr(st, max_len);

		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}