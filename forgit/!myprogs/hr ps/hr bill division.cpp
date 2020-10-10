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


	int n ; // number of items in bill
	cin >> n ;
	int e ; // anna did not eat
	cin >> e ; // index of the array
	int arr[n] ;
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i] ;
	}
	int c ; // charged by brian
	cin >> c;
	int sum = 0 ;
	for (int i = 0 ; i < n ; i++) {

		sum += arr[i];

	}

	sum -= arr[e];

	sum = sum / 2 ;

	c = c - sum ;
	if (c > 0 ) {

		cout << c ;
	}

	else {
		cout << "Bon Appetit";
	}
	return 0;
}