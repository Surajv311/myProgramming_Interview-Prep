/*
///////////////////////////////////////////
//Question/Info

delete middle element of the stack

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

stack<int> delm(stack<int>&st, int k) {
// passed by ref

	if (st.empty()) {
		return st;
	}
	if (k == 0) {
		//  k is basically our count,
		//  for every call it decreases as we
		// as it means we are moving close to middle element

		st.pop();
	}

// since to reach middle element
	// we have to pop all top elements one by one
	// reach the middle element then pop it and
	// now the again push the top elements that
	// were removed earlier.

	int x = st.top();
	st.pop(); // decreasing stack size

	delm(st, k - 1);

	st.push(x);

	return st;

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

	stack<int> st ;

	st.push(5);
	st.push(4);
	st.push(3);
	st.push(2);
	st.push(1);

	int k = st.size();
	k = k / 2; // since middle element;

	/* for even numbers,
	we can call the function twice and
	send in postions at k,(k+1)/2...
	*/

	delm(st, k );


	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}