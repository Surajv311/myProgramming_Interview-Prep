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


	int i;

	int n ; // input
	cin >> n;

	int arr[n];
	for ( i = 0 ; i < n ; i++) {
		arr[i] = 0 ;
	}

	int a ;

	for (i = 0; i < n; i++) {
		cin >> a;
		arr[a]++;
	}

	for (i = 0; i < 100; i++)
	{
		cout << arr[i] << " ";
	}


	return 0;
}