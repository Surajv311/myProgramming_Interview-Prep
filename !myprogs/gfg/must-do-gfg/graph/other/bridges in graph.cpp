/*
///////////////////////////////////////////
//Question/Info

Bridges in Graph | Cut Edge

An edge in an undirected connected graph is a
bridge iff removing it disconnects the graph.
For a disconnected undirected graph, definition
is similar, a bridge is an edge removing which
increases number of disconnected components.
Like Articulation Points, bridges represent
vulnerabilities in a connected network and
are useful for designing reliable networks.
For example, in a wired computer network,
an articulation point indicates the critical
computers and a bridge indicates the critical
wires or connections.


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

void bridgeDFS(vector<int> &vis, vector<int> adj[], int src, int parent, vector<int> &tis, vector<int> &low, int &countN) {


	vis[src] = 1;

	tis[src] = low[src] = countN++;

	for (auto x : adj[src]) {

		if (x == parent) continue;

		if (!vis[x])
		{

			bridgeDFS(vis, adj, x, src, tis, low, countN);

			// node code when it backtracks....
			low[src] = min(low[src], low[x]);

// to check if it is forming a bridge
			if (tis[src] < low[x])
			{
				/*
				this condition when the for
				loop would be running and then relating the
				current node and the visited node...

				don't confuse with : 'if (x == parent) continue;'...

				here we are backtracking and checking... not for loop
				iteration...

				/////////////////////////

				if we would have not found a bridge means it
				could be a loop, so the numbering of our current
				node would be greater than parent node, if it is
				less than parent node, then it means we have found
				a path or connection that leads us to a node that
				is before parent node, hence even if we remove our
				current node and parent node connection then also it
				would be connected... since like we can notice that
				there could be a connection above or
				prior to our parent node......

				Just don't confuse with the above code:
				'if (x == parent) continue;' ,

				what we are doing is checking after backtracking... from current and visited node...
				// note that we are passing by reference...
				*/

				cout << x << "->" << src << "\n";

			}

		}
		else {
			// if it is visited ...
			low[src] = min(low[src], low[x]);

		}

	}

	return;
}


int32_t main() {
///////////
	// c_p_c();
///////////
	_IOS
//////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/


	int E , V ; cin >> E >> V ;

	vector<int> adj[V];

	for (int i = 0 ; i < E; i++) {

		int u , v ; cin >> u >> v ;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<int> vis(V, 0);
// have a low array & a time of insertion array

	vector<int>tis(V); // time of insertion
	vector<int>low(V);

	int countN = 0;

	for (int i = 0 ; i < V ; i++) {


		if (!vis[i]) {
			bridgeDFS(vis, adj, i, -1, tis, low, countN);
		}

	}


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

/*

i/p

14 12

0 1
0 3
1 2
3 2
3 4
4 5
5 6
5 8
6 7
8 7
7 9
9 10
10 11
11 9

o/p

9->7
5->4
4->3

*/


/*

FOR 1 BASED INDEXING....

// test code main() & i/p , o/p ...

{
	int E , V ; cin >> E >> V ;
	vector<int> adj[V + 1];

	for (int i = 0 ; i < E; i++) {
		int u , v ; cin >> u >> v ;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<int> vis(V + 1, 0);
	vector<int>tis(V + 1);
	vector<int>low(V + 1);
	int countN = 0;
	for (int i = 1 ; i < V + 1 ; i++) {
	if (!vis[i]) {
			bridgeDFS(vis, adj, i, -1, tis, low, countN);
		}
	}
}

/////////

14 12

1 2
1 4
2 3
4 3
4 5
5 6
6 7
6 9
7 8
9 8
8 10
10 11
11 12
12 10

o/p:
10->8
6->5
5->4

*/
