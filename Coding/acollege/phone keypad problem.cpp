/*
///////////////////////////////////////////

print all possible words from phone digits - Phone keypad problem

// print the possible combination of words/apha
//when you dial a number in the keypad of a cellphone

like when you press keypad 2 3 : then possible alpahbets are:
ad ae af bd be bf cd ce cf

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

string arr[] = {"!", "#*" , "abc" , "def", "ghi" , "jkl" , "mno" , "pqrs" , "tuv", "wxyz"};

void keyp(string s , string ans) { // receiving numbers as a string

	if (s.length() == 0) {

		ct(ans) ;
		return ;

	}

	char ch = s[0]; // say if we got 2,3 as our input for keypad
// then we extract the corressponding set of alphabets for the combinations
	string x = arr[ch - '0']; // gives value at the index

	string ros = s.substr(1);

	for (int i = 0 ; i < x.length() ; i++) {


		keyp(ros, ans + x[i]);
	}


}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	keyp("23", "");

	return 0;
}