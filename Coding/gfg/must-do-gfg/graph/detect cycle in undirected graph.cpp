/*
///////////////////////////////////////////
//Question/Info

Detect cycle in an undirected graph
Medium Accuracy: 35.66% Submissions: 78718 Points: 4
Given an undirected graph with V vertices and E edges, check whether it contains any cycle or not.

Example 1:

Input:

Output: 1
Explanation: 1->2->3->4->1 is a cycle.
Example 2:

Input:

Output: 0
Explanation: No cycle in the graph.


Your Task:
You don't need to read or print anything. Your task is to complete the function isCycle() which takes V denoting the number of vertices and adjacency list as input parameters and returns a boolean value denoting if the undirected graph contains any cycle or not.


Expected Time Complexity: O(V + E)
Expected Space Complexity: O(V)


Constraints:
1 ≤ V, E ≤ 105

Company Tags
 Adobe Amazon Flipkart MakeMyTrip Oracle Samsung Microsoft

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

		bool checkDFS(vector<int> &vis, vector<int> adj[], int node, int parent) {


			vis[node] = 1;

			for (auto x : adj[node]) {

				if (!vis[x]) {

					if (checkDFS(vis, adj, x, node)) {
						return true;
					}
				}

				// any node other than previous node if visited then there is a cycle.
				// parent has previous node from previous recursion

				else if (x != parent) {
					// if x!=parent && vis[x]==true...
					return true;
				}


			}

			return false;
		}


		bool checkBFS(vector<int> &vis, vector<int> adj[], int node, int parent) {

			queue<pair<int, int>>q;
			q.push({node, parent});
			vis[node] = 1 ;

			while (!q.empty()) {

				int node = q.front().first;
				int parent = q.front().second;

				q.pop();

				for (auto x : adj[node]) {

					if (!vis[x]) {
						q.push({x, node});
						vis[x] = 1 ;
					}

					else if (x != parent) {
						// if x!=parent && vis[x]==true...
						return true;
					}
				}
			}

			return false;
		}


		//Function to detect cycle in an undirected graph.
		bool isCycle(int V, vector<int>adj[])
		{
			// Code here

			vector<int> vis(V + 1, 0);

			for (int i = 0 ; i < V ; i++) {

				if (!vis[i]) {

					/*USING DFS*/

					// if(checkDFS(vis,adj,i,-1)){
					//     return true;
					// }

					/*USING BFS*/

					if (checkBFS(vis, adj, i, -1)) {
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