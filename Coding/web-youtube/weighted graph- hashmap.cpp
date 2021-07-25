/*
///////////////////////////////////////////
//Question/Info

Adj List weighted graph - using hashmap

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

class Graph {

	map<string, list<pair<string, int>>> adj; // char and weights

public:

	void addEdge(string x, string y, int W, bool bidir) {

		adj[x].pb(mp(y, W));
		if (bidir) {
			adj[y].pb(mp(x, W));
		}
	}

	void print() {
		for (auto i : adj) {
			cout << "Node " << i.first << " = ";
			list<pair<string, int>> lp = i.second;
			for (auto j : lp) {
				string a = j.first;
				int b = j.second ;
				cout << a << "-" << b << ",";
			}
			ct("");
		}
	}
};

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/
	Graph g;
	g.addEdge("A", "B", 10, true);
	g.addEdge("C", "D", 20, true);
	g.addEdge("D", "A", 30, true);
	g.addEdge("C", "B", 40, true);

	g.print();
	ct("");

	return 0;
}




