/*
//////////////////////////////////////////////////////
//Question/Info

Rotten Oranges
Medium Accuracy: 50.57% Submissions: 15993 Points: 4
Given a grid of dimension nxm where each cell in the grid can have values 0, 1 or 2 which has the following meaning:
0 : Empty cell
1 : Cells have fresh oranges
2 : Cells have rotten oranges

We have to determine what is the minimum time required to rot all oranges. A rotten orange at index [i,j] can rot other fresh orange at indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time.

Example 1:

Input: grid = {{0,1,2},{0,1,2},{2,1,1}}
Output: 1
Explanation: The grid is-
0 1 2
0 1 2
2 1 1
Oranges at positions (0,2), (1,2), (2,0)
will rot oranges at (0,1), (1,1), (2,2) and
(2,1) in unit time.
Example 2:

Input: grid = {{2,2,0,1}}
Output: -1
Explanation: The grid is-
2 2 0 1
Oranges at (0,0) and (0,1) can't rot orange at
(0,3).


Your Task:
You don't need to read or print anything, Your task is to complete the function orangesRotting() which takes grid as input parameter and returns the minimum time to rot all the fresh oranges. If not possible returns -1.


Expected Time Compelxity: O(n*m)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ n, m ≤ 500

Company Tags
 Accolite Amazon MakeMyTrip Microsoft OYO Rooms Samsung

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



	int orangesRotting(vector<vector<int>>& grid) {
		// Code here


		vector<int> dir = { -1, 0, 1, 0, -1}; // for directions: {-1,0},{0,1},{1,0},{0,-1}..

		queue<pair<int, int>> q; // would store rotten oranges...

		int fror = 0 ; // fresh oranges...
		int m = grid.size(), n = grid[0].size();

		for (int i = 0 ; i < m; i++) {
			for (int j = 0 ; j < n; j++) {

				if (grid[i][j] == 1) fror++;

				if (grid[i][j] == 2) q.push({i, j});
//                     means rotten oranges...
			}
		}

		int ans = -1; // since initially rotten oranges started at 0...

//             now using BFS...

		/* initially maybe our 'q' queue may have only one rotten orange..hence our size 'sz' would be 1... but with bfs we would be traversing to nearby fresh oranges and rotting it, and decrementing our 'fror' ~~ fresh oranges... and also increment our 'ans' once in one itearation our oranges have rotten...
		*/
		while (!q.empty()) {
			int sz = q.size();

			while (sz--) {

				pair<int, int> p = q.front();
				q.pop();

				for (int i = 0 ; i < 4 ; i++) { // for directions...

					int x = p.first + dir[i];
					int y = p.second + dir[i + 1];
//                it would help us traverse in all 4 directions...

					if (x >= 0 and x<m and y >= 0 and y < n and grid[x][y] == 1) {
						grid[x][y] = 2;
						fror--;
						q.push({x, y});
					}
				}
			}
			ans++;

		}

//         if still fresh oranges left...

		if (fror > 0) return -1;

		if (ans == -1) return 0;

		return ans;
	}
//     complexity ~ o(mn)...



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////