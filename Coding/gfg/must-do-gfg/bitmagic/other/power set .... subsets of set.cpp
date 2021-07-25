/*
///////////////////////////////////////////

find and print subsets of a given set using bitwise operator

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
//typedef std::vector<int> vi;
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

// let us put the inputs in the array

	int n ; // inputs ;
	cin >> n ;

	int arr[n] ;

	forn(i, n) {
		cin >> arr[i] ;
	}

// now find all the subsets in the array using bitwise operator

// total number of subsets for a set having n elements is 2^n - 1

	// Also 1<<2 = 1 * 2^2
	// wherever we get a bit , we print that element from the array


	forn(i , (1 << n)) {

		forn(j, n ) {

			if ( i & (1 << j)) {

				cout << (arr[j]) << " ";
			}

		}
		cout << endl ;
	}



	return 0;
}