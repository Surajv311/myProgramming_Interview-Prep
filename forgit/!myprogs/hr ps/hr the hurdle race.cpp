#include <bits/stdc++.h>
#define int long long int
#define setbits(x) __builtin_popcount(x)
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
	//  c_p_c();
///////////

	// code

	int n ; // number of hurdles
	cin >> n ;

	int h_; // max height it can jump

	cin >> h_;

	int h[n];
	for (int i = 0 ; i < n ; i++) {

		cin >> h[i]; // height inputs

	}

	sort(h , h + n ); // sorting

	int c = h[n - 1];

	int d = c - h_;
	int d_ = 0 ;
	if (d >= 0) {
		cout << c - h_;
	}
	else {
		cout << d_;
	}


	return 0;
}