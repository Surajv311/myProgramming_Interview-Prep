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



int32_t main() {

///////////
	c_p_c();
///////////

	// code


//pointers

	int a = 5 ;
	int *p = &a ;
	int **p2 = &p ;

	ct(a); // prints value of a
	ct(p); // prints address of a
	ct(&a); // address of a
	ct(*p); // value p is pointing to
	ct(p2); // address of pointer p
	ct(*p2); // giving address of a
	ct(**p2); // giving value

	return 0;
}