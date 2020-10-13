/////////////////////////////////////////////////////////
/*

Recursion

* our input becomes smaller...
* choices & decisions ~ recursion
* we take decisions and make the problem into pieces...
* identify if the problem uses recursion or not  ?
* recursive tree ... -> i/o method ...
* no. of branches = no. of choices in recursive tree
* Induction - base - hypothesis


*/
////////////////////////////////////////////////////////////

#include <bits/stdc++.h>

#define setbits(x) __builtin_popcount(x)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ct(x) cout<<x<<endl;
#define ct2(x,y) cout<<x<<" "<<y<<endl;
#define int long long int
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

int32_t numsum(int n) {

	if (n > 0) {
		return numsum(n - 1) + n ;
	}
	return 0 ;
}

int32_t main() {


//////
	c_p_c();
///////


// finding sum of n numbers using recursion

	int n ;
	cin >> n ;

	cout << numsum(n) << endl ;

	return 0;

}














