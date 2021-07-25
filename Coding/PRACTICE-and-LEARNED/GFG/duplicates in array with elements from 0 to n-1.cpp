/*
///////////////////////////////////////////

Given an array of n elements containing elements
from 0 to n-1, with any of these numbers appearing
any number of times, find these repeating numbers in
O(n) and using only constant memory space.

Example:

Input: n = 7 , array = {1, 2, 3, 1, 3, 6, 6}
Output: 1, 3 and 6.
Explanation: Duplicate element in the array are 1 , 3 and 6

Input: n = 6, array = {5, 3, 1, 3, 5, 5}
Output: 3 and 5.
Explanation: Duplicate element in  the array are 3 and 6

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
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

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


	void printRepeating(int arr[], int n)
	{
		// First check all the values that are
		// present in an array then go to that
		// values as indexes and increment by
		// the size of array
		for (int i = 0; i < n; i++)
		{
			int index = arr[i] % n;
			arr[index] += n;
		}

		// Now check which value exists more
		// than once by dividing with the size
		// of array
		for (int i = 0; i < n; i++)
		{
			if ((arr[i] / n) >= 2)
				cout << i << " ";
		}
	}






	return 0;
}