/*
///////////////////////////////////////////
//Question/Info

The Stock Span Problem

The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate span of stock’s price for all n days.
The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}


author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

// #define int 		   long long int
#define sbit(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout << x << "\n";
#define ct2(x,y) 	   cout << x << " " << y << "\n";
#define tc(x) 		   cout << x << " ";
#define tc2(x,y) 	   cout << x << " " << y << " ";
#define forn(i,n) 	   for(int i = 0; i < (int)(n); ++i)
#define forx(i,x,n)    for(int i = x; i < (int)(n); ++i)
#define nfor(i,n)      for(int i = n-1; i >= 0; --i)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed << setprecision(y) << x
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
typedef long long int lli;

#pragma GCC optimize("Ofast")

void c_p_c()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

// its a basic implementation of ngl

vi ngl(int arr[], int n) {

// lets ngl

	stack<pii>ss;
	vi v;

	forn(i, n) {

		if (ss.size() == 0)
		{
			v.pb(-1);
		}

		else if (ss.size() > 0 and ss.top().second > arr[i]) {

			v.pb(ss.top().first);

		}

		else if (ss.size() > 0 and ss.top().second <= arr[i]) {

			while (ss.size() > 0 and ss.top().second <= arr[i]) {
				ss.pop();
			}

			if (ss.size() == 0) {
				v.pb(-1);
			}

			else {
				v.pb(ss.top().first);
			}

		}

		ss.push({i, arr[i]});

	}

	return v;
}

void sspan(int arr[], int n) {

	vi v = ngl(arr, n);

	forn(i, n) {
		tc(abs(i - v[i]))
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

	int arr[] = {100, 80, 60 , 70 , 60 , 75 , 85 };

	int n = sizeof arr / sizeof arr[0];

	sspan(arr, n);


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}