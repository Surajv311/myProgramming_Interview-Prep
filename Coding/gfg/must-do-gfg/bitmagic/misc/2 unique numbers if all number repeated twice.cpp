/*
///////////////////////////////////////////

find the 2 unique numbers from an array where all
numbers are repeated twice except the two

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

int32_t checkBit(int a, int n) {

	return (a & (1 << n));
}

int32_t main() {

///////////
	c_p_c();
///////////

	// code


	int arr[] = {1, 2, 3, 4, 9, 3, 2, 1, 6, 6} ;
	int size = sizeof(arr) / sizeof(int);

	int sumx = 0 ;
	forn(i, size) {
		sumx = sumx ^ arr[i];
	}

	int	_sumx = sumx ;

	// now we find the righmost bit of 'sumx' and then determine its
	// position and then cancel out the numbers that
	// having the bit in the same position using XOR again...


// calculate the righmost bit position
	int pos = 0 ;
	int bit = 0 ;
	while (bit != 1) {

		bit = sumx & 1 ;
		pos++;
		sumx = sumx >> 1 ;
	}
// with position got ... we would now eliminate via XOR
	int newx = 0 ;
	forn(i, size) {
		if (checkBit(arr[i], (pos - 1))) {
			// keep using XOR to eliminate repeated values....
			newx = newx ^ arr[i] ;

		}
	}

	// lastly our other number would be determied by XOR again of our sumx and our first unique number

	ct2(newx, (newx ^ _sumx));

	return 0;
}
