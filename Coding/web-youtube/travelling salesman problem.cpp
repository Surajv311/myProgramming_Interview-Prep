/*
///////////////////////////////////////////
//Question/Info

Travelling Salesman problem

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
// consider the adjacency matrix

int adj[10][10] = {
//	   A B C D
//  A
//  B
//  C
//  D

	{0 , 20 , 42, 25},
	{20 , 0 , 30 , 34},
	{42, 30 , 0 , 10},
	{25, 34 , 10 , 0}
};

int dp[16][4]; // [mask][pos]
int n = 4 ; // since total elements = 4^2
int visited = (1 << n) - 1 ; // ~1111
// every bit denotes a position : A,B,C,D

int tsp(int mask , int pos) {

	//  base case
	if (mask == visited) { // i.e ~...1111
		return adj[pos][0];
		// adj value from last reached node to start node
	}

// overlapping subproblem...
	if (dp[mask][pos] != -1) {
		// means node is already visited...
		return dp[mask][pos];
	}

	int ans = INT_MAX;
	for (auto city = 0 ; city < n; city++) {

		if ((mask & (1 << city)) == 0) {
			// means it is unvisited ...
			// mask leads to combination of of cities...
			// pos gives us the city we are in ...
			int anss = adj[pos][city] + tsp(mask | (1 << city), city);
			ans = min(ans, anss);
		}
	}

	return dp[mask][pos] = ans;
}


int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	for (int i = 0 ; i < (1 << n); i++) {
		for (int j = 0; j < n; j++) {
			dp[i][j] = -1;
		}
	}

	ct(tsp(1, 0));

	/* Usual complexity : (n-1)!, after using dp : ((2^n)*n)...*/
	// hamiltonian path

	return 0;
}

