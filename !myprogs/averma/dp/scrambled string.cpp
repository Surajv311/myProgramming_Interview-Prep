/*
///////////////////////////////////////////
//Question/Info

QUESTION LEFT:
Evaluate Expression to True Boolean Parenthesization Recursive
<very tough ~so left...>

NOW,

SCRAMBLED STRING Question

Given two strings S1 and S2 of equal length,
the task is to determine if S2 is a scrambled form of S1.
Scrambled string:
Given string str, we can represent it as a
binary tree by partitioning it to two non-empty
substrings recursively.
Note: Srambled string is not same as an Anagram
Below is one possible representation of str = “coder”:


    coder
   /    \
  co    der
 / \    /  \
c   o  d   er
           / \
          e   r
To scramble the string, we may choose any non-leaf
node and swap its two children.
Suppose, we choose the node “co” and swap its
two children, it produces a scrambled string “ocder”.


    ocder
   /    \
  oc    der
 / \    /  \
o   c  d   er
           / \
          e   r
Thus, “ocder” is a scrambled string of “coder”.
Similarly, if we continue to swap the children
of nodes “der” and “er”, it produces a scrambled string “ocred”.


    ocred
   /    \
  oc    red
 / \    /  \
o   c  re  d
       / \
      r   e
Thus, “ocred” is a scrambled string of “coder”.
Examples:

Input: S1=”coder”, S2=”ocder”
Output: Yes
Explanation:
“ocder” is a scrambled form of “coder”
Input: S1=”abcde”, S2=”caebd”
Output: No
Explanation:
“caebd” is not a scrambled form of “abcde”


author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define int 		   long long int
#define setbits(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout << x << endl;
#define ct2(x,y) 	   cout << x << " " << y << endl;
#define forn(i,n) 	   for(int i = 0; i < (int)(n); ++i)
#define forx(i,x,n)    for(int i = x; i < (int)(n); ++i)
#define nfor(i,n)      for(int i = n-1; i >= 0; --i)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed << setprecision(y) << x;
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

#pragma GCC optimize("Ofast")

void c_p_c()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

bool ssq(string s, string ss)
{
	// Strings of non-equal length
	// cant' be scramble strings
	if (s.length() != ss.length()) {
		return false;
	}

	// Empty strings are scramble strings
	if (s.length() == 0) {
		return true;
	}
	int n = s.length();
	// Equal strings are scramble strings
	if (s == ss) {
		return true;
	}

	// Check for the condition of anagram
	string sc = s, ssc = ss;

	sort(sc.begin(), sc.end());
	sort(ssc.begin(), ssc.end());

	if (sc == ssc) {
		return true;
	}

	for (int i = 1; i < n; i++) {

		// Check if ss[0...i] is a scrambled
		// string of s[0...i] and if ss[i+1...n]
		// is a scrambled string of s[i+1...n]
		if (ssq(s.substr(0, i), ss.substr(0, i))
		        && ssq(s.substr(i, n - i),
		               ss.substr(i, n - i))) {
			return true;
		}

		// Check if ss[0...i] is a scrambled
		// string of s[n-i...n] and ss[i+1...n]
		// is a scramble string of s[0...n-i-1]
		if (ssq(s.substr(0, i),
		        ss.substr(n - i, i))
		        && ssq(s.substr(i, n - i),
		               ss.substr(0, n - i))) {
			return true;
		}
	}

	// If none of the above
	// conditions are satisfied
	return false;
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


	string s = "coder";
	string ss = "ocred";

	if (ssq(s, ss)) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}