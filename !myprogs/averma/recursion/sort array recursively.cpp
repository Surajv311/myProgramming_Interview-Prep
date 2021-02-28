/*
///////////////////////////////////////////
//Question/Info

Sort an array recusrsively

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

void insertv(vi &v, int temp)
{

// after recursive calls from sortv(),
	// we may have one element in vi, and temp var
	// initially, after each return, our
	// vi, size would be more and would have more elements

	if (v.size() == 0 or v[v.size() - 1] <= temp)
	{
		v.pb(temp);
		return;
	}

//  say we have to insert our 2 in 1 5 6 ,
	// then we must first pop 5 and 6
	// which would be done below
	// and the moment
	// v[v.size()-1] <= temp, where temp is our '2'
	// and observe that everytime same temp '2' would
	// be passed and the numbers '5' and '6' would be popped,
	// then '2' would be inserted and now since our val, stored
	// the elements '5' , '6'recursively,
	//  they would be then inserted by v.pb(val)

	int val = v[v.size() - 1];
	v.pop_back();

	insertv(v, temp); // same vector is passed by reference and the same temp...
	v.pb(val);
	return;
}

void sortv(vi &v)
{

	if (v.size() == 1) {
		return;
	}
// storing last element
	int temp = v[v.size() - 1];
	v.pop_back();

	sortv(v);
	insertv(v, temp);

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

	vi v{5, 4, 2, 1, 3};

	sortv(v);

	forn(i, v.size()) {
		cout << v[i] << " ";
	}

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}