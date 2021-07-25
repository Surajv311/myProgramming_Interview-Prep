/*
///////////////////////////////////////////

n queens problem

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


bool safe(int **arr, int x , int y , int n ) {

// checking if there is a queen in a column
	for (int row = 0 ; row < x ; row++) {
		if (arr[row][y] == 1) {
			// equal to 1 means there is a queen on the way
			return false;
		}
	}

// to check for diagonal
// diagonal going left up/down

// checking left diagonal
	int row = x ;
	int col = y ;

	while (row >= 0 and col >= 0) {

		if (arr[row][col] == 1) {
			return false;
		}

		row--; col--;


	}

// checking right digonal
	row = x ;
	col = y ;

	while (row >= 0 and col >= 0) {

		if (arr[row][col] == 1) {
			return false;
		}

		row--; col++;


	}

	return true ;


}


bool nq(int **arr, int x , int n) {
// we need not pass 'y' parameter

	// we need not create a new array... we get solution in the same array

	if (x >= n) {
		return true; // means n queens placed


	}

// now checking if queen placed is safe
// we check it in every row/col

	for (int col = 0 ; col < n ; col++) {

		if (safe(arr, x, col, n)) {
// checking the safe for every row/col

			arr[x][col] = 1 ;

// checking for next row... if we can plce queen for another row

			if (nq(arr, x + 1, n)) {
				return true;
			}

// backtrack
			arr[x][col] = 0 ;

		}



	}

	return false;

}



int32_t main() {

///////////
	c_p_c();
///////////

	// code


	int n ;
	cin >> n ;

	int **arr = new int*[n];

	forn(i, n) {
// allocating memory to 1d array
		arr[i] = new int[n];

		forn(j, n) {
			// initialising to 0
			arr[i][j] = 0 ;

		}

	}

	if (nq(arr, 0, n)) {

		forn(i, n) {


			forn(j, n) {
				cout << arr[i][j] << " ";

			}
			cout << endl ;

		}




	}


	return 0;
}