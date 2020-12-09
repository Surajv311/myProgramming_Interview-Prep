/*
///////////////////////////////////////////


count number of paths possible from start point to end point in a gameboard.
Max step that can be taken at a time is 6 , Since max value of dice = 6

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

int path (int s , int e) { //start and end

	if (s == e) {
		return 1 ;
	}

	if (s > e) {
		return 0 ;
	}

	int count = 0 ;

	for (int i = 1 ; i <= 6 ; i++) {
//  since max step that can be taken in game of board is 6 , ~dice value value

		count += path(s + i, e);

	}

	return count ;
}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	cout << path(0, 3);


// EXPL: WE COUNT THE VALUES paths FROM SAY : 0 1 2 3
// THEN COIUNT TOTAL PATHS FROM 0 TO 3 , THEN TOTAL PATHS FROM  1 TO 3
// THEN T.P FROM 2 TO 3 THEN T.P FROM  3 TO 3 TO GET ALL VALUES FROM ...
// O TO 3 ... HENCE IN RECURSION PATH(s + i passed where i is iterating &, e )


	return 0;
}