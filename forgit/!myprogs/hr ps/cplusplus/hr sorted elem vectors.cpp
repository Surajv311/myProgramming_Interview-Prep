/////////////////////////////////////////////////////////
/*

Print elements in sorted vector.

*/
////////////////////////////////////////////////////////////

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


//////
	c_p_c();
///////

	vector<int> v ;

	int n ;
	cin >> n ;
	int m ;

	for (int i = 0 ; i < n ; i++) {
		cin >> m ;
		v.push_back(m);
	}

	sort(v.begin() , v.end());
	for (int i = 0 ; i < n ; i++) {
		cout << v[i] << " " ;
	}
	return 0;
}



