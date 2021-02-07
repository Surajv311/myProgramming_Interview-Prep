/*
///////////////////////////////////////////
//Question/Info

Longest Palindromic Subsequence Length

Given a sequence, find the length of the longest palindromic
subsequence in it.

As another example, if the given sequence is “BBABCBCAB”,
then the output should be 7 as “BABCBAB” is the longest
palindromic subsequence in it. “BBBBB” and “BBCBB” are
also palindromic subsequences of the given sequence,
but not the longest ones.

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
int lpsl(string a, string b, int la, int lb) {

// NOTE THAT string b IS JUST THE REVERSE OF string a

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

	/*

	Since we have to find longest
	palindromic string, consider:

	"abcgba", its reverse is : "abgcba",
	So the longest subsequence here is : abcba,
	which is also the longest palindrome possible

	*/

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

	string a = "abcgba";
	int la = a.length();

	string b = a;
	reverse(all(b));
	int lb = b.length();
	// dp bottom up
	ct(lpsl(a , b , la, lb));


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}