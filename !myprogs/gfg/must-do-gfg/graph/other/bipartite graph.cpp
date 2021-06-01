/*
///////////////////////////////////////////
//Question/Info


// even a single node can be called single component of a graph...



	//BIPARTITE GRAPH

	//ITS A GRAPH THAT CAN BE COLORED USING EXACTLY TWO COLORS
	//AND NONE OF THE TWO ADJACENT NODES HAVE SAME COLOR...

	//if a graph has odd length cycle then it is not a bipartite

	//if a graph doesn't have an odd length cycle then it is
	//bipartite, it doesn't have to be of even length



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
/////////////////////////////////////

bool bipartiteDfs(int node, vector<int> adj[], int color[]) {
	for (auto it : adj[node]) {
		if (color[it] == -1) {
			color[it] = 1 - color[node];
			if (!bipartiteDfs(it, adj, color)) {
				return false;
			}
		} else if (color[it] == color[node]) return false;
	}
	return true;
}


bool bipartiteBfs(int src, vector<int> adj[], int color[]) {
	queue<int>q;
	q.push(src);
	color[src] = 1;
	while (!q.empty()) {
		int node = q.front();
		q.pop();

		for (auto it : adj[node]) {
			if (color[it] == -1) {
				color[it] = 1 - color[node];
				q.push(it);
			} else if (color[it] == color[node]) {
				return false;
			}
		}
	}
	return true;
}

bool checkBipartite(vector<int> adj[], int n) {

	int color[n];
	memset(color, -1, sizeof color); // could use vector also...
	for (int i = 0; i < n; i++) {
		if (color[i] == -1) {

			/*
			// BFS APPROACH

			if(!bipartiteBfs(i, adj, color)) {
			    return false;
			}
			*/

			// DFS APPROACH

			if (!bipartiteDfs(i, adj, color)) {

				/*
				 if any of your component is not bipartite
				 then your entire graph is not bipartite.

				 hence rather than returning true ...
				we may have less traversals... so returning false...
				*/
				return false;
			}

		}
	}
	return true;
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


	int n, m;
	cin >> n >> m;
	vector<int> adj[n];
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	if (checkBipartite(adj, n)) {
		cout << "yes";
	} else {
		cout << "No";
	}

	/*

	// bipartite graph example

	8 7
	0 1
	1 2
	2 3
	3 4
	4 6
	6 7
	1 7
	4 5

	*/

	/*

	// not bipartite example

	7 7
	0 1
	1 2
	2 3
	3 4
	4 6
	6 1
	4 5

	*/


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}