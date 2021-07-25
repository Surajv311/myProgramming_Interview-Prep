/*
///////////////////////////////////////////
//Question/Info

k-th smallest element in BST
Medium Accuracy: 49.44% Submissions: 39394 Points: 4
Given a BST and an integer K. Find the Kth Smallest element in the BST.

Example 1:

Input:
      2
    /   \
   1     3
K = 2
Output: 2
Example 2:

Input:
        2
      /  \
     1    3
K = 5
Output: -1


Your Task:
You don't need to read input or print anything. Your task is to complete the function KthSmallestElement() which takes the root of the BST and integer K as inputs and return the Kth smallest element in the BST, if no such element exists return -1.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1<=Number of nodes<=100000



Company Tags
 Accolite Amazon Google

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
		// Return the Kth smallest element in the given BST

		void ksmall(Node* root, int &k, int &res) {

			if (root == 0) return;

			ksmall(root->left, k, res);

			k--;

			if (k == 0) res = root->data;

			ksmall(root->right, k, res);

			return;
		}

		int KthSmallestElement(Node *root, int k)
		{
			//add code here.


			// we could have both recursive & iterative soln...
			// for iterative we just do the inorder traversal in iterative way & ...

			int res = INT_MIN;

			ksmall(root, k, res);

			if (res == INT_MIN) res = -1;

			return res;

		}
	};


/////////////////////////////////////////////////

	/* SAME question on leetcode... (LEETCODE VERSION...)

	same ans...

	230. Kth Smallest Element in a BST
	Medium

	4174

	90

	Add to List

	Share
	Given the root of a binary search tree, and an integer k, return the kth (1-indexed) smallest element in the tree.



	Example 1:


	Input: root = [3,1,4,null,2], k = 1
	Output: 1
	Example 2:


	Input: root = [5,3,6,2,4,null,null,1], k = 3
	Output: 3


	Constraints:

	The number of nodes in the tree is n.
	1 <= k <= n <= 104
	0 <= Node.val <= 104

	// ----------------------------------------------------------

	//*
	// * Definition for a binary tree node.
	//* struct TreeNode {
	// *     int val;
	 //*     TreeNode *left;
	 //*     TreeNode *right;
	 //*     TreeNode() : val(0), left(nullptr), right(nullptr) {}
	 //*     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	 //*     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
	 //* };
	 //*
	class Solution {
	public:

	    void ksmall(TreeNode* root, int &k, int &res){

	        if(root==0) return;

	        ksmall(root->left,k,res);

	        k--;

	        if(k==0) res = root->val;

	        ksmall(root->right,k,res);

	        return;
	    }

	    int kthSmallest(TreeNode* root, int k) {

	        // we could have both recursive & iterative soln...
	        // for iterative we just do the inorder traversal in iterative way & ...

	        int res = INT_MIN;

	        ksmall(root,k,res);

	        return res;

	    }
	};

	*/



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

