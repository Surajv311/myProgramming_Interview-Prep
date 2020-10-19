/*
///////////////////////////////////////////

funny string question

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

string funnyString(string s) {

	int n = s.length();
	bool equal = true;
	string rev = s;
	reverse(all(rev));
	for (int i = 1; i < n; i++)
	{
		if ((abs(s[i] - s[i - 1])) != (abs(rev[i] - rev[i - 1])))
			equal = false;
	}
	if (equal == true)
		return "Funny";
	else
		return "Not Funny";
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
		ct(funnyString(s));
	}


	/////////////// NEEDS OPTIMISATION ///////////////////////////

	// int t ; // sample input ;
	// cin >> t ;

	// forn(i, t) {
	// 	string s ;
	// 	cin >> s ;


	// 	string rev = s ;
	// 	reverse(all(rev));

	// 	vector<int> v ;
	// 	vector<int> v2 ;
	// 	forn(i, s.size()) {

	// 		v.pb(int32_t(s[i]));
	// 		v2.pb(int32_t(rev[i]));
	// 	}

	// 	vector<int> v_ ;
	// 	vector<int> v2_ ;
	// 	forn(i, s.size() - 1) {
	// 		v_.pb(v[i + 1] - v[i]) ;

	// 		v2_.pb(rev[i] - rev[i + 1]); // since reverse array
	// 	}


	// 	int eq = 0;
	// 	int e = v_.size() ;

	// 	forn(i, v_.size()) {
	// 		if (v_[i] == v2_[i]) {
	// 			++eq ;
	// 		}
	// 	}

	// 	if (eq == e ) {
	// 		ct("Funny");
	// 	}
	// 	else {
	// 		ct("Not Funny");
	// 	}

	// 	v_.clear() ;
	// 	v2_.clear() ;

	// }



	return 0;
}