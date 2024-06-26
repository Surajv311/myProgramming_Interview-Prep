/*
///////////////////////////////////////////
//Question/Info

generate all balanced parenthesis

Write a function to generate all possible n pairs of balanced parentheses.
Examples:

Input: n=1
Output: {}
Explantaion: This the only sequence of balanced
parenthesis formed using 1 pair of balanced parenthesis.

Input : n=2
Output:
{}{}
{{}}
Explantaion: This the only two sequences of balanced
parenthesis formed using 2 pair of balanced parenthesis.

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


void bpa(int open, int close , string op, vector<string> &v)
{
	if (open == 0 and close == 0)
	{
		// means we are in leaf node of recursive tree
		v.pb(op);
		return;
	}

	if (open != 0)
	{
		//  check pattern in recursive tree
		string op1 = op;
		op1.pb('(');
		bpa(open - 1, close, op1, v);
	}

	if (close > open) {
		// we can use close bracket now
		string op2 = op ;
		op2.pb(')');
		bpa(open, close - 1, op2, v);
	}

	return;
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

	int n = 3;

	vector<string> v ;
	int close = n ;
	int open = n ;

	string op = "";

	bpa(open, close, op, v);

	for (auto i : v) {
		ct(i);
	}

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

