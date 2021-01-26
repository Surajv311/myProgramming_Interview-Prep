/*
///////////////////////////////////////////
//Question/Info

Cycle detection in undirected graph

To check: iterate via dfs... and
check that our visited node was not an immediate parent node...


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

template<typename T>

class Graph {
public:

	map<T, list<T>> adj;

	void add_edge(T n1, T n2, bool bidir = true) {
		adj[n1].pb(n2);
		if (bidir) {
			adj[n2].pb(n1);
		}
	}

	/*
	  The nodes we visit must be marked true in flag[]...
	  Focus on parent,current,successive nodes.
	  Since we are doing DFS, ensure that we move in
	  one direction, i.e our successive node
	  mustn't be parent node (we do that marking 'visited/true' nodes)
	  ... ~loop found...
	*/

	bool cyclehelp(int node, bool *flag, int dad) {
// we use recursion...

		flag[node] = true;
		for (auto x : adj[node]) {
			//  if x not visited
			if (!flag[x]) { // think about reaching last node in graph...
// x may lead to a node that leads to a cycle....
				bool cyclemila = cyclehelp(x, flag, node);
				if (cyclemila) {
					return true;
				}
			}

			else if (x != dad)
			{	// successor node shouldn't be a parent
				// if we reach here means cycle found
				return true;
			}
		}

		return false ;
	}


	bool cycle(int src, int V) {

		bool *flag = new bool[V];

		for (auto i : adj) {
			T node = i.first;
			flag[node] = false; // initially false.....
		}

		return cyclehelp(src, flag, -1); // dad node for our *first* node is -1
	}

	void display() {
		for (auto x : adj) {
			cout << x.first << "-> ";
			for (auto y : x.second) {
				cout << y << " ";
			}
			cout << endl;
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

	Graph<int> g;

	g.add_edge(1, 2);
	g.add_edge(2, 3);
	g.add_edge(3, 4);
	g.add_edge(4, 5);
	g.add_edge(5, 6);

	// g.add_edge(0, 1);
	// g.add_edge(1, 2);
	// g.add_edge(2, 3);
	// g.add_edge(3, 4);
	// g.add_edge(4, 0);

	if (g.cycle(1, 5)) // src, V
	{
		ct("Cycle present")
	}
	else {
		ct("No cycle")
	}

// g.display();
	// cerr << "time = " << clock() << " ms" << '\n';
	return 0;
}
