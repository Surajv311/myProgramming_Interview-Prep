/*
//////////////////////////////////////////////////////
//Question/Info

Word Boggle
Medium Accuracy: 48.98% Submissions: 11931 Points: 4
Given a dictionary of distinct words and an M x N board where every cell has one character. Find all possible words from the dictionary that can be formed by a sequence of adjacent characters on the board. We can move to any of 8 adjacent characters, but a word should not have multiple instances of the same cell.


Example 1:

Input:
N = 1
dictionary = {"CAT"}
R = 3, C = 3
board = {{C,A,P},{A,N,D},{T,I,E}}
Output:
CAT
Explanation:
C A P
A N D
T I E
Words we got is denoted using same color.
Example 2:

Input:
N = 4
dictionary = {"GEEKS","FOR","QUIZ","GO"}
R = 3, C = 3
board = {{G,I,Z},{U,E,K},{Q,S,E}}
Output:
GEEKS QUIZ
Explanation:
G I Z
U E K
Q S E
Words we got is denoted using same color.

Your task:
You don’t need to read input or print anything. Your task is to complete the function wordBoggle() which takes the dictionary contaning N space-separated strings and R*C board as input parameters and returns a list of words that exist on the board.


Expected Time Complexity: O(N*W + R*C^2)
Expected Auxiliary Space: O(N*W + R*C)


Constraints:
1 ≤ N ≤ 15
1 ≤ R, C ≤ 50
1 ≤ length of Word ≤ 60

Company Tags
 Amazon Directi Facebook Google MakeMyTrip Microsoft Nvidia Yahoo

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

		bool dfs(vector<vector<char> >& board, string word, int i , int j, int ind,  vector<vector<int>> &vis) {

			if (ind == word.size()) return true;


			if (i >= 0 and i<board.size() and j >= 0 and j < board[0].size() and vis[i][j] == 0 and board[i][j] == word[ind] )
				// so seeing if the cell is unvisited and ... the given char is present in the adjacent cells...

			{	vis[i][j] = 1;

				if (
				    dfs(board, word, i + 1, j, ind + 1, vis) or
				    dfs(board, word, i - 1, j, ind + 1, vis) or
				    dfs(board, word, i, j + 1, ind + 1, vis) or
				    dfs(board, word, i, j - 1, ind + 1, vis) or
				    dfs(board, word, i + 1, j + 1, ind + 1, vis) or
				    dfs(board, word, i + 1, j - 1, ind + 1, vis) or
				    dfs(board, word, i - 1, j - 1, ind + 1, vis) or
				    dfs(board, word, i - 1, j + 1, ind + 1, vis)
				) return true;

				vis[i][j] = 0 ; // backtrack...
			}

			return false;

		}

		bool findd(vector<vector<char> >& board, string word) {

			int n = board.size();
			int m = board[0].size();

			vector<vector<int>> vis(n, vector<int>(m, 0));

			int ind = 0;

			for (int i = 0 ; i < n; i++) {
				for (int j = 0 ; j < m; j++) {

					if (board[i][j] == word[ind]) // matching the first char of the word...throughout the matrix...
					{
						if (dfs(board, word, i, j, ind, vis)) return true;
					}

				}

			}

			return false;

		}


		vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
			// Code here

			vector<string> ans;

			for (auto it : dictionary) {

				if (findd(board, it)) ans.push_back(it);

			}

			return ans;



		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////