/*

Unit Area of largest region of 1's
Medium Accuracy: 49.82% Submissions: 21991 Points: 4
Given a grid of dimension nxm containing 0s and 1s. Find the unit area of the largest region of 1s.
Region of 1's is a group of 1's connected 8-directionally (horizontally, vertically, diagonally).


Example 1:

Input: grid = {{1,1,1,0},{0,0,1,0},{0,0,0,1}}
Output: 5
Explanation: The grid is-
1 1 1 0
0 0 1 0
0 0 0 1
The largest region of 1's is colored
in orange.
Example 2:

Input: grid = {{0,1}}
Output: 1
Explanation: The grid is-
0 1
The largest region of 1's is colored in
orange.

Your Task:
You don't need to read or print anyhting. Your task is to complete the function findMaxArea() which takes grid as input parameter and returns the area of the largest region of 1's.


Expected Time Complexity: O(n*m)
Expected Auxiliary Space: O(n*m)


Constraints:
1 ≤ n, m ≤ 500

View Bookmarked Problems
Company Tags
 Amazon Flipkart Microsoft Ola Cabs Salesforce Samsung Google

*/



void fun(vector<vector<int>>&grid, int m, int n, int i, int j, int &count, int &res) {

	if (i<0 or i >= m or j<0 or j >= n or grid[i][j] == 0) return;
	grid[i][j] = 0;
	count++;

	fun(grid, m, n, i + 1, j, count, res);
	fun(grid, m, n, i - 1, j, count, res);
	fun(grid, m, n, i, j + 1, count, res);
	fun(grid, m, n, i, j - 1, count, res);
	fun(grid, m, n, i + 1, j + 1, count, res);
	fun(grid, m, n, i + 1, j - 1, count, res);
	fun(grid, m, n, i - 1, j - 1, count, res);
	fun(grid, m, n, i - 1, j + 1, count, res);

	res = max(count, res);

}

int findMaxArea(vector<vector<int>>& grid) {
	// Code here

	int m = grid.size();
	int n = grid[0].size();

	int count = 0;
	int res = 0 ;

	for (int i = 0; i < m ; i++) {
		for (int j = 0 ; j < n ; j++) {

			count = 0;
			fun(grid, m, n, i, j, count, res);

		}

	}

	return res;
}




