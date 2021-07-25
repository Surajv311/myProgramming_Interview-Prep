/*
///////////////////////////////////////////

tower of hanoi

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

void hanoi(int disc, char src, char des, char mid) {

	if (disc == 0) {
		return ;
	}

	hanoi(disc - 1, src , mid , des);
	cout << "Move " << src << " to " << des << endl;
	hanoi(disc - 1, mid , des , src);

}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

// number of discs & names of the rod...

// Since hanoi( discs number, source of 1st rod,  destination or 3rd rod,  middle or 2nd rod )
	hanoi(3, 'A', 'C', 'B');


	return 0;
}