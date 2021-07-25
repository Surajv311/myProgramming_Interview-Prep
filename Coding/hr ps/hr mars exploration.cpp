/*
///////////////////////////////////////////

Letters in some of the SOS messages are
altered by cosmic radiation during transmission.
Given the signal received by Earth as a string,
determine how many letters of Sami's SOS have been changed by radiation.

For example, Earth receives SOSTOT. Sami's original message was
SOSSOS.
Two of the message characters were changed in transit.

Function Description

Complete the marsExploration function in the editor below.
It should return an integer representing the number of
letters changed during transmission.

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


int32_t marsExploration(string s) {

	int count = 0;
	for (int i = 0; i < (int)(s.length()); i++)
	{
		if (i % 3 == 0 || i % 3 == 2)
		{
			if (s[i] != 'S')
			{
				count++;
			}
		}
		else
		{
			if (s[i] != 'O')
			{
				count++;
			}
		}
	}
	return count;
}


int32_t main() {

///////////
	c_p_c();
///////////

	// code



	string s;

	cin >> s ;

	int result = marsExploration(s);

	cout << result << "\n";



	return 0;
}


