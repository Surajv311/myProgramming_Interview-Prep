/*
///////////////////////////////////////////
//Question/Info

Largest BST
Medium Accuracy: 30.88% Submissions: 37861 Points: 4
Given a binary tree. Find the size of its largest subtree that is a Binary Search Tree.

Example 1:

Input:
        1
      /   \
     4     4
   /   \
  6     8
Output: 1
Explanation: There's no sub-tree with size
greater than 1 which forms a BST. All the
leaf Nodes are the BSTs with size equal
to 1.
Example 2:

Input: 6 6 3 N 2 9 3 N 8 8 2
            6
        /       \
       6         3
        \      /   \
         2    9     3
          \  /  \
          8 8    2
Output: 2
Explanation: The following sub-tree is a
BST of size 2:
       2
    /    \
   N      8
Your Task:
You don't need to read input or print anything. Your task is to complete the function largestBst() that takes the root node of the Binary Tree as its input and returns the size of the largest subtree which is also the BST. If the complete Binary Tree is a BST, return the size of the complete Binary Tree.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the BST).

Constraints:
1 <= Number of nodes <= 100000
1 <= Data of a node <= 1000000

Company Tags
 Amazon D-E-Shaw Samsung Microsoft

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


	/* Tree node structure  used in the program

	struct Node {
	    int data;
	    Node *left;
	    Node *right;

	    Node(int val) {
	        data = val;
	        left = right = NULL;
	    }
	};*/
	struct Info
	{
		int sz; // Size of subtree
		int max; // Min value in subtree
		int min; // Max value in subtree
		int ans; // Size of largest BST which
		// is subtree of current node
		bool isBST; // If subtree is BST
	};
	/*You are required to complete this method */
// Return the size of the largest sub-tree which is also a BST

	Info largestBSTBT(Node * root)
	{
		// Base cases : When tree is empty or it has
		// one child.
		if (root == NULL)
			return {0, INT_MIN, INT_MAX, 0, true};
		if (root->left == NULL && root->right == NULL)
			return {1, root->data, root->data, 1, true};

		// Recur for left subtree and right subtrees
		Info l = largestBSTBT(root->left);
		Info r = largestBSTBT(root->right);

		// Create a return variable and initialize its
		// size.
		Info ret;// struct object
		ret.sz = (1 + l.sz + r.sz);

		// If whole tree rooted under current root is
		// BST.
		if (l.isBST && r.isBST && l.max < root->data &&
		        r.min > root->data)
		{
			ret.min = min(l.min, min(r.min, root->data));
			ret.max = max(r.max, max(l.max, root->data));

			// Update answer for tree rooted under
			// current 'root'
			ret.ans = ret.sz;
			ret.isBST = true;

			return ret;
		}

		// If whole tree is not BST, return maximum
		// of left and right subtrees
		ret.ans = max(l.ans, r.ans);
		ret.isBST = false;

		return ret;
	}

	int largestBst(Node * root)
	{
		//Your code here

		Info val = largestBSTBT(root);

		return val.ans;
	}





// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

