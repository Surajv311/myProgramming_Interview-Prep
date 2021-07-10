/*
//////////////////////////////////////////////////////
//Question/Info

Flood fill Algorithm
Medium Accuracy: 72.66% Submissions: 7810 Points: 4
An image is represented by a 2-D array of integers, each integer representing the pixel value of the image.

Given a coordinate (sr, sc) representing the starting pixel (row and column) of the flood fill, and a pixel value newColor, "flood fill" the image.

To perform a "flood fill", consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color as the starting pixel), and so on. Replace the color of all of the aforementioned pixels with the newColor.

Example 1:

Input: image = {{1,1,1},{1,1,0},{1,0,1}},
sr = 1, sc = 1, newColor = 2.
Output: {{2,2,2},{2,2,0},{2,0,1}}
Explanation: From the center of the image
(with position (sr, sc) = (1, 1)), all
pixels connected by a path of the same color
as the starting pixel are colored with the new
color.Note the bottom corner is not colored 2,
because it is not 4-directionally connected to
the starting pixel.


Your Task:
You don't need to read or print anyhting. Your task is to complete the function floodFill() which takes image, sr, sc and newColor as input paramater and returns the image after flood filling.


Expected Time Compelxity: O(n*m)
Expected Space Complexity: O(n*m)


Constraints:
1 <= n <= m <= 100
0 <= pixel values <= 10
0 <= sr <= (n-1)
0 <= sc <= (m-1)
Company Tags
 Google Microsoft

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
// similar to islands question in dfs...

		void dfs( vector<vector<int>>& vis, vector<vector<int>>& image, int old_colr, int newColor, int i, int j, int m, int n) {

			if (i >= m or j >= n or i < 0 or j < 0) return;
			if (vis[i][j] or image[i][j] != old_colr) return;

// update img...
			image[i][j] = newColor; // 2...
// marking visited...
			vis[i][j] = 1;

			dfs(vis, image, old_colr, newColor, i + 1, j, m, n);
			dfs(vis, image, old_colr, newColor, i, j + 1, m, n);
			dfs(vis, image, old_colr, newColor, i - 1, j, m, n);
			dfs(vis, image, old_colr, newColor, i, j - 1, m, n);


		}
		vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
			// Code here
			int m = image.size();
			int n = image[0].size();

			vector<vector<int>> vis(m, vector<int>(n, 0));

			int old_colr = image[sr][sc];

			dfs(vis, image, old_colr, newColor, sr, sc, m, n);

			return image;

		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////