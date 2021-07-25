/*
///////////////////////////////////////////
//Question/Info


///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;


int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	->to find gcd of two numbers
	cout << __gcd(3, 6) << endl;

	->to count the number of digits in a number
	cout << floor(log10(342879)) + 1 << endl;

	->instead of using strlen()
	for ( i = 0 ; s[i] ; i++);

	->check if number even / odd without using %
	if (a & 1) ct << "odd";

	->Use emplace_back() instead of push_back()

		->Use conditional operator ?, instead of if - else;

->Use memset(arr, -1, sizeof(arr)) to initialise array ;

	/*

	PRIME SIEVE:

	vector<int> v(N, 1);
	for (int i = 2; i <= sqrt(N); ++i) {
		if (v[i]) {
			for (int j = i * i; j <= N; j += i) {
				v[j] = 0;
			}
		}
	}
	v[0] = v[1] = 0;



	*/


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}