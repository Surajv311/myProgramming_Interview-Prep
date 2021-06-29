/*
///////////////////////////////////////////
//Question/Info

124. Binary Tree Maximum Path Sum
Hard

6150

413

Add to List

Share
A path in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. A node can only appear in the sequence at most once. Note that the path does not need to pass through the root.

The path sum of a path is the sum of the node's values in the path.

Given the root of a binary tree, return the maximum path sum of any path.



Example 1:


Input: root = [1,2,3]
Output: 6
Explanation: The optimal path is 2 -> 1 -> 3 with a path sum of 2 + 1 + 3 = 6.
Example 2:


Input: root = [-10,9,20,null,null,15,7]
Output: 42
Explanation: The optimal path is 15 -> 20 -> 7 with a path sum of 15 + 20 + 7 = 42.


Constraints:

The number of nodes in the tree is in the range [1, 3 * 104].
-1000 <= Node.val <= 1000

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

		int maxSum(TreeNode*root, int &res) {
			if (root == 0) return 0;

			int lmax = maxSum(root->left, res);
			int rmax = maxSum(root->right, res);

			int nodeMax = max(max(lmax, rmax) + root->val , root->val);
			// for a node... we take max from left & right subtree : max(lmax,rmax)+root->data
			//& add it... if both left/right subtree sum value is negative,
			//then we just take our present curr node.. :root->data since we want max val...

			// now when we reach our final root node...

			int rootMax = max(nodeMax, lmax + rmax + root->val);

			res = max(res, rootMax);

			return nodeMax; // res passed by reference....z

		}

		int maxPathSum(TreeNode* root) {


			int res = INT_MIN;

			maxSum(root, res);

			return res;

		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

