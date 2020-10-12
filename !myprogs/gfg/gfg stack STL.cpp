/////////////////////////////////////////////////////////
/*

stack STL implementation

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

void display(stack <int> ss) {

	while (!ss.empty()) {
		cout << ss.top() << endl ;
		ss.pop() ;
	}


}


int32_t main() {


//////
	c_p_c();
///////

// using STL

	stack <int> ss ;

	ss.push(1) ;
	ss.push(2) ;
	ss.push(3) ;
	ss.push(4) ;
	display(ss) ;

	ss.pop();
	ss.pop() ;

	display(ss) ;





	return 0;

}














