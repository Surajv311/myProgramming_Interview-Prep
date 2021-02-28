/*
///////////////////////////////////////////
//Question/Info

permutation with spaces.

Given a string you need to print all possible strings that can be made by placing spaces (zero or one) in between them.

Input:  str[] = "ABC"
Output: ABC
        AB C
        A BC
        A B C

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

void permutate(string ip, string op) {

	if (ip.length() == 0) {
		ct(op);
		return;
	}

	string op1 = op; // if we include space

	string op2 = op;

	op1.pb('_'); // can't use "_" -> fpermissive error, so use: '_'
	op1.pb(ip[0]);

	op2.pb(ip[0]); // not including space

	ip.erase(ip.begin() + 0);

// now recursive calls for both

	permutate(ip, op1);
	permutate(ip, op2);
	return;

	/* SIMILAR QUESTION ~ PERMUTATION WITH CASE CHANGE
	JUST USE : toupper()/tolower(),...*/

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

	string ip ; //cin >>ip ; // input string
	ip = "ABC";
	string op = ""; // output string

//  say string = abc
// so: op = a
	op.pb(ip[0]);
// so: ip=bc
	ip.erase(ip.begin() + 0);

	permutate(ip, op);


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}
