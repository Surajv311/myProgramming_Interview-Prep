/*
///////////////////////////////////////////

rat in a maze problem

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

bool check(int **arr, int x , int y , int n ) {

	if (x < n and y < n and arr[x][y] == 1) {
		// to check our next step is blocked-0 or open-1 ...
		return true;
	}
	return false;

}

bool maze(int **arr, int x , int y , int n , int **sol) {

// base case

	if (x == (n - 1) and y == (n - 1)) {

		sol[x][y] = 1 ;
		return true; // when the rat reaches the destination point- that is the right corner of the square maze...
	}

	// choice diagram

	if (check(arr, x , y , n )) {
		sol[x][y] = 1; // if the check is true then 1
		// but this need not help us arrive at the same endpoint destination
		// so some if conditions:

// checking upcoming steps taken by the rat...
		if (maze(arr, x + 1 , y , n , sol)) {
			return true ;
		}

		if (maze(arr, x , y + 1 , n , sol))
		{
			return true ;
		}

		// if not true then backtrack

		sol[x][y] = 0;
		return false;
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
		arr[i] = new int[n];
	}

	forn(i, n) {
		forn(j, n) {
			cin >> arr[i][j];
		}
	}

// initialising the solution array
	int **sol = new int*[n];
	forn(i, n) {
		sol[i] = new int[n];

		forn(j, n) {
			sol[i][j] = 0 ;
		}
	}


	if (maze(arr, 0, 0, n, sol))
	{

		forn(i, n) {
			forn(j, n) {
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
	}


	return 0;
}