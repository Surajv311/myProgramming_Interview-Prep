/*
///////////////////////////////////////////
//Question/Info

Boolean Matrix
Medium Accuracy: 50.0% Submissions: 11792 Points: 4
Given a boolean matrix of size RxC where each cell contains either 0 or 1, modify it such that if a matrix cell matrix[i][j] is 1 then all the cells in its ith row and jth column will become 1.

Example 1:

Input:
R = 2, C = 2
matrix[][] = {{1, 0},
              {0, 0}}
Output:
1 1
1 0
Explanation:
Only cell that has 1 is at (0,0) so all
cells in row 0 are modified to 1 and all
cells in column 0 are modified to 1.

Example 2:

Input:
R = 4, C = 3
matrix[][] = {{ 1, 0, 0},
              { 1, 0, 0},
              { 1, 0, 0},
              { 0, 0, 0}}
Output:
1 1 1
1 1 1
1 1 1
1 0 0
Explanation:
The position of cells that have 1 in
the original matrix are (0,0), (1,0)
and (2,0). Therefore, all cells in row
0,1,2 are and column 0 are modified to 1.

Your Task:
You dont need to read input or print anything. Complete the function booleanMatrix() that takes the matrix as input parameter and modifies it in-place.


Expected Time Complexity: O(R * C)
Expected Auxiliary Space: O(R + C)


Constraints:
1 ≤ R, C ≤ 1000
0 ≤ matrix[i][j] ≤ 1

Company Tags
 Microsoft

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
		//Function to modify the matrix such that if a matrix cell matrix[i][j]
		//is 1 then all the cells in its ith row and jth column will become 1.
		void booleanMatrix(vector<vector<int> > &matrix)
		{
			// code here

			int r = matrix.size();
			int c = matrix[0].size();

			int row[r] = {0}; int col[c] = {0};

			for (int i = 0 ; i < r; i++) {
				for (int j = 0 ; j < c; j++) {
					if (matrix[i][j] == 1) {
						row[i] = 1;
						col[j] = 1;
					}
				}
			}

			for (int i = 0 ; i < r; i++) {
				for (int j = 0 ; j < c; j++) {

					if (row[i] == 1 or col[j] == 1) {
						matrix[i][j] = 1;
					}

				}
			}

		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}