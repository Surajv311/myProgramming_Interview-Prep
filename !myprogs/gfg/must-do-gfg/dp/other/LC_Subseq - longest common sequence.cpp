/*
///////////////////////////////////////////
//Question/Info

length of longest common subsequence

LCS Problem Statement: Given two sequences,
find the length of longest subsequence present
in both of them. A subsequence is a sequence that
appears in the same relative order, but not
necessarily contiguous.
For example, “abc”, “abg”, “bdf”, “aeg”, ‘”acefg”, .. etc
are subsequences of “abcdefg”.

Input:
A = 6, B = 6
str1 = ABCDGH
str2 = AEDFHR
Output: 3
Explanation: LCS for input Sequences
“ABCDGH” and “AEDFHR” is “ADH” of
length 3.
Example 1:

Input:
A = 3, B = 2
str1 = ABC
str2 = AC
Output: 2
Explanation: LCS of "ABC" and "AC" is
"AC" of length 2.

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

int lcs(string a, string b, int la, int lb) {

	// base case
	if (la == 0 or lb == 0) {
		return 0;
	}


	//  choice diagram

	if (a[la - 1] == b[lb - 1]) {

		return (1 + lcs(a, b, la - 1, lb - 1));

	}

	else {
		return max(lcs(a, b, la - 1, lb), lcs(a, b, la, lb - 1));
	}

}


// using top down memoization

int dp[1001][1001];
int lcsm(string a, string b, int la, int lb) {

	// base case
	if (la == 0 or lb == 0) {
		return 0;
	}

	if (dp[la][lb] != -1) {
		return dp[la][lb];
	}

	//  choice diagram

	if (a[la - 1] == b[lb - 1]) {

		return dp[la][lb] = (1 + lcsm(a, b, la - 1, lb - 1));

	}

	else {
		return dp[la][lb] = max(lcsm(a, b, la - 1, lb), lcsm(a, b, la, lb - 1));
	}

}


// using bottom up dp
int lcsdp(string a, string b, int la, int lb) {


	int dp[la + 1][lb + 1];

	forn(i, la + 1) {
		forn(j, lb + 1) {
			// base case
			if (i == 0 or j == 0) {
				dp[i][j] = 0;
			}
			else {
				if (a[i - 1] == b[j - 1]) {

					dp[i][j] = 1 + dp[i - 1][j - 1];

				}

				else {
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}

			}
		}
	}

	return dp[la][lb];
}


/*

// to print the lcs:

int i = la;
	int j = lb;
	string res = "";
	while (i != 0 and j != 0) {

		if (a[i - 1] == b[j - 1]) {
			res.pb(a[i - 1]);
			i--; j--;
		}

		else {
			if (dp[i - 1][j] > dp[i][j - 1]) {
				i--;
			}
			else {
				j--;
			}
		}

	}

	reverse(all(res));

	cout << res;


*/

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	string a = "aaaaj";
	string b = "aaaowj";

	int la = a.length();
	int lb = b.length();

	ct(lcs(a , b , la, lb)); // recursion

	// memoization top down
	memset(dp, -1, sizeof(dp)); ct(lcsm(a , b , la, lb));

	// dp bottom up
	ct(lcsdp(a , b , la, lb));


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}