/*
///////////////////////////////////////////

Day Shared Liked Cumulative
1      5     2       2
2      6     3       5
3      9     4       9
4     12     6      15
5     18     9      24

Complete the viralAdvertising function in the editor below.
It should return the cumulative number of people who have
liked the ad at a given time.

viralAdvertising has the following parameter(s):

n: the integer number of days

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

int ad(int n)
{
	int a = 5; // shares to 5 people in starting
	int b = 0;
	int l = 0;
	for (int i = 1; i <= n; i++)
	{
		l = a / 2;
		b += l;
		a = l * 3;
	}
	return b;

}

int32_t main() {

///////////
	c_p_c();
///////////

	int n ;

	cin >> n ;  // day

	cout << ad(n);



	return 0;
}