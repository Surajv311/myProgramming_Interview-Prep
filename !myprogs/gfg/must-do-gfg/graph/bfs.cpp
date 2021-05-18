/*
///////////////////////////////////////////
//Question/Info

BFS of graph
Easy Accuracy: 42.71% Submissions: 92982 Points: 2
Given a directed graph. The task is to do Breadth First Traversal of this graph starting from 0.
Note: One can move from node u to node v only if there's an edge from u to v and find the BFS traversal of the graph starting from the 0th vertex, from left to right according to the graph. Also, you should only take nodes directly or indirectly connected from Node 0 in consideration.


Example 1:

Input:

Output: 0 1 2 3 4
Explanation:
0 is connected to 1 , 2 , 3.
2 is connected to 4.
so starting from 0, it will go to 1 then 2
then 3.After this 2 to 4, thus bfs will be
0 1 2 3 4.
Example 2:

Input:

Output: 0 1 2
Explanation:
0 is connected to 1 , 2.
so starting from 0, it will go to 1 then 2,
thus bfs will be 0 1 2 3 4.

Your task:
You don’t need to read input or print anything. Your task is to complete the function bfsOfGraph() which takes the integer V denoting the number of vertices and adjacency list as input parameters and returns  a list containing the BFS traversal of the graph starting from the 0th vertex from left to right.


Expected Time Complexity: O(V + E)
Expected Auxiliary Space: O(V)


Constraints:
1 ≤ V, E ≤ 104

Company Tags
 Adobe Amazon Flipkart Microsoft Ola Cabs Samsung SAP Labs

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
		//Function to return Breadth First Traversal of given graph.

		void ite(vector<int>adj[], bool flag[], vector<int>&v)
		{
			flag[0] = true;
			v.push_back(0);
			queue<int>q;
			q.push(0);
			while (!q.empty())
			{
				int temp = q.front();
				q.pop();
				for (auto i : adj[temp])
				{
					if (flag[i] == false)
					{
						q.push(i);
						v.push_back(i);
						flag[i] = true;
					}
				}
			}

			return;
		}


		vector<int>bfsOfGraph(int V, vector<int> adj[])
		{
			// Code here


			vector<int>v;
			if (V == 0)
				return v;
			bool flag[V];
			memset(flag, false, sizeof(flag));
			ite(adj, flag, v);

			return v;

		}
	};

// { Driver Code Starts.
	int main() {
		int tc;
		cin >> tc;
		while (tc--) {
			int V, E;
			cin >> V >> E;

			vector<int> adj[V];

			for (int i = 0; i < E; i++)
			{
				int u, v;
				cin >> u >> v;
				adj[u].push_back(v);
				// 		adj[v].push_back(u);
			}
			// string s1;
			// cin>>s1;
			Solution obj;
			vector<int>ans = obj.bfsOfGraph(V, adj);
			for (int i = 0; i < ans.size(); i++) {
				cout << ans[i] << " ";
			}
			cout << endl;
		}
		return 0;
	}  // } Driver Code Ends



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}