/*
///////////////////////////////////////////
//Question/Info

Given two strings ‘X’ and ‘Y’, find the length of the longest common substring.

Examples :

Input : X = “GeeksforGeeks”, y = “GeeksQuiz”
Output : 5
Explanation:
The longest common substring is “Geeks” and is of length 5.

Input : X = “abcdxyz”, y = “xyzabcd”
Output : 4
Explanation:
The longest common substring is “abcd” and is of length 4.

Input : X = “zxabcdezy”, y = “yzabcdezx”
Output : 6
Explanation:
The longest common substring is “abcdez” and is of length 6.

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
int lcsqdp(string a, string b, int la, int lb) {


	int dp[la + 1][lb + 1];
	int res = 0;
	forn(i, la + 1) {
		forn(j, lb + 1) {
			// base case
			if (i == 0 or j == 0) {
				dp[i][j] = 0;
			}
			else {
				if (a[i - 1] == b[j - 1]) {

					dp[i][j] = 1 + dp[i - 1][j - 1];
					res = max(res, dp[i][j]);

				}

				else {
					dp[i][j] = 0;
				}

			}
		}
	}

	return res;
}

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


	// dp bottom up
	ct(lcsqdp(a , b , la, lb));


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}