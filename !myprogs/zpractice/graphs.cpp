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

template<typename T>

class Graph {

	map<T , list<T>> adj;
public:

	void add_edge(T n1, T n2, bool bidir = true) {

		adj[n1].pb(n2);
		if (bidir) {
			adj[n2].pb(n1);
		}

	}

	void display() {

		for (auto i : adj) {

			cout  << i.first << "-> " ;

			for (auto j : i.second) {
// auto k = j.first;
// auto l = j.second;

				cout << j << " ";

			}
			ct("")

		}

	}


	void bfs(T src) {

		map<T, bool> flag;



		for (auto i : adj) {
			flag[i.first] = false;
		}
		flag[src] = true;
		queue<T> q;
		q.push(src);
		while (!q.empty()) {

			T node = q.front();
			q.pop();
			cout << node << " " ;
			for (auto i : adj[node]) {

				if (!flag[i]) {
					q.push(i);
					flag[i] = true ;
				}
			}
		}

	}


	void dfsr(map<T, bool> &flag, T src) {

		flag[src] = true ;
		cout << src << " ";

		for (auto i : adj[src]) {

			if (!flag[i])
			{
				flag[i] = true;
				dfsr(flag, i);
			}
		}



	}

	void dfs(T src) {

		map<T, bool> flag ;

		for (auto i : adj) {
			flag[i.first] = false ;
		}

		dfsr(flag, src);


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

	Graph<int> g ;

	g.add_edge(1, 2);
	g.add_edge(3, 2);
	g.add_edge(4, 5);
	g.add_edge(3, 9);
	g.add_edge(4, 1);
	g.add_edge(7, 4);
	g.add_edge(9, 8);
	g.add_edge(8, 5);
	g.add_edge(2, 6);
	g.add_edge(5, 6);

	g.display();
	ct("")

	g.bfs(1);
	ct("")

	g.dfs(1);

	// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}
