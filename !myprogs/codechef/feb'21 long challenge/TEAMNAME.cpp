/*
///////////////////////////////////////////
//Question/Info


///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define int 		   long long int
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
#define _IOS      	   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// typedef long long int lli;
typedef long double ld;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

void c_p_c()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int myfun(vector<char> is , vector<char> js) {

	set <char> s(all(is));

	int tmp = 0 ;

	for (auto kk : js) {


		if (s.find(kk) != s.end()) {


			tmp ++;

		}
	}

	return tmp;

}

int compute(map<string, vector<char>> &adj )
//  passing by address......
{

	int res = 0 ;
	for (auto it : adj) {
		for (auto jt : adj) {
			if (it.first != jt.first) {

				auto is = it.second  ;
				auto js = jt.second  ;
				int temp = myfun(is, js);
				res += (is.size() - temp) * (js.size() - temp);


			}
		}
	}

	return res;

}

int32_t main() {
///////////
//	c_p_c();
///////////
	_IOS
//////////

	// code

	int t ; cin >> t; while (t--) {

		// unordered_map<string, string> um;

		// int n ;
		// cin >> n ;

		// string arr[n];

		// forn(i, n) {
		// 	cin >> arr[i];
		// }

		// cout << arr[0];

		// forn(i, n) {
		// 	forn(j, n) {

		// 		string x = arr[i];
		// 		string y = arr[j];
		// 		um[x].pb(y);
		// 		// cout << x << y ;

		// 	}

		map<string, vector<char>> adj ;
		int n ;
		cin >> n ;

		string s ;

		forn(i, n) {
			cin >> s;

			// if (s.length() > 0) {
			// pushing the first letter ...
			// since given length of string : 2≤|si|≤20
			adj[s.substr(1)].pb(s[0]);

		}




		cout << compute(adj) << "\n";



	}






// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}