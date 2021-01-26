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
//typedef long long int lli;
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

struct Timer {
	// std::chrono::time_point<std::chrono::steady_clock> st, en;

	// double st, en, ttn;
	// double ttn;
	// auto st, en;
	chrono::time_point<chrono::high_resolution_clock> st, en ;
	chrono::duration<float> ttn;
	// std::chrono::high_resolution_clock::time_point


	Timer() {
		st = chrono::high_resolution_clock::now();
	}
	~Timer() {
		en = chrono::high_resolution_clock::now();
		// ttn = std::chrono::duration_cast<chrono::nanoseconds>(en - st).count();
		ttn = en - st;
		// ttn *= 1e-9;
		// 	cout << "Time: " << fixed << ttn << setprecision(9);
		// 	cout << "s" << endl;

		float ms = ttn.count() * 1000.0f;
		cout << "timer " << ms << "ms" << endl ;

	}
};


void fun()
{
	for (int i = 0; i < 10; i++)
	{	for (int i = 0; i < 100; i++)
		{	for (int i = 0; i < 100; i++)
			{	for (int i = 0; i < 100; i++)
				{
				}
			}
		}
	}
}

int32_t main() {

///////////
	c_p_c();
	Timer ti;
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	// forn(ii, 100) {
	// 	forn(k, 10) {
	// 		forn(i, 10) {
	// 			cout << "test" ;
	// 		}
	// 	}
	// }
	// //////////////////////////////////////////////////////////

	/*int a , b;
	a = 2 ;
	b = 5;

	// set<int> ss ;

	// for (int i = a ; i <= b ; i++) {
	// 	for (int j = i ; j <= b ; j++ ) {

	// 		int x = i + j ;
	// 		ss.insert(x);

	// 	}
	// }

	// ct(ss.size());

	ct( (2 * (abs(a - b))) + 1 ); */

// /////////////////////////////////////////////////////////////////
// cerr << "time: " << clock() << " ms" << '\n';



	auto start = chrono::high_resolution_clock::now();

	fun();

	auto end = chrono::high_resolution_clock::now();

	// Calculating total time taken by the program.
	double time_taken =
	    chrono::duration_cast<chrono::nanoseconds>(end - start).count();

	time_taken *= 1e-9;

	cout << "Time taken by program is : " << fixed
	     << time_taken << setprecision(9);
	cout << " sec" << endl;
	return 0;


}

