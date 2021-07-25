/*
///////////////////////////////////////////

Friends Pairing Problem
There are n friends, we have to find all the pairings possible.
Each person can be
paired with only one person or does not pair with anyone.
Idea: we have two options, i’th friend does not get paired or we
have n-1 options to pair it with anyone.

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

int pairf(int n) {

	if (n == 0 or n == 1 or n == 2) {
		return n;
	}

	return ( pairf(n - 1) + ((n - 1) * pairf(n - 2))  );

}


int32_t main() {

///////////
	c_p_c();
///////////

	// code

	ct(pairf(4));



	return 0;
}