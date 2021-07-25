/*
///////////////////////////////////////////

replace 'pi' string with '3.14' in the input string

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

void pif(string s) {

	if (s.length() == 0) {
		return;
	}
	if (s[0] == 'p' and s[1] == 'i') {
		cout << "3.14";
		pif(s.substr(2));
	}
	else {
		cout << s[0];
		pif(s.substr(1));
	}

}
int32_t main() {

///////////
	c_p_c();
///////////

	// code


	string s = "piihdpiippqweppirqwrqpiwrpppiruw";

	pif(s);


	return 0;
}