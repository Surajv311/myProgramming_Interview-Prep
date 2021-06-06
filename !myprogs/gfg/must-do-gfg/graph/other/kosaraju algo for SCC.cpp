/*
///////////////////////////////////////////
//Question/Info

Kosaraju's Algorithm for Strongly Connected Components (SCC)

A STRONGLY CONNECTED COMPONENT IS:
A graph is said to be strongly connected if
every vertex is reachable from every other vertex.

(SINCE A COMPONENT IS A PART OF GRAPH)

The algo is:

-> Approach 1 is you start iterating graph via dfs from
backwords (using topo sort order) in the directed graph.

-> Approach 2 is you find the toposort of the graph
and then transpose your graph.
Now iterate backwords using the toposort order in
your transpose graph and find the components.


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

void topo(int node, stack<int> &st, vector<int> &vis, vector<int> adj[]) {
	vis[node] = 1;
	for (auto x : adj[node]) {
		if (!vis[x]) {
			topo(x, st, vis, adj);
		}
	}

	st.push(node);
}
void dfs(int node, vector<int> &vis, vector<int> tra[]) {
	cout << node << " ";
	vis[node] = 1;
	for (auto x : tra[node]) {
		if (!vis[x]) {
			dfs(x, vis, tra);
		}
	}
}


int32_t main() {
///////////
	//c_p_c();
///////////
	_IOS
//////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	int V, E;
	cin >> V >> E;
	vector<int> adj[V];
	for (int i = 0; i < E; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
	}

	stack<int> st;
	vector<int> vis(V, 0);
	for (int i = 0; i < V; i++) {
		if (!vis[i]) {
			topo(i, st, vis, adj);
		}
	}

	vector<int> tra[V]; // transpose matrix of adj

	for (int i = 0; i < V; i++) {
		vis[i] = 0;
		for (auto x : adj[i]) {
			tra[x].push_back(i);
		}
	}

	while (!st.empty()) {
		int node = st.top();
		st.pop();
		if (!vis[node]) {
			cout << "SCC: "; // strongly connected component
			dfs(node, vis, tra);
			cout << endl;
		}
	}

	/*
	5 5
	0 1
	1 2
	2 0
	1 3
	3 4
	*/



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}