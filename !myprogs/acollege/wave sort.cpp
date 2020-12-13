/*
///////////////////////////////////////////

Wave sort

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

void wave(int arr[], int n) {

	for (int i = 1 ; i < n; i += 2) {

		if (arr[i] > arr[i - 1]) {

			swap(arr[i], arr[i - 1]);

		}

		if (arr[i] > arr[i + 1] and i <= 2) {

			swap(arr[i], arr[i + 1]);
		}

	}


}

int32_t main() {

///////////
	c_p_c();
///////////

	// code


	int arr[] = {1, 3, 4, 6, 8, 9, 7};

	int n = sizeof(arr) / sizeof(int);
	wave(arr, n);

	forn(i, n) {

		cout << arr[i] << " ";
	}




	return 0;
}