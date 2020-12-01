/*
///////////////////////////////////////////

String Permutation

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

void strp(string s , int st, int en) {

// base case
	if (st == en) {
		ct(s); // print the string ...
	}

	// recursion and backtracking

	else {

		forx(i, st, en) {

			swap(s[st], s[i]); // swapping ... blocking the first letter an so on and swapping other letters ahead...

			strp(s , st + 1, en);

// backtracking
			swap(s[st], s[i]);
		}
	}

}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	string s = "ABC";

	int n = s.size();
// parameters: string, starting index , ending index
	strp(s, 0, n);

/////////////////////////////////////////////////

// [OR] SOLVING USING STL

	// Sort the string in lexicographically
	// ascending order
	sort(all(s));

	// Keep printing next permutation while there
	// is next permutation
	do {
		cout << s << endl;
	} while (next_permutation(all(s)));


	return 0;
}