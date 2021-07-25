/*
///////////////////////////////////////////

// implement caesar cipher
Julius Caesar protected his confidential information
by encrypting it using a cipher. Caesar's cipher shifts
each letter by a number of letters.
If the shift takes you past the end of the alphabet,
just rotate back to the front of the alphabet.
In the case of a rotation by 3, w, x, y and z would map to z, a, b and c.

Original alphabet:      abcdefghijklmnopqrstuvwxyz
Alphabet rotated +3:    defghijklmnopqrstuvwxyzabc

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

string cc(string s , int k ) {

	for (int i = 0; i < s.length(); ++i)
	{
		if (islower(s[i]))
		{
			s[i] = (s[i] + k - 'a') % 26 + 97 ;
		}

		if (isupper(s[i]))
		{
			s[i] = (s[i] + k - 'A') % 26 + 65 ;
		}
	}
	return s ;

}

int32_t main() {

///////////
	c_p_c();
///////////

	// code
	int size ;
	cin >> size ;

	string s ;
	cin >> s ;

	int k ; // its the gap to put in the letters
	cin >> k ;

	if (s.size() == size) {

		ct(cc(s , k));
	}

	return 0;
}


