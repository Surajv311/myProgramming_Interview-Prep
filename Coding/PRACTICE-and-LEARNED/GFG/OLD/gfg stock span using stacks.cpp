/*
///////////////////////////////////////////


The stock span problem is a financial problem
where we have a series of n daily price quotes
for a stock and we need to calculate span of stock’s
price for all n days.
The span Si of the stock’s price on a given
day i is defined as the maximum number of
consecutive days just before the given day,
for which the price of the stock on the current
day is less than or equal to its price on the given day.
For example, if an array of 7 days prices is given
as {100, 80, 60, 70, 60, 75, 85}, then the
span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}


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


void span(int prices[] , int n) {

	stack <int> s ;

	int spanarr[n];

	s.push(0);

	spanarr[0] = 1 ; // initial element of spanarr must be 1

// better algo as we need not use count var....

	for (int i = 1 ; i < n; i++) {
		while (!s.empty() and prices[s.top()] <= prices[i]) {
			s.pop();
		}

		if (s.empty()) {
			spanarr[i] = i + 1; // since minimum span must be 1
		}

		else {
			spanarr[i] = i - s.top() ;
		}

		s.push(i);

	}

	forn(i, n) {
		cout << (spanarr[i]) << " ";
	}

}


int32_t main() {

///////////
	c_p_c();
///////////

	// code


// stock span problem

	int n ; // size ;
	cin >> n ;
	int prices[n];

	forn(i, n) {
		cin >> prices[i] ;
	}
	span(prices , n);






	return 0;
}