/*
//////////////////////////////////////////////////////
//Question/Info

Print all possible paths from top left to bottom right of a mXn matrix
Difficulty Level : Medium
The problem is to print all the possible paths from top left to bottom right of a mXn matrix with the constraints that from each cell you can either move only to right or down.

Examples :

Input : 1 2 3
        4 5 6
Output : 1 4 5 6
         1 2 5 6
         1 2 3 6

Input : 1 2
        3 4
Output : 1 2 4
         1 3 4


we can simply use backtraking algorithm to solve problem in optimised manner


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


	void display(vector<int> &ans) {
		for (auto i : ans ) {
			cout << i << " ";
		}
		cout << endl;
	}

	bool issafe(int r, int c, vector<vector<int>>& grid, int n, int m) {
		return (r < n and c < m and grid[r] != -1 );
	}


	void FindPaths(vector<vector<int>> &grid, int r, int c, int n, int m, vector<int> &ans) {
		// when we hit the last cell we reach to destination then direclty push the path
		if (r == n - 1 and c == m - 1) {
			ans.push_back(grid[r]);
			display(ans);  // function to display the path stored in ans vector
			ans.pop_back(); // pop back because we need to backtrack to explore more path
			return ;
		}

		// we will store the current value in ch and mark the visited place as -1
		int ch = grid[r];

		ans.push_back(ch); // push the path in ans array
		grid[r] = -1;  // mark the visited place with -1

		// if is it safe to take next downward step then take it
		if (issafe(r + 1, c, grid, n, m)) {
			FindPaths(grid, r + 1, c, n, m, ans);
		}

		// if is it safe to take next rightward step then take it
		if (issafe(r, c + 1, grid, n, m)) {
			FindPaths(grid, r, c + 1, n, m, ans);
		}

		// backtracking step we need to make values original so to we can visit it by some another path
		grid[r] = ch;

		// remove the current path element we explore
		ans.pop_back();
		return ;
	}

	int main() {
		int n = 3 , m = 3;
		vector<vector<int> >grid{ {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
		vector<int>ans ; // it will store the path which we have covered

		FindPaths(grid, 0, 0, n, m, ans); // here 0,0 are initial position to start with
		return 0;
	}




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////