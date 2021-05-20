/*
///////////////////////////////////////////
//Question/Info

Topological sort
Medium Accuracy: 40.0% Submissions: 51713 Points: 4
Given a Directed Graph with V vertices and E edges, Find any Topological Sorting of that Graph.


Example 1:

Input:

Output:
1
Explanation:
The output 1 denotes that the order is
valid. So, if you have, implemented
your function correctly, then output
would be 1 for all test cases.
One possible Topological order for the
graph is 3, 2, 1, 0.
Example 2:

Input:


Output:
1


Your Task:
You don't need to read input or print anything. Your task is to complete the function topoSort()  which takes the integer V denoting the number of vertices and adjacency list as input parameters and returns an array consisting of a the vertices in Topological order. As there are multiple Topological orders possible, you may return any of them.


Expected Time Complexity: O(V + E).
Expected Auxiliary Space: O(V).


Constraints:
2 ≤ V ≤ 104
1 ≤ E ≤ (N*(N-1))/2

Company Tags
 Accolite Amazon Flipkart Microsoft Moonfrog Labs Morgan Stanley OYO Rooms Samsung Visa D-E-Shaw

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
		//Function to return list containing vertices in Topological order.


		bool tsDFS(vector<int> adj[], vector<int> &vis, stack<int> &st, int node) {

			vis[node] = 1;

			for (auto x : adj[node]) {

				if (!vis[x]) {
					tsDFS(adj, vis, st, x);
				}

			}

			// now if already visited then:
			/*
			observe that we would reach the deepest node,
			and now we would push it. since in stack if we
			push it and so on it would be at teh bottom and as the function
			calls are returned the starting node would be pushed last in
			stack hence it would be on top of stack.
			no need to reverse stack... as it already following this order...
			*/

			st.push(node);

		}


		/*
		NOTE THAT TOPOLOGICAL SORT
		CAN ONLY BE PERFORMED IN
		DIRECTED ACYCLIC GRAPHS
		*/

		/*
		NOW USING BFS:
		USING KAHN'S ALGO.
		*/

		/*
		INDEGREE OF A NODE IS THE NUMBER OF
		EDGES INTO/TOWARDS IT.
		*/

		vector<int> tsBFS(vector<int> adj[], int V) {

			vector<int> ind(V + 1, 0);


			// finding indegree....
			for (int i = 0 ; i < V ; i++) {

				for (auto x : adj[i]) {
					ind[x]++;
				}

			}

			queue<int> q;

			for (int i = 0 ; i < V; i++) {
				if (ind[i] == 0) {
					q.push(i);
				}
			}

			// now BFS

			vector<int> ans; // topo

			while (!q.empty()) {

				int node = q.front();
				q.pop();

				ans.push_back(node);

				for (auto x : adj[node])
				{
					ind[x]--;
					if (ind[x] == 0) {
						q.push(x);
					}
				}
			}

			return ans;
		}

		vector<int> topoSort(int V, vector<int> adj[])
		{
			// code here

			/* VIA DFS */

			/*
			vector<int> vis(V+1,0);
			stack<int> st;

			for(int i = 0 ; i < V ; i++){

			    if(!vis[i]){
			        tsDFS(adj,vis,st,i);
			    }
			}

			vector<int> ans;

			while(!st.empty())
			{
			    int x = st.top();
			    st.pop();
			    ans.push_back(x);
			}

			return ans;
			*/


			/*VIA BFS */

			vector<int> res = tsBFS(adj, V);

			return res;



		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}