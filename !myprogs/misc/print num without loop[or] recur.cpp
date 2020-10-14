

// print numbers without using a loop or recursion




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

class Print {

public :
	static int x ;

// A static int variable remains in memory while the program is running.
// A normal or auto variable is destroyed when a function call where
// the variable was declared is over.

	Print() {
		// constructor called
		cout << x++ << endl ;
	}
};

int Print:: x  = 1 ;

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	Print obj[100] ; // Array of objects

	return 0;
}