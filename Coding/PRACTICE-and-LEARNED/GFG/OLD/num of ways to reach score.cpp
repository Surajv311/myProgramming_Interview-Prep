/*
///////////////////////////////////////////

Consider a game where a player can score
3 or 5 or 10 points in a move. Given a total score n,
find number of ways to reach the given score.
Examples:

Input: n = 20
Output: 4
There are following 4 ways to reach 20
(10, 10)
(5, 5, 10)
(5, 5, 5, 5)
(3, 3, 3, 3, 3, 5)

Input: n = 13
Output: 2
There are following 2 ways to reach 13
(3, 5, 5)
(3, 10)

This problem is a variation of coin change problem
and can be solved in O(n) time and O(n) auxiliary space.

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



int32_t main() {

///////////
	c_p_c();
///////////

	// code

	int count(int n)
	{
		// table[i] will store count
		// of solutions for value i.
		int table[n + 1], i;

		// Initialize all table
		// values as 0
		for (int j = 0; j < n + 1; j++)
			table[j] = 0;

		// Base case (If given value is 0)
		table[0] = 1;

		// One by one consider given 3 moves
		// and update the table[] values after
		// the index greater than or equal to
		// the value of the picked move
		for (i = 3; i <= n; i++)
			table[i] += table[i - 3];

		for (i = 5; i <= n; i++)
			table[i] += table[i - 5];

		for (i = 10; i <= n; i++)
			table[i] += table[i - 10];

		return table[n];
	}

	return 0;
}