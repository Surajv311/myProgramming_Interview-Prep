/*
///////////////////////////////////////////


Check if a number n is power of 2

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

// check if n is power of 2 ;


	int n ;
	cin >> n ;


	/*
	***************** Approach 1 *******************

		if (n > 0) {
			int d1 = ceil(log2(n));
			int d2 = floor(log2(n));

			if (d1 == d2 and n != 0)
			{
				ct("Yes");
			}
			else {
				ct("No");
			}
		}
		else {
			ct("No");
		}

	************************************************
	*/

	/*
	***************** Approach 2 *******************

	Convert to binary & check if the first bit is 1 & rest all 0,
	If condition satisfy then a power of x .

	// use setbits(x) aka builtinpopcount....

	************************************************
	*/

//***************** Approach 3 *****************

// Binary representation of power of 2 is *always* a single set bit
// 8 (which is 2 power 3) = 1000 and 7 ( which is 8-1) = 0111
// So bitwise 'and' of 8,7 aka n,n-1 must be '0' for it to be two's power...

	int d = n & (n - 1);
	if (n > 0 ) {
		if (d == 0) {
			cout << "Yes";
		}
		else {
			cout << "No" ;
		}

	}
//************************************************


	return 0;
}