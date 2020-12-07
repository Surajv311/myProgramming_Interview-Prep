/*
///////////////////////////////////////////

Vectors and Pairs.

///////////////////////////////////////////
*/

#include <bits/stdc++.h>
#define int long long int
#define setbits(x) __builtin_popcount(x)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ct(x) cout<<x<<endl;
#define ct2(x,y) cout<<x<<" "<<y<<endl;
#define forn(i, n) for (int i = 0; i < (int)(n); i++)
#define forx(i, x, n) for (int i = x ; i < (int)(n); i++)
#define for1(i,n) for (int i = 1; i <= (int)(n); i++)
#define all(v) v.begin(), v.end()

//typedef long long int lli;
typedef long double ld;
//typedef pair<int, int> pii;
//typedef std::vector<int> vi;
//typedef vector<pii> vii;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

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

	vector <int> v ;

	v.pb(1);
	v.pb(2);
	v.pb(3);
	v.pb(4);

// WAYS TO PRINT VALUES //

//// using for loop
	forn(i, v.size()) {
		cout << (v[i]) << " ";
	}

	ct("");
//// using iterator
	vector<int>:: iterator it;

	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " "; // to print values inside iterator...pointer
	}

	ct("");
////
	for (auto e : v) { // 'auto' puts the datatype automatically in 'e'

		cout << e << " ";
	}

	ct("");
// specifying vector size

	vector<int> vec (3, 22);
// stores 3 values of value '23'

// pair associates two different data together

	pair <int, char> p;

	p.first = 1;
	p.second = 'c'; // we must access via first/second...

// Similarly other operations in vecotrs..
	// *max_element()
	// accumulate()
	// v.swap(v1)
	sort(all(v));
	// foreach loop

/////////////////////////////////////////////

	// Pair class couples together the pair of values,
	// which may be of different types
	// (T1 and T2).
	// The individual values can be accessed through its
	// public members first and second.
	// We can also form nested pairs as well, for example,
	// pair<int, pair <int, int> >
	// make_pair() is used to couple the values.
	// We can also do {a, b} to make pairs.

	// To convert the vector into a prefix sum vector(Quite useful)
	// Example: v = {1, 2, 3}
	// Prefix_sum v = {1, 3, 6}
	// partial_sum(v.begin(), v.end(), v.begin());
	// // converts vector v to prefix sum vector

	return 0;
}