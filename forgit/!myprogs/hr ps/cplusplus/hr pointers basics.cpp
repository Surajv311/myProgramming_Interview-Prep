/////////////////////////////////////////////////////////
/*
Complete the update function in the editor below.

update has the following parameters:

int *a: an integer
int *b: an integer

Returns

The function is declared with a void return type,
so there is no value to return.
Modify the values in memory so that 'a' contains their sum and 'b'
contains their absoluted difference.


Input Format

Input will contain two integers, a and b, separated by a newline.

Sample Input
4
5

Sample Output
9
1


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

void update(int *a, int *b) {
	int sum = *a + *b;
	int dif = *a - *b > 0 ? *a - *b : -(*a - *b);
	*a = sum;
	*b = dif;
}

int32_t main() {


//////
	c_p_c();
///////

	int a, b;
	int *pa = &a, *pb = &b;

	cin >> a >> b ;

	update(pa, pb);

	cout << a << " " << b ;

	return 0;



}