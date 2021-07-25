/*
///////////////////////////////////////////
//Question/Info

Printing Shortest Common Supersequence

Given two strings X and Y, print the shortest string
that has both X and Y as subsequences.
If multiple shortest supersequence exists, print any one of them.

Examples:

Input: X = "AGGTAB",  Y = "GXTXAYB"
Output: "AGXGTXAYB" OR "AGGXTXAYB"
OR Any string that represents shortest
supersequence of X and Y

Input: X = "HELLO",  Y = "GEEK"
Output: "GEHEKLLO" OR "GHEEKLLO"
OR Any string that represents shortest
supersequence of X and Y

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
string pscs(string a, string b, int la, int lb) {

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

	int i = la; int j = lb ;
	string str = "";

	/*
	printing is very similar to that printing shortest common
	subsequence. Iterating backwards.
	*/

	while (i != 0 and j != 0) {

		if (a[i - 1] == b[j - 1]) {
			str.pb(a[i - 1]);
			i--; j--;
		}

		else {

			if (dp[i - 1][j] > dp[i][j - 1]) {
				/*
				Since in printing subsequence we push only
				the char that is equal. But here since
				superseq, we must consider/push all
				those which are not repeated twice and then
				iterate i-- or j-- in the conditions,
				and the ones that is repeated twice aka once in
				both of the strings are pushed only once.
				*/

				str.pb(a[i - 1]);
				i--;
			}
			else {
				str.pb(b[j - 1]);
				j--;
			}

		}


	}
	reverse(all(str));
	return str;
}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	string a = "acbcf";
	int la = a.length();

	string b = "abcdaf";
	int lb = b.length();
	// dp bottom up
	ct(pscs(a , b , la, lb));


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}