/*
///////////////////////////////////////////
//Question/Info

Shortest Path in Undirected Graph with Unit Weights

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


void pathBFS(vector<int> adj[], int N, int src) {

	/*
	src is our starting node
	we find shortest distance from this node to all other nodes and then print the same
	*/

	int dist[N];

	for (int i = 0 ; i < N ; i++) dist[i] = INT_MAX;

	queue<int> q;

	q.push(src);
	dist[src] = 0;

	while (!q.empty()) {

		int node = q.front();
		q.pop();

		for (auto x : adj[node]) {

			if (dist[node] + 1 < dist[x]) {
				dist[x] = dist[node] + 1 ;
				q.push(x);
			}

		}

	}

// now printing the dist...

	forn(i, N) {tc(dist[i]);}



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




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}