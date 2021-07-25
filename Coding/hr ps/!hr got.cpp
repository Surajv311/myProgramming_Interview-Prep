/*
///////////////////////////////////////////

Function Description

Complete the gameOfThrones function below to determine whether a given string can be rearranged into a palindrome. If it is possible, return YES, otherwise return NO.

gameOfThrones has the following parameter(s):

s: a string to analyze

Sample Input 0
aaabbbb

Sample Output 0
YES

Explanation 0
A palindromic permutation of the given string is bbaaabb.

Sample Input 1
cdefghmnopqrstuvw

Sample Output 1
NO

Explanation 1
Palindromes longer than 1 character are made up of pairs of characters. There are none here.

Sample Input 2
cdcdcdcdeeeef

Sample Output 2
YES

Explanation 2
An example palindrome from the string: ddcceefeeccdd.

ANAGRAM - Word formed by rearranging letters

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

int32_t palindromeString (string &s) {

// if its a palindrome then the number of letters to repeat would be even

	int v[26]  = { 0 };     // 26 character array

	int n = s.size() ; // for the iterations
	forn(i , n) {

		v[s[i] - 'a']++; // incrementing in the positions of 'v'
		// if palindrome then the chars would be even as count from front and back

	}

// now for palindrome the chars in middle should be unique ... if two or more
// different chars then it would not become palindrome ...
// hence if more than one unique char in middle then not palindrom


	int odd = 0  ;

	forn(i, 26)
	{
		if (v[i] % 2 != 0) // if palindrome then total same chars would be even , since from both sides
		{
			odd++ ;
		}

	}

	if (odd > 1) {
		return 0 ;
	}
	else {
		return 1;
	}


}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

// to find if the input string is palindrome

	string s ;


	cin  >> s ;


	sort(all(s)); // not necessary though




	if (palindromeString(s) == 0 ) {

		ct("NO");
	}

	else {
		ct("YES");
	}


	return 0;
}