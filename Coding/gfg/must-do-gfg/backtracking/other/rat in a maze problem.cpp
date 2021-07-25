/*
//////////////////////////////////////////////////////
//Question/Info

Rat in a Maze Problem - I
Medium Accuracy: 37.73% Submissions: 67283 Points: 4
Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
Note: In a path, no cell can be visited more than one time.

Example 1:

Input:
N = 4
m[][] = {{1, 0, 0, 0},
         {1, 1, 0, 1},
         {1, 1, 0, 0},
         {0, 1, 1, 1}}
Output:
DDRDRR DRDDRR
Explanation:
The rat can reach the destination at
(3, 3) from (0, 0) by two paths - DRDDRR
and DDRDRR, when printed in sorted order
we get DDRDRR DRDDRR.
Example 2:
Input:
N = 2
m[][] = {{1, 0},
         {1, 0}}
Output:
-1
Explanation:
No path exists and destination cell is
blocked.
Your Task:
You don't need to read input or print anything. Complete the function printPath() which takes N and 2D array m[ ][ ] as input parameters and returns the list of paths in lexicographically increasing order.
Note: In case of no path, return an empty list. The driver will output "-1" automatically.

Expected Time Complexity: O((N2)4).
Expected Auxiliary Space: O(L * X), L = length of the path, X = number of paths.

Constraints:
2 ≤ N ≤ 5
0 ≤ m[i][j] ≤ 1

Company Tags
 Amazon Microsoft

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



	class Solution {
	public:

		void recur(vector<vector<int>> m, int i, int j, int n, string path, vector<string> &res) {

			if (i < 0 || i >= n || j < 0 || j >= n || m[i][j] != 1) {
				return;
			}
			if (i == n - 1 && j == n - 1) {
				res.push_back(path);
				return;
			}
			m[i][j] = -1;
			recur(m, i, j + 1, n, path + 'R', res);
			recur(m, i + 1, j, n, path + 'D', res);
			recur(m, i, j - 1, n, path + 'L', res);
			recur(m, i - 1, j, n, path + 'U', res);
		}

		vector<string> findPath(vector<vector<int>> &m, int n) {
			// Your code goes here

			vector<string> res;
			string path = "";
			recur(m, 0, 0, n, path, res);
			sort(res.begin(), res.end());
			return res;
			/*


			bool check(int **arr, int x , int y , int n ) {

			if (x < n and y < n and arr[x][y] == 1) {
				// to check our next step is blocked-0 or open-1 ...
				return true;
			}
			return false;

			}

			bool maze(int **arr, int x , int y , int n , int **sol) {

			// base case

			if (x == (n - 1) and y == (n - 1)) {

				sol[x][y] = 1 ;
				return true; // when the rat reaches the destination point- that is the right corner of the square maze...
			}

			// choice diagram

			if (check(arr, x , y , n )) {
				sol[x][y] = 1; // if the check is true then 1
				// but this need not help us arrive at the same endpoint destination
				// so some if conditions:

			// checking upcoming steps taken by the rat...
				if (maze(arr, x + 1 , y , n , sol)) {
					return true ;
				}

				if (maze(arr, x , y + 1 , n , sol))
				{
					return true ;
				}

				// if not true then backtrack

				sol[x][y] = 0;
				return false;
			}
			return false;

			}

			       */
		}
	};





// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////