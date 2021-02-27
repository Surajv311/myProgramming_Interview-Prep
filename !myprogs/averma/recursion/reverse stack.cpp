/*
///////////////////////////////////////////
//Question/Info


reverse a stack using recursion

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

void inss(stack<int>&st, int ele) {

	if (st.size() == 0) {
		st.push(ele);
		return ;
	}

	int temp = st.top();
	st.pop();
	inss(st, ele);
	st.push(temp);

	return;
}

void rev(stack<int>&st)
{
	if (st.size() == 1) {
		return ;
	}

	int temp = st.top();
	st.pop();
	rev(st);
	inss(st, temp);

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

	stack<int> st ;

	st.push(5);
	st.push(4);
	st.push(3);
	st.push(2);
	st.push(1);

	rev(st);


	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}
