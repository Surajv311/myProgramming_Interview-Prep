/*
///////////////////////////////////////////
//Question/Info

infix to postfix pseducode

///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

// #define int 		   long long int
#define setbits(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout<<x<<endl;
#define ct2(x,y) 	   cout<<x<<" "<<y<<endl;
#define forn(i,n) 	   for(int i = 0; i < (int)(n); i++)
#define forx(i,x,n)    for(int i = x; i < (int)(n); i++)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed<<setprecision(y)<<x;
#define PI 			   3.1415926535897932384626433832795
#define MOD 		   1000000007 // (1e9+7)
#define pii 		   pair<int,int>
#define pis 		   pair<int,string>
#define vi  		   vector<int>
#define vii 		   vector<pii>
#define mii 		   map<int,int>

typedef long long int lli;
typedef long double ld;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

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

	/*
	int t ; cin >> t; while(t--){}
	*/

	int pfun(char x) {

		if (c == '^') {
			return 3 ;
			// since higher precedence
		}

		if * or / = return 2 ;
	+ or - = return 1 ;
	else return -1 ;

}

string itp(string s) {

		string <char> st;

		forn(s.length()) {


			if s[i] from 'a' to 'z' || 'A' to 'Z' {
				res += s[i]
			}

			if '(' = st.push

			else if ')' = {
				while (st.empty() and top != '(') {
						res += st.top
						st.pop
					}

					if (!st.empty()) {
						st.pop
					}
				}
				else {
					while (st.empty and pfun(st.top) > pfun(s[i])) // CALLING A FUNCTION IN CONDITION
					{
						res += st.top
						       st.pop
					}
					st.push(s[i])
				}
		}

		while ( append the rest... from st.top - condition !st.empty()) {
			...
		}

	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}