/*
///////////////////////////////////////////

Function Description

Complete the function maximumToys in the editor below.
It should return an integer representing the maximum
number of toys Mark can purchase.

maximumToys has the following parameter(s):

prices: an array of integers representing toy prices
k: an integer, Mark's budget

Sample Input
7 50
1 12 5 111 200 1000 10

Sample Output
4

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


	int t ;
// items
	cin >> t;

	int arr[t] ;

	int m ; // money

	cin >> m ;

	forn(i, t) {
		cin >> arr[i];
	}
	sort(arr, arr + t);

	int count = 0 ;
	int sum = 0 ;

	forn(i, t) {
		sum += arr[i] ;
		if (sum <= m) {
			count++ ;
		}
	}

	ct(count);


	return 0;
}