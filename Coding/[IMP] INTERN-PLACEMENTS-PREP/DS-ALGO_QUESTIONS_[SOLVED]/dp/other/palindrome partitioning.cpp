/*
///////////////////////////////////////////
//Question/Info

palindrome partitioning problem

Given a string, a partitioning of the string is a
palindrome partitioning if every substring of the
partition is a palindrome. For example, “aba|b|bbabb|a|b|aba”
is a palindrome partitioning of “ababbbabbababa”.
Determine the fewest cuts needed for a palindrome
partitioning of a given string. For example,
minimum of 3 cuts are needed for “ababbbabbababa”.
The three cuts are “a|babbbab|b|ababa”. If a string
is a palindrome, then minimum 0 cuts are needed.
If a string of length n containing all different
characters, then minimum n-1 cuts are needed.

Examples :

Input : str = “geek”
Output : 2
We need to make minimum 2 cuts, i.e., “g ee k”
Input : str = “aaaa”
Output : 0
The string is already a palindrome.
Input : str = “abcde”
Output : 4
Input : str = “abbac”
Output : 1


author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define int 		   long long int
#define setbits(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout << x << endl;
#define ct2(x,y) 	   cout << x << " " << y << endl;
#define forn(i,n) 	   for(int i = 0; i < (int)(n); ++i)
#define forx(i,x,n)    for(int i = x; i < (int)(n); ++i)
#define nfor(i,n)      for(int i = n-1; i >= 0; --i)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed << setprecision(y) << x;
#define PI 			   3.1415926535897932384626433832795
#define MOD 		   1000000007 // (1e9+7)
#define pii 		   pair<int,int>
#define pis 		   pair<int,string>
#define vi  		   vector<int>
#define vii 		   vector<pii>
#define mii 		   map<int,int>
#define p_q            priority_queue // priority_queue<int> (&) priority_queue< int,vi,greater<int> >
#define _IOS      	   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long double ld;

#pragma GCC optimize("Ofast")

void c_p_c()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

bool pal(string s, int i , int j) {
	//  checking if palindrome
	if (i >= j) {
		return true;
	}

	while (i < j) {
		if (s[i] != s[j]) {
			return false;
		}
		i++; j--;
	}

	return true;
}

int ppp(string s , int i , int j ) {

	if (i >= j) {
		return 0;
	}

	if (pal(s, i, j) == true) {
		return 0;
	}
	int mn = INT_MAX;
	for (int k = i ; k < j ; k++) {
//  note that j is s.length()-1, our
// k should not collide with or become equal to j , .. hence j-1

		int temp = 1 + ppp(s, i, k) + ppp(s, k + 1, j);

		mn = min(mn, temp) ;

	}

	return mn;

}

// top down memoization

int static dp[1001][1001];

int ppm(string s , int i , int j ) {

	if (i >= j) {
		return 0;
	}

	if (dp[i][j] != -1) {
		return dp[i][j];
	}
	if (pal(s, i, j) == true) {
		return 0;
	}
	int mn = INT_MAX;
	for (int k = i ; k < j ; k++) {

		int temp = 1 + ppm(s, i, k) + ppm(s, k + 1, j);

		if (temp < mn) {
			mn = temp ;
		}
	}

	return dp[i][j] = mn;
}

// further optimising top down

int static t[1001][1001];

int ppmo(string s , int i , int j ) {

	if (i >= j) {
		return 0;
	}

	if (pal(s, i, j) == true) {
		return 0;
	}
	int mn = INT_MAX;
	int left, right;
	for (int k = i ; k < j ; k++) {

		int temp = 1 + ppmo(s, i, k) + ppmo(s, k + 1, j);

		if (t[i][k] != -1) {
			left = t[i][k];
		}
		else {
			left = ppmo(s, i, k);
			t[i][k] = left;
		}

		if (t[k + 1][j] != -1) {
			right = t[k + 1][j];
		}
		else {
			right = ppmo(s, k + 1, j);
			t[k + 1][j] = right;
		}
		temp = 1 + left + right;

		if (temp < mn) {
			mn = temp ;
		}
	}

	return t[i][j] = mn;
}

int32_t main() {
///////////
	c_p_c();
///////////
	_IOS
//////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/


	string s = "abcdcdbb";
	int i = 0 ;
	int j = s.length() - 1 ;

	ct(ppp(s, i, j));

	memset(dp, -1, sizeof(dp));
	ct(ppm(s, i, j));
	memset(t, -1, sizeof(t));
	ct(ppmo(s, i, j));



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}