/*
///////////////////////////////////////////
//Question/Info

letter case permutation

Given a string S, we can transform every letter individually to be lowercase or uppercase to create another string.

Return a list of all possible strings we could create. You can return the output in any order.



Example 1:

Input: S = "a1b2"
Output: ["a1b2","a1B2","A1b2","A1B2"]
Example 2:

Input: S = "3z4"
Output: ["3z4","3Z4"]
Example 3:

Input: S = "12345"
Output: ["12345"]
Example 4:

Input: S = "0"
Output: ["0"]


Constraints:

S will be a string with length between 1 and 12.
S will consist only of letters or digits.

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

void lcpn(string ip, string op, vector<string>&v )
{
	if (ip.length() == 0) {
		v.pb(op);
		return;
	}

	if (isalpha(ip[0]))
	{
		string op1 = op;
		string op2 = op;

		op1.pb(tolower(ip[0]));
		op2.pb(toupper(ip[0]));

		ip.erase(ip.begin() + 0); // we could also pass substring

		lcpn(ip, op1, v);
		lcpn(ip, op2, v);
	}
	else {
//  if we do not encounter a number

		string op1 = op;
		op1.pb(ip[0]);

		ip.erase(ip.begin() + 0);
		lcpn(ip, op1, v);

	}

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

	string s = "a1b2";

	string ip = s;
	string op = "";

	vector<string> v;

	lcpn(ip, op, v);

	for (auto i : v) {
		ct(i);
	}

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

