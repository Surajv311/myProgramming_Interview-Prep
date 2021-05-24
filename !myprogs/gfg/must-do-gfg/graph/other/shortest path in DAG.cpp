/*
///////////////////////////////////////////
//Question/Info

Shortest Path in Directed Acyclic Graph (DAG)

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

void topo(vector<pair<int, int>> adj[], stack<int>&st, vector<int> &vis, int node ) {

	vis[node] = 1 ;

	for (auto x : adj[node]) {
		if (!vis[x.first]) {
			topo(adj, st , vis,  x.first);
		}
	}

	st.push(node);

}

int shortestPath(vector<pair<int, int>> adj[], int V, int src ) {

	/* since this is directed acyclic graph
	we first find the topological sort via bfs/dfs.
	This would help us in traversing our path in DAG.
	*/

// finding topo sort via dfs

	stack<int> st;
	vector<int> vis(V + 1, 0);

	for (int i = 0 ; i < V; i++) {
		if (!vis[i]) {
			topo(adj, st , vis , i);
		}
	}

// now we find the shortest path

	vector<int> dist(V + 1, INT_MAX);

	dist[src] = 0 ;

// now here instead of queue ~ BFS... since shortest path in DAG... so here we use stack

	while (!st.empty())
	{

		int node = st.top();
		st.pop();

		if (dist[node] != INT_MAX) {
			/*
			 it means we have reached the node
			 note that dist[src] == 0 , our source and the stack st.top(),
			 could be differnt... while traversing, everything would be found...
			 since shortest path in a DAG from given src node...
			*/

			for (auto x : adj[node]) {

				if (dist[node] + x.second < dist[x.first])
					dist[x.first] = dist[node] + x.second ;
			}

		}

	}


	for (int i = 0 ; i < V ; i++) {
		(dist[i] == INT_MAX) ? cout << "X" << " " : cout << dist[i] << " " ;
	}

	return 0;

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


// constructing the graph

	int V, E; cin >> V >> E;

	vector<pair<int, int>> adj[V];

	for (int i = 0 ; i < E ; i++)
	{
		int u , v , wt;
		cin >> u >> v >> wt;
		adj[u].push_back({v, wt});
	}

	shortestPath(adj, V, 0); // source node 0

	/*

	i/p

		6 7
		0 1 2
		0 4 1
		1 2 3
		2 3 6
		4 2 2
		4 5 4
		5 3 1

	*/


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}