/*
///////////////////////////////////////////
//Question/Info

Floyd Warshall
Medium Accuracy: 31.6% Submissions: 7118 Points: 4
The problem is to find shortest distances between every pair of vertices in a given edge weighted directed Graph. The Graph is represented as adjancency matrix, and the matrix denotes the weight of the edegs (if it exists) else -1. Do it in-place.


Example 1:

Input: matrix = {{0,25},{-1,0}}
Output: {{0,25},{-1,0}}
Explanation: The shortest distance between
every pair is already given(if it exists).
Example 2:

Input: matrix = {{0,1,43},{1,0,6},{-1,-1,0}}
Output: {{0,1,7},{1,0,6},{-1,-1,0}}
Explanation: We can reach 3 from 1 as 1->2->3
and the cost will be 1+6=7 which is less than
43.


Your Task:
You don't need to read, return or print anything. Your task is to complete the function shortest_distance() which takes the matrix as input parameter and modify the distances for every pair in-place.


Expected Time Complexity: O(n3)
Expected Space Compelxity: O(1)


Constraints:
1 <= n <= 100

Company Tags
 Samsung

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
//	c_p_c();
///////////
	_IOS
//////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

#define INF (INT_MAX/2)

	class Solution {
	public:
		void shortest_distance(vector<vector<int>>&adj) {
			// Code here

			for (int i = 0; i < adj.size(); i++) {
				for (int j = 0; j < adj.size(); j++)
					if (adj[i][j] == -1)
						adj[i][j] = INF;
			}

			for (int k = 0; k < adj.size(); k++) {
				for (int i = 0; i < adj.size(); i++) {
					for (int j = 0; j < adj.size(); j++) {
						adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
					}
				}
			}
			for (int i = 0; i < adj.size(); i++) {
				for (int j = 0; j < adj.size(); j++)
					if (adj[i][j] == INF)
						adj[i][j] = -1;
			}
			return ;

		}
	};


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

