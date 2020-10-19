/*
///////////////////////////////////////////


In short get rid of string '010' from input.....

Sample Input 0
7
0101010

Sample Output 0
2

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


	int l ; // length of string

	cin >> l ;
	string s ;

	cin >> s ;

	if (l == s.size()) {
		int n = s.size(), count = 0, i = 0;
		while (i < n)
		{
			if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')
			{
				count++;
				i += 3;
			}
			else
				i++;
		}
		ct(count);
	}

	return 0;

}