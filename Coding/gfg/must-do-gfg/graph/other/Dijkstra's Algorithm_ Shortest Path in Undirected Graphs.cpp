/*
///////////////////////////////////////////
//Question/Info

Dijkstra's Algorithm | Shortest Path in Undirected Graphs

author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define _IOS   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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

void dijkstra(vector<pair<int, int>> adj[], int src, int V) {

	vector<int> dist(V + 1, INT_MAX);

	priority_queue< pair<int, int> , vector<pair<int, int>> , greater<pair<int, int> > > pq; // min heap ...
// can also use set pair...

	dist[src] = 0 ;

	pq.push({0, src}); // would sort based on distance & node...

	while (!pq.empty()) {

		int node = pq.top().second;

		int path = pq.top().first ;

		pq.pop();
// can also use iterator...
// vector<pair<int,int>> :: iterator it;

		for (auto x : adj[node]) {

			int xpath = x.second; // since in adj -> {node, distance} , whereas in pq -> {distance,node}
			int xnode = x.first;

			if (path + xpath < dist[xnode])
			{
				dist[xnode] = path + xpath;
				pq.push({dist[xnode] , xnode});
			}

		}

	}

// display

	for (int i = 0 ; i < V ; i++) {
		cout << dist[i] << " ";
	}

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

	int E, V; cin >> V >> E ;

	vector<pair<int, int>> adj[V];

	for (int i = 0 ; i < E ; i++) {

		int u, v, wt;
		cin >> u >> v >> wt;

		adj[u].push_back({v, wt}); // could also use make_pair()...

	}

	dijkstra(adj, 0, V) ; // source is 0;



	/*
	i/p, o/p

		5 12
		0 1 2
		0 3 1
		1 0 2
		1 4 5
		1 2 4
		2 1 4
		2 3 3
		2 4 1
		3 0 1
		3 2 3
		4 1 5
		4 2 1

	*/


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}