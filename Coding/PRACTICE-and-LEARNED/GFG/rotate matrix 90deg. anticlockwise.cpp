/*
//////////////////////////////////////////////////////
//Info-Que.

Rotate by 90 degree
Medium Accuracy: 53.41% Submissions: 13820 Points: 4
Given a square matrix[][] of size N x N. The task is to rotate it by 90 degrees in an anti-clockwise direction without using any extra space.

Example 1:

Input:
N = 3
matrix[][] = [[1 2 3],
              [4 5 6],
              [7 8 9]]
Output:
3 6 9
2 5 8
1 4 7
Your Task:
You only need to implement the given function rotate(). Do not read input, instead use the arguments given in the function.

Expected Time Complexity: O(N*N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 50
1 <= matrix[][] <= 100



Company Tags
 Amazon D-E-Shaw Microsoft Morgan Stanley Paytm Samsung Snapdeal Zoho

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


	void rotate(vector<vector<int> >& matrix)
	{

		// Your code goes here


//     for(int i = 0 ; i < matrix.size() ; i++){

//         for(int j = 0 ; j < matrix[0].size();j++){

//             if(i<j) swap(matrix[i][j],matrix[j][i]);

//         }
//     }

// for(int i = 0 ; i < matrix.size();i++){
//     reverse(matrix[i].begin(),matrix[i].end());
// }

		// now repeat the same code twice ~ total 3 times - to rotate anticlockwise

		/////////////////////////////////////////////////////////////


		// else method 2 - transpose matrix then rotate by cols (anti clockwise)... if by rows then clockwise...



		for (int i = 0 ; i < matrix.size() ; i++) {

			for (int j = 0 ; j < matrix[0].size(); j++) {

				if (i < j) swap(matrix[i][j], matrix[j][i]);

			}
		}

		for (int j = 0 ; j < matrix[0].size(); j++) {

			int x = 0 ; int y = matrix.size() - 1;

			while (x < y) {

				swap(matrix[x++][j], matrix[y--][j]);

			}
		}

	}




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////


/*
// code by: srj_v //
*/


