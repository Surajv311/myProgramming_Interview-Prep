/*
///////////////////////////////////////////

Function Description

Complete the alternatingCharacters function in the editor below.
It must return an integer representing the minimum number of
deletions to make the alternating string.

alternatingCharacters has the following parameter(s):

s: a string

Sample Input
5
AAAA
BBBBB
ABABABAB
BABABA
AAABBB

Sample Output
3
4
0
0
4

Explanation
The characters marked red are the ones that
can be deleted so that the string doesn't have
matching consecutive characters.

///////////////////////////////////////////
*/

#include <bits/stdc++.h>
#define int long long int
#define setbits(x) __builtin_popcount(x)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ct(x) cout<<x<<endl;
#define ct2(x,y) cout<<x<<" "<<y<<endl;
#define forn(i, n) for (int i = 0; i < (int)(n); i++)
#define forx(i, x, n) for (int i = x ; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

//typedef long long int lli;
typedef long double ld;
//typedef pair<int, int> pii;
//typedef vector<int> vi;
//typedef vector<pii> vii;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

using namespace std;


void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int32_t rep(string &s) {

	int count = 0 ;
	int d = s.size() ;

	forn(i, d) {
		if (s[i] == s[i + 1]) {
			count++ ;
		}
	}

	return count ;
}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	int t ;

	cin >> t ;

	forn(i, t) {
		string s ;
		cin >> s ;

		ct(rep(s));
	}








	return 0;
}