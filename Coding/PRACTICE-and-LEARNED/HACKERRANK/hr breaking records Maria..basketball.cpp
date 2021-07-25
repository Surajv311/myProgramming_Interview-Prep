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
	// c_p_c();
///////////

	// code

	int h = 0 ; // highest
	int l = 0 ; //low

	int n ; // inputs



	cin >> n ;
	int a[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i] ;
	}

	int max = a[0] ;
	int min = a[0] ;

	for (int i = 1 ; i < n ; i++) {
		if (min > a[i]) {
			l++;
			min = a[i];
		}
		else if (max < a[i]) {

			h++;
			max = a[i];
		}
	}

	cout << h << " " << l ;



	return 0;
}
