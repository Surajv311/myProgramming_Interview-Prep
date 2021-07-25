/*
///////////////////////////////////////////
//Question/Info

Adj List graph

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
	int V;
	list<int> *l; // pointer initialising or else won't identify during run time

public:

	Graph(int V) {
		this->V = V; // this pointer
		l = new list<int>[V]; // list of size V
	}

	void addEdge(int x, int y) {
		l[x].pb(y);
		l[y].pb(x);
	}

	void print() {
		forn(i, V) {
			cout << "Vertex " << i << "->";
			for (int n : l[i]) {
				cout << n << ",";
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
	Graph g1(5);
	g1.addEdge(1, 2);
	g1.addEdge(2, 3);
	g1.addEdge(1, 4);
	g1.addEdge(2, 4);
	g1.addEdge(4, 3);

	g1.print();
	ct("");

	return 0;
}




