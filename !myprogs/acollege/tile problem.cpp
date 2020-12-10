/*
///////////////////////////////////////////

Tiling problem
Find the number of ways to tile the floor with 1x2 and 1x1 tiles.
Idea: Tile[i] = Tile[i-1] (1x1) + Tile[i-2](1x2)

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

int tile(int n ) {

	if (n == 0) {
		return 0 ;
	}

	if (n == 1) {

		return 1 ;
	}

	return (tile(n - 1) + tile(n - 2));

}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	ct(tile(4));




	return 0;
}