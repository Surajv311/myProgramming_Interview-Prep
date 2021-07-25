/*
///////////////////////////////////////////
//Question/Info

Given a binary matrix, find the maximum size rectangle binary-sub-matrix with all 1’s.


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

vi nsl(int arr[], int n) {

	stack<pii>ss;
	vi v;

	forn(i, n) {

		if (ss.size() == 0)
		{
			v.pb(-1);
		}

		else if (ss.size() > 0 and ss.top().second < arr[i]) {

			v.pb(ss.top().first);

		}

		else if (ss.size() > 0 and ss.top().second >= arr[i]) {

			while (ss.size() > 0 and ss.top().second >= arr[i]) {
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


vi nsr(int arr[], int n) {

	stack<pii>ss;
	vi v;

	nfor(i, n) {

		if (ss.size() == 0)
		{
			v.pb(n);
		}

		else if (ss.size() > 0 and ss.top().second < arr[i]) {
			v.pb(ss.top().first);
		}

		else if (ss.size() > 0 and ss.top().second >= arr[i]) {

			while (ss.size() > 0 and ss.top().second >= arr[i]) {
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

	reverse(all(v));

	return v;
}

int lrah(int arr[], int n) {

	vi v1 = nsl(arr, n);
	vi v2 = nsr(arr, n);

	int w[n];
	forn(i, n) {
		w[i] = abs(v1[i] - v2[i]) - 1;
	}

	int ans[n];
	forn(i, n) {

		ans[i] = arr[i] * w[i];

	}

	int x = *max_element(ans, ans + n);

	return (x);
}


int marm(int arr[][4], int n, int m) {

	vi v ;

	for (int j = 0; j < m; j++) {
		v.pb(arr[0][j]);
	}

	int a[m];

	forn(i, m) {
		a[i] = v[i];
	} // putting vlues in array just to pass it...

	int ans = lrah(a, m);
	for (int i = 1; i < n; i++) {
		forn(j, m) {

			if (arr[i][j] == 0) {
				v[j] = 0 ;
			}

			else {
				v[j] += arr[i][j];
			}

		}

		forn(i, m) {
			a[i] = v[i];
		} // putting vlues in array just to pass it...

		ans = max(ans, lrah(a, m));

	}

	return ans;
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

	int arr[4][4] = {
		{0, 1, 1, 0},

		{1, 1, 1, 1},

		{1, 1, 1, 1},

		{1, 1, 0, 0},

	};

	int n = 4; int m = 4;

	cout << marm(arr, n, m);


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}