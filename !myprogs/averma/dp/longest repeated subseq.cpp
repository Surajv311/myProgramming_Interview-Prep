/*
///////////////////////////////////////////
//Question/Info

Longest Repeated Subsequence

Given a string, print the longest repeating
subsequence such that the two subsequence don’t
have same string character at same position,
i.e., any i’th character in the two subsequences
shouldn’t have the same index in the original string.


Examples:

Input: str = "aabb"
Output: "ab"

Input: str = "aab"
Output: "a"
The two subsequence are 'a'(first) and 'a'
(second). Note that 'b' cannot be considered
as part of subsequence as it would be at same
index in both.

///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define int 		   long long int
#define setbits(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout<<x<<endl;
#define ct2(x,y) 	   cout<<x<<" "<<y<<endl;
#define forn(i,n) 	   for(int i = 0; i < (int)(n); i++)
#define forx(i,x,n)    for(int i = x; i < (int)(n); i++)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed<<setprecision(y)<<x;
#define PI 			   3.1415926535897932384626433832795
#define MOD 		   1000000007 // (1e9+7)
#define pii 		   pair<int,int>
#define pis 		   pair<int,string>
#define vi  		   vector<int>
#define vii 		   vector<pii>
#define mii 		   map<int,int>

// typedef long long int lli;
typedef long double ld;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

// using bottom up dp
int lrsq(string a, string b, int la, int lb) {

	int dp[la + 1][lb + 1];
	forn(i, la + 1) {
		forn(j, lb + 1) {
			// base case
			if (i == 0 or j == 0) {
				dp[i][j] = 0;
			}

			else {
				if (a[i - 1] == b[j - 1] and i != j) {
					dp[i][j] = 1 + dp[i - 1][j - 1];
				}

				else {
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}

			}
		}
	}

	/*
	Logic is basically you are passing both the strings, now
	you must just make sure that, consider input: "aabebcdd"
	Now in this the two equal subsequences (they
	are longest) that are possible are 	"abd" & "abd".
	Here note that both "abd" are not the characters from
	the same index of "aabebcdd". Once you have used a character,
	you must ignore it. So basically we pass two same strings, and
	the condition we have put in 'else' is that:
	if (a[i - 1] == b[j - 1] and i != j)

	So here if i==j then the same string would be our
	subsequence string since all characters are repeated
	hence it would print the same, BUT when i!=j, it would be iterating
	over the next index that has the same letter. Now if
	basically that happens twice, then such a subseq would exist
	else not.

	*/



//  you can print the subsequence as well ...

	return dp[la][lb];
}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	string a = "aabebcdd";
	// string a = "acd";
	int la = a.length();

	int lb = la;
	// dp bottom up
	ct(lrsq(a , a , la, lb));


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}