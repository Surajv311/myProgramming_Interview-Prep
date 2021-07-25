/*
///////////////////////////////////////////

CountPathMaze
Given a 2D grid, find the number of ways to reach (n-1, n-1).
You can go to (i,j) from (i-1,j) and (i,j-1).


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

int mazepath(int n , int i , int j ) {


	if (i == n - 1 and j == n - 1) {
		return 1 ;
	}

	if (i >= n or j >= n) {
		return 0 ;
	}

	return (mazepath(n, i + 1, j) + mazepath(n, i, j + 1));

}

int32_t main() {

///////////
	c_p_c();
///////////

	// code



	cout << mazepath(3, 0, 0);





	return 0;
}