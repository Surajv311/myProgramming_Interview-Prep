/*
///////////////////////////////////////////
//Question/Info

Find whether path exist
Medium Accuracy: 51.18% Submissions: 10930 Points: 4
Given a grid of size n*n filled with 0, 1, 2, 3. Check whether there is a path possible from the source to destination. You can traverse up, down, right and left.
The description of cells is as follows:

A value of cell 1 means Source.
A value of cell 2 means Destination.
A value of cell 3 means Blank cell.
A value of cell 0 means Wall.
Note: There are only a single source and a single destination.


Example 1:

Input: grid = {{3,0,3,0,0},{3,0,0,0,3}
,{3,3,3,3,3},{0,2,3,0,0},{3,0,0,1,3}}
Output: 0
Explanation: The grid is-
3 0 3 0 0
3 0 0 0 3
3 3 3 3 3
0 2 3 0 0
3 0 0 1 3
There is no path to reach at (3,1) i,e at
destination from (4,3) i,e source.
Example 2:

Input: grid = {{1,3},{3,2}}
Output: 1
Explanation: The grid is-
1 3
3 2
There is a path from (0,0) i,e source to (1,1)
i,e destination.


Your Task:
You don't need to read or print anything. Your task is to complete the function is_Possible() which takes the grid as input parameter and returns boolean value true if there is a path otherwise returns false.


Expected Time Complexity: O(n2)
Expected Auxiliary Space: O(n2)


Constraints:
1 ≤ n ≤ 500

Company Tags
 Adobe Amazon Morgan Stanley Samsung Microsoft

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




	class Solution
	{
	public:

		bool dfs(vector<vector<int>>&M, int x, int y, vector<vector<bool>>&vis, int &n) {

			if (x < 0 || x >= n || y < 0 || y >= n) return false;
			if (vis[x][y] == true) return false;
			if (M[x][y] == 0) return false;
			if (M[x][y] == 2) return true;

			vis[x][y] = true;
			if (dfs(M, x, y - 1, vis, n)) return true;
			if (dfs(M, x, y + 1, vis, n)) return true;
			if (dfs(M, x + 1, y, vis, n)) return true;
			if (dfs(M, x - 1, y, vis, n)) return true;

			return false;
		}

		//Function to find whether a path exists from the source to destination.
		bool is_Possible(vector<vector<int>>& M)
		{
			//code here
			int N = M.size();
			int x, y;
			int flag = 0;
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					if (M[i][j] == 1) {
						x = i;
						y = j;
						flag = 1;
						break;
					}
					if (flag == 1)break;
				}
			}
			vector<vector<bool>>vis(N, vector<bool>(N, false));
			return dfs(M, x, y, vis, N);

		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

