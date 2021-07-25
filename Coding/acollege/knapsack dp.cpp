/*
///////////////////////////////////////////

0-1 Knapsack problem DP

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

int ksack(int wt[], int val[], int w, int n) {

// base case
	if (n == 0 or w == 0) {
// if array size ==0 means no weight or the required weight in knapsack is 0 then:
		return 0 ;
	}


	if (wt[n - 1] > w) {

		return (ksack(wt, val, w, n - 1) );
	}


// choice diagram

	// if (wt[n - 1] <= w)
	// if included then wt qould be deducted... if not only n would change
	return (max( val[n - 1] + ksack(wt, val, w - wt[n - 1], n - 1) , ksack(wt, val, w, n - 1)  ) );

}

int32_t main() {

///////////
	c_p_c();
///////////

	// code


//knapsack

	int wt[] = {1, 2, 3, 4, 5, 6}; // weights of all items
	int val[] = {10, 20, 30, 40, 50, 60}; // their values

	int w = 8; // max weight that can be kept in a knapsack

// we need to keep a list of items in knapsack that give the highest value

	int n = sizeof(wt) / sizeof(int);

	cout << ksack(wt, val, w, n);

	return 0;
}