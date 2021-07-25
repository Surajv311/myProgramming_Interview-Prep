/*
///////////////////////////////////////////

Complete the findDigits function in the editor below.
It should return an integer representing the number of digits of d
that are divisors of d.

findDigits has the following parameter(s):

n: an integer to analyze

Sample Input
2
12
1012

Sample Output
2
3

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

int32_t divide(int n) {


	int x = n ;

	int count = 0 ;
	int d = n ;
	while (d != 0) {


		n = n % 10 ;

		if (n != 0) {
			if (x % n == 0) {
				count++ ;
			}
		}
		d = d / 10 ;
		n = d ;


	}

	return count ;


}

int32_t main() {

///////////
	c_p_c();
///////////

	int t ; // times

	cin >> t ;

	forn(i, t) {
		int n ; // to input the number
		cin >> n ;

		ct(divide(n));
	}







	return 0;
}