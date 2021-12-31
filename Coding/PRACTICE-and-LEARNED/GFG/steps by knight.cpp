

/*




Steps by Knight
Medium Accuracy: 50.11% Submissions: 34374 Points: 4
Given a square chessboard, the initial position of Knight and position of a target. Find out the minimum steps a Knight will take to reach the target position.

Note:
The initial and the target position co-ordinates of Knight have been given accoring to 1-base indexing.



Example 1:

Input:
N=6
knightPos[ ] = {4, 5}
targetPos[ ] = {1, 1}
Output:
3
Explanation:

Knight takes 3 step to reach from
(4, 5) to (1, 1):
(4, 5) -> (5, 3) -> (3, 2) -> (1, 1).




Your Task:
You don't need to read input or print anything. Your task is to complete the function minStepToReachTarget() which takes the inital position of Knight (KnightPos), the target position of Knight (TargetPos) and the size of the chess board (N) as an input parameters and returns the minimum number of steps required by the knight to reach from its current position to the given target position.



Expected Time Complexity: O(N2).
Expected Auxiliary Space: O(N2).



Constraints:
1 <= N <= 1000
1 <= Knight_pos(X, Y), Targer_pos(X, Y) <= N

View Bookmarked Problems
Company Tags
 Amazon Goldman Sachs Intuit Linkedin MakeMyTrip OYO Rooms Microsoft Flipkart


*/




bool isSafe(int n, int col, int row) {
	if (col < 0 || col >= n || row < 0 || row >= n) return false;
	return true;
}

int rowm[8] = { -2, -1, 1, 2, 2, 1, -1, -2};
int colm[8] = {1, 2, 2, 1, -1, -2, -2, -1};

int minStepToReachTarget(vector<int>&kp, vector<int>&tp, int N)
{

	// return fun(KnightPos, TargetPos, N);

	queue<pair<int, int>>q;
	q.push({kp[0] - 1, kp[1] - 1});
	vector<vector<int>>vis(N + 1, vector<int>(N + 1, 0));
	while (!q.empty()) {
		int a = q.front().first;
		int b = q.front().second;
		if (a == tp[0] - 1 && b == tp[1] - 1) break;
		q.pop();
		for (int i = 0; i < 8; ++i) {
			int x = a + rowm[i];
			int y = b + colm[i];
			if (isSafe(N, x, y) && vis[x][y] == 0) {
				q.push({x, y});
				vis[x][y] = vis[a][b] + 1;
			}
		}
	}
	return vis[tp[0] - 1][tp[1] - 1];

}












