/*
///////////////////////////////////////////

Given an unsigned integer N.
The task is to swap all odd bits with even bits.
For example, if the given number is 23 (00010111),
it should be converted to 43(00101011). Here, every
even position bit is swapped with adjacent bit on
the right side(even position bits are highlighted
in the binary representation of 23), and every odd
position bit is swapped with an adjacent on the left side.

Example 1:

Input: N = 23
Output: 43
Explanation:
Binary representation of the given number
is 00010111 after swapping
00101011 = 43 in decimal.
Example 2:

Input: N = 2
Output: 1
Explanation:
Binary representation of the given number
is 10 after swapping 01 = 1 in decimal.

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
#define all(v) v.begin(), v.end()

//typedef long long int lli;
typedef long double ld;
//typedef pair<int, int> pii;
//typedef vector<int> vi;
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

	int x ;
	cin >> x ;


	// Get all even bits of x
	unsigned int even_bits = x & 0xAAAAAAAA;

	// Get all odd bits of x
	unsigned int odd_bits = x & 0x55555555;

	even_bits >>= 1; // Right shift even bits
	odd_bits <<= 1; // Left shift odd bits

	cout << (even_bits | odd_bits); // Combine even and odd bits



	return 0;
}