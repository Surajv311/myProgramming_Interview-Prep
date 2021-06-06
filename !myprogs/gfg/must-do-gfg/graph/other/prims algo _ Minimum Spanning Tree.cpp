/*
///////////////////////////////////////////
//Question/Info

Minimum Spanning Tree Prims Algo

if we can draw a tree from a graph consisting of
n nodes and n-1 edges such that every node is reachable to
every other node in that tree and the cost of the edge weights
is minimal... then its MST...

Its a spanning tree, hence there must not be any cycle... else
it would become a graph...

2 Algos to find MST:

-> Prims Algo
-> Kruskals Algo

HERE : PRIMS ALGO.

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

/* PRIMS AGLO */

void distance(int V, vector<int>parent, vector<pair<int, int>> adj[]) {

	int sum = 0;

	for (int i = 0 ; i < V ; i++) {
		for (auto x : adj[i]) {
			int node = x.first;
			int dist = x.second;

			if (parent[i] == node ) {
				sum += dist;
			}
		}
	}
	cout << endl;

	cout << sum << endl ;
}

void primsOptimal(vector<pair<int, int>> adj[], int V, int src) {

	vector<bool>mst(V, false);

	vector<int> dist(V, INT_MAX);

	vector<int> parent(V, -1);

	dist[src] = 0 ;

	parent[src] = -1;

// ONLY THING HERE IS WE USE A PRIORITY QUEUE FOR OPTIMALITY...
// min heap...
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

// we push {distance,node}

	pq.push({0, 0}); // source dist = 0 & source node = 0th node...

	for (int i = 0 ; i < V - 1; i++) {

		int minI = pq.top().second;

		pq.pop();
		// for (int j = 0 ; j < V; j++ ) {

		// 	if (mst[j] == false and dist[j] < minDist) {
		// 		minDist = dist[j] ; minI = j;
		// 	}

		// }


		mst[minI] = true;

		for (auto x : adj[minI]) {

			int node = x.first;
			int path = x.second;

			if (path < dist[node] and mst[node] == false) {
				dist[node] = path;
				parent[node] = minI;
				pq.push({path, node});
			}

		}

	}

	for (int k = 0; k < V ; k++) {
		cout << parent[k] << " ";
	}

	distance(V, parent, adj);

	return ;
}

void prims(vector<pair<int, int>> adj[], int V, int src) {

// declare 3 arrays for finding the minimum spanning tree

	vector<bool>mst(V, false); // would keep a track of node which is in our minimum spanning tree

	vector<int> dist(V, INT_MAX); // would have path distances

	vector<int> parent(V, -1); // to keep track of previous node, would be used to build our mst...

	// since we would start from source, its parent would remain -1 , dist would be 0, mst would be made true..in the loop...

	dist[src] = 0 ;

	parent[src] = -1;


	for (int i = 0 ; i < V - 1; i++) {
// since we need V-1 edges in MST...

		// first find minimum dist from the array , then do bfs from that node ....

// we find the dist. and the index as well..such that that node is not a part of MST...

		int minDist = INT_MAX; int minI;

		for (int j = 0 ; j < V; j++ ) {

			if (mst[j] == false and dist[j] < minDist) {
				minDist = dist[j] ; minI = j;
			}

		}

// we got our min dist index...so...


// you are always marking the min one true, so that if we have to change parent then it would be possible... for another mst path...
		mst[minI] = true; // it would be our src index... for the first time...

// now we have our minDist and minI... now...iterate...from minI...

		for (auto x : adj[minI]) {

			int node = x.first;
			int path = x.second;

			if (path < dist[node] and mst[node] == false) {
				// not visited... and...
				dist[node] = path;
// don't mark the node visited as of now...
				parent[node] = minI;

				/* so we basically marked the correct/min. dist in the dist[],
				after this we can again iterate and find the min dist., and
				if its minimum (which we marked in the previous iteration)
				then that distance's mst would be marked true and of course
				it would be included in the parent[]...
				*/
			}

		}

	}

	for (int k = 0; k < V ; k++) {
		// if (k == 0) {
		// 	cout << -1 << " "; // since source node has no parent...
		// }
		cout << parent[k] << " ";
	}

	distance(V, parent, adj);

	return;
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

	int V , E ; cin >> V >> E ;

	vector<pair<int, int>> adj[V];

	for (int i = 0 ; i < E ; i++) {

		int u , v , w ; cin >> u >> v >> w ;

		adj[u].push_back({v, w});

	}


	prims(adj, V, 0); // source node

	cout << endl;
	primsOptimal(adj, V, 0);


	/*
	i/p , o/p

		5 12
		0 1 2
		0 3 6
		1 0 2
		1 3 8
		1 4 5
		1 2 3
		2 1 3
		2 4 7
		3 0 6
		3 1 8
		4 1 5
		4 2 7

	*/



// brute force - o(n^2)
	// optimal - o(V+E) + log(n)// for priority queue
// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}