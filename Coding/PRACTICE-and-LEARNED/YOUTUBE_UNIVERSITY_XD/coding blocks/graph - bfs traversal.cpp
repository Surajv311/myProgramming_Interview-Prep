/*
///////////////////////////////////////////
//Question/Info


Graph traversal - BFS


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
// class can also be used rather than typename
class Graph {
public:

	map<T, list<T>> adj;

	void add_edge(T n1, T n2, bool bidir = true) {
		adj[n1].pb(n2);
		if (bidir) {
			adj[n2].pb(n1);
		}
	}


	void bfs(T src) {
//  initial node passed from where bfs traversal must start
		map <T, bool> flag;

		queue<T> q;

		q.push(src);

		flag[src] = true;

		while (!q.empty()) {
			T node = q.front();
			q.pop();
			cout << node << " ";
			for (auto i : adj[node]) {
				if (!flag[i]) {
					q.push(i);
					flag[i] = true ;
				}
			}
		}

	}

	void display() {
		for (auto x : adj) {
			cout << x.first << "-> ";
			for (T y : x.second) {
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

	Graph<int> g; // <int> added because template<> defined before class... so to create the class object, type is also put(syntax)...

	g.add_edge(1, 2);
	g.add_edge(2, 3);
	g.add_edge(1, 4);
	g.add_edge(2, 4);
	g.add_edge(4, 3);

	g.bfs(1);
	// g.display();

	return 0;
}

