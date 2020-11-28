/*
///////////////////////////////////////////

bit operations

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


int32_t main() {

///////////
	c_p_c();
///////////

	// code


	int n ;
	cin >> n ;

	int pos; // position

// SETBIT ////////////////////////////////
// would set a bit to 1 in the binary form... if 0 or 1 it would set it to 1 , given the position
	cin >> pos ;
	ct((n | (1 << pos)));

/////////


// GETBIT ////////////////////////////////
// would get you the bit from the given position
	cin >> pos ;
	ct(!(n & (1 << pos)));

//////////


// CLEARBIT ///////////////////////////////

	cin >> pos ;
	ct((n & (~(1 << pos))));


//////////


// UPDATEBIT ///////////////////////////////

	cin >> pos ;
	int value ;
	// say value = 1 ;
	value = 1 ;

	int mask = ~(1 << pos);
	n = n & mask ;

	ct((n | (value << pos)));

///////////


	return 0;
}