/*
///////////////////////////////////////////
//Question/Info

Reverse a stack without creating another stack
(use recursion)

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

void insert(stack<int>&ss, int x) {

	if (ss.empty()) {
		ss.push(x);
		return;
	}

	int k = ss.top();
	ss.pop();
	insert(ss, x);
	ss.push(k);

}

void rev(stack<int> &ss) {
	if (ss.empty()) {
		return;
	}

	int x = ss.top() ;

	ss.pop();
	rev(ss);
	insert(ss, x);

}

void display(stack<int> ss) {
	while (!ss.empty()) {
		ct(ss.top());
		ss.pop();
	}
}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/
	stack<int> ss;

	ss.push(1);
	ss.push(2);
	ss.push(3);
	ss.push(4);
	ss.push(5);
	display(ss);
	ct("")
	rev(ss);
	display(ss);

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}