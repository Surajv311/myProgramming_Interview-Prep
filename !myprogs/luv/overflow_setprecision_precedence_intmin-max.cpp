/*
///////////////////////////////////////////


Luv- CP

///////////////////////////////////////////
*/


// /////////////////////////////////

// ALL #define REMOVED.....

#include <bits/stdc++.h>

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


// OPERATOR PRECEDENCE ........

	cout << (3 * 7 / 2) << endl ;
	// equal precedence but calculated from left to right unlike BODMAS rule
	cout << (7 / 2 * 3) << endl;

	int a = INT_MIN;
	// So min and max would be storing the possible min/max value of int.
	int b = INT_MAX;
	// ct(a);

	// ALSO

	cout << (b + 1) << endl;// would return negative as:
	// INT_MIN <= x <= INT_MAX;
	// its like in a cycle ... if value exceeds INT_MAX, it shift to negative


// SOLVING OVERFLOW ISSUES

	int x = 1000000;
	int y = 1000000;

	// cout << x*y << endl;
	// so to solve overflow issues we use '1LL'
	// 1LL - denotes ~long long int .... / long int ....

	cout << x * 1LL * y << endl;


// NOTE : double has a very high limit but it cant replace long long int
// because for high values it would have precision issues...
// despite fixed/setprecision()

	return 0;
}