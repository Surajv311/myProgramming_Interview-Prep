/*
///////////////////////////////////////////

// sort huge numbers... hr

///////////////////////////////////////////
*/

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

bool compare(string a , string b) {

	if (a.length() == b.length()) {
		return a < b; // returns true (boolean) if the condition satsified
		/*
		if length same then follows lexicographic order to sort
		if not same length then returns the smaller length one first
		(as it would be small) .... below...
		*/
	}

	return a.length() < b.length() ;


}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	int n ;
	cin >> n ;
// inputs

	string arr[n] ; // taking string array
	// as even with lli arr[] it would give error for i/p of 10^1000...

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i] ;
	}

	sort(arr, arr + n, compare); // using comparators
	// this would sort the numbers in lexicographic(dictionary order) way..
	// we need some constraints for right ans

	for (int i = 0; i < n; ++i)
	{
		ct(arr[i]);
	}


	return 0;
}