/*
///////////////////////////////////////////
//Question/Info

Kruskal's Algorithm to find Minimum spanning tree...

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

/*
In this algo to find MST,
we implement disjoint sets

-> If two nodes are in the same component then we
do not join them, else we would join them...

Complexity: o(mlogm) time ... and space ~ o(m)

*/

struct Node
{
	int u, v, wt;

	Node(int a, int b, int c) {

		u = a;
		v = b;
		wt = c;
	}

};

bool compare(Node A, Node B) {

	return A.wt < B.wt;
}

// lets path compress

int findPar(int node, vector<int> &parent) {

	if (node == parent[node]) {
		return node;
	}

	return parent[node] = findPar(parent[node], parent);

}

void unionSet(int u, int v , vector<int> parent, vector<int>ranks) {

	u = findPar(u, parent);
	v = findPar(v, parent);

	if (ranks[u] < ranks[v]) {
		parent[u] = v ;
	}
	else if (ranks[u] > ranks[v]) {
		parent[v] = u;
	}
	else {
		parent[v] = u;
		ranks[u]++;
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

	vector<Node> edge; // since struct is a user defined data type...

	int E, V; cin >> V >> E;

	for (int i = 0 ; i < E ; i++) {
// constructing...

		int u, v, wt;
		cin >> u >> v >> wt;
		edge.push_back(Node(u, v, wt));

	}

	sort(edge.begin(), edge.end(), compare);

// now comes using disjoint set...

	vector<int> parent(V);
	for (int i = 0 ; i < V; i++) {
		parent[i] = i;
	}

	vector<int>ranks(V, 0);

	int ans = 0 ;

	vector<pair<int, int>> mst;

	for (auto x : edge) {

		if (findPar(x.u, parent) != findPar(x.v, parent)) {

			ans += x.wt; // ans would be incremented...

// would be added in the mst
			mst.push_back({x.u, x.v});

// making union set...
			unionSet(x.u, x.v, parent, ranks);

		}

	}

	cout << ans << " " << endl;

	for (auto x : mst) {
		cout << x.first << " " << x.second << " " << endl;

	}

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}