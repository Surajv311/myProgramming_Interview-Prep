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
	c_p_c();
///////////

	// code

	int n ;
	cin >> n ; // trips
	int m ;
	for (int i = 0 ; i < n ; i++) {

		cin >> m ; // money they have
		int f ; // flavours
		cin >> f ;
		int arr[f];
		for (int j = 1 ; j <= f ; j++) {
			cin >> arr[j]; // flavours filled
		}
// we must find the indices

		int s1 , s2 ;
		for (int k = 1 ; k <= f ; k++) {
			for (int l = k + 1 ; l <= f ; l++) {
				if (arr[l] + arr[k] == m) {
					s1 = l ;
					s2 = k ;
				}
			}
		}
		cout << s2 << " " << s1 << endl;
	}



	return 0;
}