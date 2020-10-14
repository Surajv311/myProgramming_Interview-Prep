

/*
///////////////////////////////////////////

 Beautiful days at movies : Hackerrank .....

///////////////////////////////////////////
*/

#include <bits/stdc++.h>
#define int long long int
#define setbits(x) __builtin_popcount(x)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ct(x) cout<<x<<endl;
#define ct2(x,y) cout<<x<<" "<<y<<endl;
//typedef long long int lli;
typedef long double ld;

using namespace std;

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int32_t bdfun(int i, int j, int k) {

	int d, l, sum, count = 0;

	for (int p = i; p <= j; p++)

	{
		l = p; // lower
		sum = 0;

// reversing the digits
		while (l > 0)

		{	d = l % 10;

			sum = sum * 10 + d;

			l = l / 10;
		}

		if ((sum - p) % k == 0)
		{
			count++;
		}
	}
	return count;
}


int32_t main() {

///////////
	c_p_c();
///////////

	// code
	int a , b , c ;
	cin >> a >> b >> c ;
	ct(bdfun(a , b, c ));

	return 0;
}