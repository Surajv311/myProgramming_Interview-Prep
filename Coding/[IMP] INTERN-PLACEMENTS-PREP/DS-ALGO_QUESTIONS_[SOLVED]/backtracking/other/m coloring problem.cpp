/*
//////////////////////////////////////////////////////
//Question/Info

M-Coloring Problem
Medium Accuracy: 47.46% Submissions: 13581 Points: 4
Given an undirected graph and an integer M. The task is to determine if the graph can be colored with at most M colors such that no two adjacent vertices of the graph are colored with the same color. Here coloring of a graph means the assignment of colors to all vertices. Print 1 if it is possible to colour vertices and 0 otherwise.

Example 1:

Input:
N = 4
M = 3
E = 5
Edges[] = {(1,2),(2,3),(3,4),(4,1),(1,3)}
Output: 1
Explanation: It is possible to colour the
given graph using 3 colours.
Example 2:

Input:
N = 3
M = 2
E = 3
Edges[] = {(1,2),(2,3),(1,3)}
Output: 0
Your Task:
Your task is to complete the function graphColoring() which takes the 2d-array graph[], the number of colours and the number of nodes as inputs and returns true if answer exists otherwise false. 1 is printed if the returned value is true, 0 otherwise. The printing is done by the driver's code.
Note: In the given 2d-array graph[], if there is an edge between vertex X and vertex Y graph[] will contain 1 at graph[X-1][Y-1], else 0. In 2d-array graph[ ], nodes are 0-based indexed, i.e. from 0 to N-1.

Expected Time Complexity: O(MN).
Expected Auxiliary Space: O(N).

Constraints:
1 <= N <= 20
1 <= E <= (N*(N-1))/2
1 <= M <= N

Note: The given inputs are 1-base indexed but you have to consider the graph given in the adjacency matrix/list as 0-base indexed.

Company Tags
 Amazon

author: srj_v
//////////////////////////////////////////////////////
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

//////////////////////////////////////////////////////


int32_t main() {
///////////
//	c_p_c();
///////////
	_IOS
//////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/



//Function to determine if graph can be coloured with at most M colours such
//that no two adjacent vertices of graph are coloured with same colour.

	bool isSafe(bool graph[][101], vector<int> clr, int m, int src, int V) {

		// note that edge in a graph is marked as 1... if no edge then 0...

		for (int i = 0; i < V; i++) { // this is for vertices...
			if (i != src and graph[i][src] == 1 and clr[i] == m) return false;
		}
		return true;
	}

	bool gClr(bool graph[][101], vector<int> clr, int m, int src, int V) {

		if (src == V) return true;

		// numbering starts from 1
		for (int i = 1; i <= m ; i++) {
			// for color...
			if (isSafe(graph, clr, i, src, V)) {

				clr[src] = i;

				if (gClr(graph, clr, m, src + 1, V)) return true;

				clr[src] = 0; // backtrack

			}

		}

		return false;
	}


	bool graphColoring(bool graph[101][101], int m, int V)
	{
		// your code here

		vector<int> clr(V + 1, 0);

		int src = 0;

		return gClr(graph, clr, m, src, V);
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////