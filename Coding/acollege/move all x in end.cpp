/*
///////////////////////////////////////////

Move all 'x' in string in the end

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
//typedef std::vector<int> vi;
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

string movex(string s) {

	if (s.length() == 0) {
		return "";
	}

	char ch = s[0];
	string res = movex(s.substr(1));

	if (ch == 'x') {

		return res + ch;
	}

	return ch + res;


}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	string s = "exwsaiyxoiuxxuoex";

	cout << movex(s);


	return 0;
}