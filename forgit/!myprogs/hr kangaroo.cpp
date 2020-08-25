// hackerrank Kangaroo

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

string kangaroo(int x1, int v1, int x2, int v2) {
	for (int i = 0; i < 10000; i++) {
		if ((x1 + (v1 * i)) == (x2 + (v2 * i))) {
			return "YES";
		}
	}
	return "NO";
}
int32_t main() {

//////
	c_p_c();
///////


// code





	int x1 , v1 , x2 , v2 ;

	cin >> x1 >> v1 >> x2 >> v2 ;

	cout << kangaroo( x1,  v1,  x2,  v2);


	return 0;

}