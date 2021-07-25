/*
///////////////////////////////////////////

Complete the squares function in the editor below.
It should return an integer representing the number of
square integers in the inclusive range from a to b.

squares has the following parameter(s):

a: an integer, the lower range boundary
b: an integer, the uppere range boundary

Sample Input
2
3 9
17 24

Sample Output
2
0

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


int32_t squares(int a , int b) {

	int x = ceil(sqrt(a));

	int y = floor(sqrt(b));

	int count = 0 ;

	forx(i, x , y + 1) {
		if (pow(i, 2) <= b) {
			count++ ;
		}
	}

	return count ;

}


int32_t main() {

///////////
	c_p_c();
///////////





	int t ; // test cases

	cin >> t ;

	forn(i, t) {
		int a , b ;
		cin >> a >> b ; // range


		ct(squares(a, b));


	}





	return 0;
}