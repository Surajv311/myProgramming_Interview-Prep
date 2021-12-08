/*


Word Search
Medium Accuracy: 51.21% Submissions: 7203 Points: 4
Given a 2D board of letters and a word. Check if the word exists in the board. The word can be constructed from letters of adjacent cells only. ie - horizontal or vertical neighbors. The same letter cell can not be used more than once.


Example 1:

Input: board = {{a,g,b,c},{q,e,e,l},{g,b,k,s}},
word = "geeks"
Output: 1
Explanation: The board is-
a g b c
q e e l
g b k s
The letters which are used to make the
"geeks" are colored.
Example 2:

Input: board = {{a,b,c,e},{s,f,c,s},{a,d,e,e}},
word = "sabfs"
Output: 0
Explanation: The board is-
a b c e
s f c s
a d e e
Same letter can not be used twice hence ans is 0


Your Task:
You don't need to read or print anything. Your task is to complete the function isWordExist() which takes board and word as input parameter and returns boolean value true if word can be found otherwise returns false.


Expected Time Complexity: O(N * M * 4L) where N = No. of rows in board, M = No. of columns in board, L = Length of word
Expected Space Compelxity: O(L), L is length of word.


Constraints:
1 ≤ N, M ≤ 100
1 ≤ L ≤ N*M

View Bookmarked Problems
Company Tags
 Amazon Apple Intuit Microsoft


*/



bool fun(vector<vector<char>>& board, int i , int j, int m, int n, string word, int it) {

	if (it == word.length()) return true; // base case...

	if (i<0 or i >= m or j<0 or j >= n) return false;

	if (board[i][j] != word[it]) return false;

	char x = board[i][j];

	board[i][j] = ' '; // making the char. as ' '...'


	bool found =
	    fun(board, i + 1, j, m, n, word, it + 1) ||
	    fun(board, i, j + 1, m, n, word, it + 1) ||
	    fun(board, i - 1, j, m, n, word, it + 1) ||
	    fun(board, i, j - 1, m, n, word, it + 1);

	/*
	note in above recursive calls, our it -> it+1, hence when we are at a particular
	letter, only the next letter (letter at i+1 index) is searched, as for the further
	recursive calls, note that  `it` is also incrementing... means jumping to
	other chars...
	*/

	// if not found, we backtrack...

	board[i][j] = x;

	return found;

}

bool isWordExist(vector<vector<char>>& board, string word) {
	// Code here

	int m = board.size(); int n = board[0].size();

	int count = 0;

	for (int i = 0 ; i < m ; i++) {
		for (int j = 0 ; j < n; j++) {
			if (board[i][j] == word[0]) {

				if (fun(board, i, j, m, n, word, count)) return true;

			}
		}
	}

	return false;

}










