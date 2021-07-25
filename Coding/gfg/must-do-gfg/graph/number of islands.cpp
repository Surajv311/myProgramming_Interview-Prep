/*
///////////////////////////////////////////
//Question/Info

Find the number of islands
Medium Accuracy: 38.66% Submissions: 58862 Points: 4
Given a grid consisting of '0's(Water) and '1's(Land). Find the number of islands.
Note: An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically or diagonally i,e in all 8 directions.


Example 1:

Input:
grid = {{0,1},{1,0},{1,1},{1,0}}
Output:
1
Explanation:
The grid is-
0 1
1 0
1 1
1 0
All lands are connected.
Example 2:

Input:
grid = {{0,1,1,1,0,0,0},{0,0,1,1,0,1,0}}
Output:
2
Expanation:
The grid is-
0 1 1 1 0 0 0
0 0 1 1 0 1 0
There are two islands one is colored in blue
and other in orange.


Your Task:
You don't need to read or print anything. Your task is to complete the function numIslands() which takes grid as input parameter and returns the total number of islands.


Expected Time Compelxity: O(n*m)
Expected Space Compelxity: O(n*m)


Constraints:
1 <= n, m <= 500

Company Tags
 Amazon Citrix D-E-Shaw Informatica Intuit Linkedin Microsoft Ola Cabs One97 Opera OYO Rooms Paytm Samsung Snapdeal Streamoid Technologies Visa

author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

// #define int 		   long long int
#define sbit(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout << x << "\n";
#define ct2(x,y) 	   cout << x << " " << y << "\n";
#define tc(x) 		   cout << x << " ";
#define tc2(x,y) 	   cout << x << " " << y << " ";
#define forn(i,n) 	   for(int i = 0; i < (int)(n); ++i)
#define forx(i,x,n)    for(int i = x; i < (int)(n); ++i)
#define nfor(i,n)      for(int i = n-1; i >= 0; --i)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed << setprecision(y) << x
#define PI 			   3.1415926535897932384626433832795
#define MOD 		   1000000007 // (1e9+7)
#define pii 		   pair<int,int>
#define pis 		   pair<int,string>
#define vi  		   vector<int>
#define vii 		   vector<pii>
#define mii 		   map<int,int>
#define p_q            priority_queue // priority_queue<int> (&) priority_queue< int,vi,greater<int> >
#define _IOS      	   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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

		void dfs(vector<vector<char>> & grid, int x, int y, int row, int col)
		{

			// check for corner position of matrix...

			if (x >= row or x < 0 or y >= col or y < 0 or grid[x][y] != '1') {
				return;
			}

			grid[x][y] = '2'; // marking with 2.. means its land and its visited...

			// chekcing in all 4 directions...
			dfs(grid, x + 1, y, row, col);
			dfs(grid, x - 1, y, row, col);
			dfs(grid, x, y + 1, row, col);
			dfs(grid, x, y - 1, row, col);

			/*
				dfs(grid, x+1, y+1, row, col);
			    dfs(grid, x-1, y-1, row, col);
			    dfs(grid, x-1, y+1, row, col);
			    dfs(grid, x+1, y-1, row, col);
			*/


		}

		//Function to find the number of islands.
		int numIslands(vector<vector<char>>& grid)
		{
			// Code here

			int row = grid.size();

			int col = grid[0].size();

			// if row zero then false...

			if (row == 0) {
				return 0;
			}

			int count = 0;

			for (int i = 0 ; i < row; ++i) {

				for (int j = 0 ; j < col ; ++j) {

					if (grid[i][j] == '1') {

						dfs(grid, i , j , row, col);
						++count;
					}
				}
			}

			return count;
		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}