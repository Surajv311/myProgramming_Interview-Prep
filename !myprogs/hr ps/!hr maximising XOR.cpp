/*
///////////////////////////////////////////

Complete the maximizingXor function in the editor below. It must return an integer representing the maximum value calculated.

maximizingXor has the following parameter(s):

l: an integer, the lower bound, inclusive
r: an integer, the upper bound, inclusive

Output Format
Return the maximal value of the xor operations for
all permutations of the integers from  to , inclusive.

Sample Input 0
10
15

Sample Output 0
7

like 10^10 , 10^11, ..... 11^11, 11^12......
Find the max value of all permutations ....

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



	int a ;
	int b ;
	cin >> a >> b ;

	int mi = min(a, b);
	int ma = max(a, b);
// find max value of XOR operation between the two
	int n = ma - mi + 1 ;

	int arr[n] ;
	int w = 0 ;

	forx(i, mi, ma + 1) {
		arr[w] = i ;
		w++ ;

	}
	vector <int > v ;
	forn(i, n) {
		forn(j, n) {
			int d = arr[i] ^ arr[j];

			v.pb(d);


		}
	}

	int k = *max_element(all(v));

	ct(k);

	return 0;
}