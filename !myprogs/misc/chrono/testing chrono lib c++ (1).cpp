/*
///////////////////////////////////////////
//Question/Info


///////////////////////////////////////////
*/

#include <bits/stdc++.h>
#include <chrono>
#include <thread>
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
// struct Timer {

// 	chrono::time_point<chrono::steady_clock> start, end;
// 	chrono::duration<float> duration;

// 	Timer() {
// 		start = std::chrono::high_resolution_clock::now();
// 	}

// 	~Timer() {
// 		end = std::chrono::high_resolution_clock::now();
// 		duration = end - start;

// 		float ms = duration.count * 1000.0f;

// 		cout << "time is: " << ms << " " << endl ;
// 	}

// };


// struct Timer {

// 	chrono::time_point<chrono::high_resolution_clock> start, end, duration;
// 	// chrono::duration<float> duration;

// 	Timer() {
// 		auto start = std::chrono::high_resolution_clock::now();
// 	}

// 	~Timer() {
// 		auto end = std::chrono::high_resolution_clock::now();
// 		// auto duration = end - start;
// // chrono::duration_cast<chrono::nanoseconds>(end - start).count();

// 		// auto ms = duration.count() * 1000.0f;

// 		// cout << "time is: " << ms << " " << endl ;


// 		double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
// 		time_taken *= 1e-9;

// 		cout << "Time taken by program is : " << fixed
// 		     << time_taken << setprecision(9);
// 		cout << " sec" << endl;
// 	}

// };


struct Timer {

	chrono::time_point<chrono::high_resolution_clock> start, end;
	// double start , end;
	// chrono::duration<float> duration;
	// chrono::high_resolution_clock::time_point start, end;
	// double start;
	Timer() {
		auto start = chrono::high_resolution_clock::now();
	}

	~Timer() {
		auto end = chrono::high_resolution_clock::now();
		// auto duration = end - start;
// chrono::duration_cast<chrono::nanoseconds>(end - start).count();

		// auto ms = duration.count() * 1000.0f;

		// cout << "time is: " << ms << " " << endl ;


		double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
		time_taken *= 1e-9;

		cout << "Time taken by program is : " << fixed
		     << time_taken << setprecision(9);
		cout << " sec" << endl;
	}

};

// auto start = chrono::high_resolution_clock::now();


//     auto end = chrono::high_resolution_clock::now();

//     // Calculating total time taken by the program.
//     double time_taken =
//       chrono::duration_cast<chrono::nanoseconds>(end - start).count();

//     time_taken *= 1e-9;

//     cout << "Time taken by program is : " << fixed
//          << time_taken << setprecision(9);
//     cout << " sec" << endl;


int fun1() {
	int a , b;
	a = 2 ;
	b = 5;
	ct( (2 * (abs(a - b))) + 1 );
	for (int i = 0; i < 10; i++)
	{
	}
	return 0;
}

int fun2() {
	set<int> ss ;
	int a , b;
	a = 2 ;
	b = 5;
	for (int i = a ; i <= b ; i++) {
		for (int j = i ; j <= b ; j++ ) {

			int x = i + j ;
			ss.insert(x);

		}
	}

	ct(ss.size());
	return 0;
}
int32_t main() {

///////////
	c_p_c();
///////////

	// code

	// Timer tx;
	/*
	int t ; cin >> t; while(t--){}
	*/

	auto s = chrono::high_resolution_clock::now();



	fun1();
	fun2();

	auto e = chrono::high_resolution_clock::now();


	double time_taken =
	    chrono::duration_cast<chrono::nanoseconds>(e - s).count();

	time_taken *= 1e-9;

	cout << "Time taken by program is : " << fixed
	     << time_taken << setprecision(9);
	cout << " sec" << endl;

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}