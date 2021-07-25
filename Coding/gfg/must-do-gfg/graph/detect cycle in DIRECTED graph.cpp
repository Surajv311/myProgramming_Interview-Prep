/*
///////////////////////////////////////////
//Question/Info

Detect cycle in a directed graph
Medium Accuracy: 30.19% Submissions: 97622 Points: 4
Given a Directed Graph with V vertices (Numbered from 0 to V-1) and E edges, check whether it contains any cycle or not.


IT HAS DFS APPROACH
AND BFS APPROACH (KAHN'S ALGO.)

Example 1:

Input:



Output: 1
Explanation: 3 -> 3 is a cycle

Example 2:

Input:


Output: 0
Explanation: no cycle in the graph

Your task:
You don’t need to read input or print anything. Your task is to complete the function isCyclic() which takes the integer V denoting the number of vertices and adjacency list as input parameters and returns a boolean value denoting if the given directed graph contains a cycle or not.


Expected Time Complexity: O(V + E)
Expected Auxiliary Space: O(V)


Constraints:
1 ≤ V, E ≤ 105

Company Tags
 Adobe Amazon BankBazaar Flipkart Goldman Sachs MakeMyTrip Microsoft Oracle Rockstand Samsung

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



	class Solution
	{
	public:

		bool dcycleDFS(vector<int> adj[], vector<int> &vis, vector<int> &dfsa, int node) {


			vis[node] = 1;
			dfsa[node] = 1;

			for (auto x : adj[node]) {

				if (!vis[x]) {
					if (dcycleDFS(adj, vis, dfsa, x)) {
						return true;
					}
				}

				else if (vis[x] and dfsa[x]) {
					// we check both visited array and the dfs array...
					// both should be true if there's a cycle in directed graph ...

					return true;
				}
			}
			// marking it back to zero if we reach the end....
			// the original visited array wouldn't be altered, but this would be...

			dfsa[node] = 0;
			return false;


		}


		/*
		TO USE BFS ALGO TO DETECT THE CYCLE, WE USE THE REVERSE LOGIC
		OF TOPOLOGICAL SORT ~ KAHN'S ALGORITHM. SINCE TOPOLOGICAL SORT EXISTS ONLY
		IN A DIRECTED ACYCLIC GRAPH, IF WE ARE UNABLE TO GENERATE A
		TOPOLOGICAL SORT THEN ITS A CYCLIC GRAPH...!
		*/



		//Function to detect cycle in a directed graph.
		bool isCyclic(int V, vector<int> adj[])
		{
			// code here

			vector<int> vis(V + 1);
			vector<int>dfsa(V + 1);

			for (int i = 0 ; i < V ; i++) {

				if (!vis[i]) {

					if (dcycleDFS(adj, vis, dfsa, i)) {
						return true;
					}
				}

			}

			return false;
		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}