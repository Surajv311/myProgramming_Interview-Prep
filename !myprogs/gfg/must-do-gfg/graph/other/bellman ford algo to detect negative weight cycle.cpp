/*
///////////////////////////////////////////
//Question/Info

Bellman Ford Algorithm | Detect Negative Weight Cycle in Graphs

Dijkstra would fail if our weights are negative... it would
run into an infinite loop.

But Bellman ford would be relatively better in working...

In case of undirected graph:
- We convert it to directed graph.

In case of directed graph:
- If edges +ve / -ve = Algo work!
- If there is a negative cycle leading to infinite loop = Algo fails!
But the Algo would detect the negative cycle & let us know.


we do V-1 times relaxations... since longest path we can have is V-1...

Here relaxations is :
if (dist[it.u] + it.wt < dist[it.v]){
dist[it.v] = dist[it.u] + it.wt;
}

Like consider an example of a linear graph ... V nodes....
we keep on iterating...

Note at V-1 relaxations would get the shortest path from nodes.
We are doing the 'Vth' relaxation to find the negative cycle.
As if such a cycle exists then the distance would reduce...
looping....

At Vth relaxation if distance value changes/decreases
then it means that there is a negative cycle...

Time complexity : O(N-1) * O(e)  (worse than dijkstra)

Space : O(n)

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

struct Node {
	int u;
	int v;
	int wt;
	Node(int u, int v, int wt) {
		this->u = u;
		(*this).v = v;
		(*this).wt = wt;
	}
};

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
	vector<Node> edges;
	for (int i = 0; i < E; i++) {
		int u, v, wt;
		cin >> u >> v >> wt;
		edges.push_back(Node(u, v, wt));
	}

	vector<int> dist(V, INT_MAX / 2);
	// initializing with a large value

// let our source node be 0 ...
	int src  = 0 ;

	dist[src] = 0;

	for (int i = 1; i <= V - 1; i++) { // iterating V-1 times
		for (auto x : edges) {
			if (dist[x.u] + x.wt < dist[x.v]) {
				dist[x.v] = dist[x.u] + x.wt;
			}
		}
	}

// Vth iteration to find negative cycles

	bool flag = false;
	for (auto x : edges) {
		if (dist[x.u] + x.wt < dist[x.v]) {
			cout << "Negative Cycle";
			flag = true;
			break;
		}
	}

	if (!flag) {
		for (int i = 0; i < V; i++) {
			cout << i << " " << dist[i] << endl;
		}
	}

	/*

	6 7
	3 2 6
	5 3 1
	0 1 5
	1 5 -3
	1 2 -2
	3 4 -2
	2 4 3

	*/




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}