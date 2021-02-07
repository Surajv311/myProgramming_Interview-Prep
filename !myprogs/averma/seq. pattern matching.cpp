/*
///////////////////////////////////////////
//Question/Info

Sequence Pattern Matching
Check if string A is a subsequence string B

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
bool sqp(string a, string b, int la, int lb) {

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

	/*Its simple,
	To see if A is a subseq. of B, just compare lengths
	of A and dp[la][lb].../ To check if B subseq. of A,
	compare length of B to dp[la][lb]...

	IF TO CHECK IF EITHER OF THEM A SUBSEQ. OF OTHER,
	then simply compare: dp[la][lb] with
	min(len(A),len(B)); // str.length();

	*/

	/*
	ANOTHER MORE OPTIMISED WAY IS USING TWO POINTERS:

	we can take two pointer i and j,
	i for larger string and j for smaller string
	run a loop for bigger string:

	if ith char of bigger == jth char of smaller THEN j++
	now check if j==size then it is present

	This can be done in O(N+M) time complexity instead O(N*M) by LCS
	*/

	if (a.length() == dp[la][lb]) {
		return true;
	}
	else {
		return false;
	}

}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	string a = "abc";
	// string a = "acd";
	int la = a.length();
	string b = "abcde";
	int lb = b.length();
	// dp bottom up
	ct(sqp(a , b , la, lb));


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}