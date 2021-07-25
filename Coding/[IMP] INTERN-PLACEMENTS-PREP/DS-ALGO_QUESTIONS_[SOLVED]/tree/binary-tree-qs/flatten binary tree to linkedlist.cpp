/*
///////////////////////////////////////////
//Question/Info

114. Flatten Binary Tree to Linked List
Medium

4737

417

Add to List

Share
Given the root of a binary tree, flatten the tree into a "linked list":

The "linked list" should use the same TreeNode class where the right child pointer points to the next node in the list and the left child pointer is always null.
The "linked list" should be in the same order as a pre-order traversal of the binary tree.


Example 1:


Input: root = [1,2,5,3,4,null,6]
Output: [1,null,2,null,3,null,4,null,5,null,6]
Example 2:

Input: root = []
Output: []
Example 3:

Input: root = [0]
Output: [0]


Constraints:

The number of nodes in the tree is in the range [0, 2000].
-100 <= Node.val <= 100

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

	/**
	 * Definition for a binary tree node.
	 * struct TreeNode {
	 *     int val;
	 *     TreeNode *left;
	 *     TreeNode *right;
	 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
	 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
	 * };
	 */
	class Solution {
	public:

		TreeNode * prev = 0;
		void flatten(TreeNode* root) {

			if (root == 0) return;

//         flatten(root->right);
//         flatten(root->left);

//         // its like reverse postorder.....
//         root->right = prev;
//         root->left = 0;
//         prev = root;

			// ITERATIVE USING A STACK


//         stack<TreeNode*> st;

//         st.push(root);
//         while(!st.empty()){

//             TreeNode* node = st.top(); st.pop();

//             if(node->right) st.push(node->right);
//     // right child pushed first so that we get left child on top to pop...
//             if(node->left) st.push(node->left);

//             if(!st.empty()) node->right = st.top();

//             node->left = 0;

//         }

			// morris traversal...

			TreeNode* curr = root;
			while (curr != NULL)
			{
				if (curr->left != NULL)
				{
					TreeNode* cleft = curr->left;
					while (cleft->right)
						cleft = cleft->right;
					cleft->right = curr->right;
					curr->right = curr->left;
					curr->left = NULL;
				}
				curr = curr->right;
			}


		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

