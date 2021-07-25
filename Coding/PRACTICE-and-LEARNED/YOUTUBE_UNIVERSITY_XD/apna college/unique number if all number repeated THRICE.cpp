/*
///////////////////////////////////////////

find the unique number from an array where all
numbers are repeated thrice except the unique one

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


int32_t getBit(int n , int x) {

// be cautious with () as precedence may o/p wrong ans....
	return ((n & (1 << x)) != 0);
// should return only 1 so that we can increment count
}

int32_t setBit(int n , int x) {

	return ((n | (1 << x)));
}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
	int size = sizeof(arr) / sizeof(int);

	// now to find the unique number

	// first we count the occurences of every bit of each number ...
	//the final list of occurences would help to give our final number
	// the numbers divisible by 3 would give bit-'0' and others would give bit-'1'
	// then our final number would be formed....

// to count occurrences of bit

	// let our final number have 64 bits (upper side)

	int final = 0 ;

	forn(i, 64) {

		int count = 0 ;

		forn(j, size) {

			if (getBit(arr[j] , i)) { // if our bit is setBit or '1' then we increase the value of count

				count++;
			}
		}

// now to check if divisible by 3 or not and accordingly push the bits to form final number

		if (count % 3 != 0) {
			// if not divisible by three means we would push bit-'1' for forming our number and rest -'0'

			final = setBit(final, i);
		}



	}

// giving out the final number

	ct(final);


	return 0;
}
