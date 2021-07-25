#include <bits/stdc++.h>
#define int long long int
#define setbits(x) __builtin_popcount(x)
//#include <cstdlib>
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
	//c_p_c();
///////////

	// code

	int q ; // number of queries
	cin >> q ;

	int x ; // cat A
	int y ; // cat B
	int z ; // mouse
	for (int i = 0 ; i < q ; i++) {

		cin >> x >> y >> z ;

		int d1 = x - z ;
		int d2 = y - z ;
		d1 = abs(d1);
		d2 = abs(d2);
		if (d1 > d2) {
			cout << "Cat B" << endl;

		}
		else if (d1 < d2) {
			cout << "Cat A" << endl;
		}

		else {

			cout << "Mouse C" << endl ;
		}
	}





	return 0;
}