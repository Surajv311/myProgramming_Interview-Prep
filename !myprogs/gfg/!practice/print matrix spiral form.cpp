/*
///////////////////////////////////////////

Given a 2D array, print it in spiral form. See the following examples.

Examples:

Input:  1    2   3   4
        5    6   7   8
        9   10  11  12
        13  14  15  16
Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
Explanation: The output is matrix in spiral format.

Input:  1   2   3   4  5   6
        7   8   9  10  11  12
        13  14  15 16  17  18
Output: 1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11
Explanation :The output is matrix in spiral format.

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

	int a , b ;
	cin >> a >> b ;

	int arr[a][b];
	/*
	-i/p-
	3 4
	1 2 3 4
	5 6 7 8
	9 10 11 12
	*/

	forn(i, a) {
		forn(j, b) {
			cin >> arr[i][j];
		}
	}
	int k , l , m , n;

	k = 0 ;  l = 0; m = a  ; n = b ;

	while (k < m and l < n) {


		for (int i = l ; i < n; i++) {
			cout << arr[k][i] << " ";
		}
		k++;

		for (int i = k ; i < m; i++) {
			cout << arr[i][n - 1] << " ";
		}
		n--;

		if (k < m) {
			for (int i = n - 1 ; i >= l; i--) {
				cout << arr[m - 1][i] << " ";
			}
			m--;
		}

		if (l < n) {
			for (int i = m - 1 ; i >= k; i--) {
				cout << arr[i][l] << " ";
			}
			l++;
		}




	}


//it's like:
	/*

			  ^
	l-------->|
	k		  |
	|         |
	|         |
	|         n
	|- - -->  m
	v

	*/

	return 0;
}