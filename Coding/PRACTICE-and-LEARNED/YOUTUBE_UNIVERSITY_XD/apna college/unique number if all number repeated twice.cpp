/*
///////////////////////////////////////////

find the unique number from an array where all
numbers are repeated twice except the one

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

// this can be solved using the XOR operator

	//as :

	// A^B res
	// 0 0 0
	// 0 1 1
	// 1 0 1
	// 1 1 0


	int arr[] = {1, 2, 3, 4, 3, 2, 1, 6, 6} ;
	int size = sizeof(arr) / sizeof(int);

	int sumx = 0 ;
	forn(i, size) {
		sumx = sumx ^ arr[i];
	}
	ct(sumx);

	return 0;
}
