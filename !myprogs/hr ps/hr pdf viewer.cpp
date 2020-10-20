/*
///////////////////////////////////////////

When you select a contiguous block of text in a PDF viewer,
the selection is highlighted with a blue rectangle.
In a new kind of PDF viewer, the selection of each word
is independent of the other words; this means that each
rectangular selection area forms independently around
each highlighted word.

In this type of PDF viewer,
the width of the rectangular selection
area is equal to the number of letters in
the word times the width of a letter, and the
height is the maximum height of any letter in the word.

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

	int arr[1000] ;

	forx(i, 97, 123) {
		cin >> arr[i] ;
	}


	string s ;

	cin >> s ;

	int d = s.size() ;

	int arrs[d] ;
	forn(i, d) {
		arrs[i] = arr[int32_t(s[i])];
	}

	int max = *max_element(arrs, arrs + d);

	int k = max * d;
	cout << k ;




	return 0;
}