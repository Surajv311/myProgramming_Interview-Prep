/*
//////////////////////////////////////////////////////
//Info-Que.

Boundary Traversal of binary tree
Medium Accuracy: 26.78% Submissions: 99628 Points: 4
Given a Binary Tree, find its Boundary Traversal. The traversal should be in the following order:

Left boundary nodes: defined as the path from the root to the left-most node ie- the leaf node you could reach when you always travel preferring the left subtree over the right subtree.
Leaf nodes: All the leaf nodes except for the ones that are part of left or right boundary.
Reverse right boundary nodes: defined as the path from the right-most node to the root. The right-most node is the leaf node you could reach when you always travel preferring the right subtree over the left subtree. Exclude the root from this as it was already included in the traversal of left boundary nodes.
Note: If the root doesn't have a left subtree or right subtree, then the root itself is the left or right boundary.

Example 1:

Input:
        1
      /   \
     2     3

Output: 1 2 3
Explanation:


Example 2:

Input:
          20
        /   \
       8     22
     /   \    \
    4    12    25
        /  \
       10   14

Output: 20 8 4 10 14 25 22
Explanation:

















Your Task:
This is a function problem. You don't have to take input. Just complete the function printBoundary() that takes the root node as input and returns an array containing the boundary values in anti-clockwise.



Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).



Constraints:
1 ≤ Number of nodes ≤ 105
1 ≤ Data of a node ≤ 105

Company Tags
 Accolite Amazon FactSet Hike Kritikal Solutions Microsoft Morgan Stanley OYO Rooms Payu Samsung Snapdeal

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


	/* A binary tree Node
	struct Node
	{
	    int data;
	    Node* left, * right;
	}; */

	void ltra(Node * root, vector<int> &ans) { // left side traversal

		if (root == 0) return;

		if (root->left) {
			ans.push_back(root->data);
			ltra(root->left, ans);
		}

		else if (root->right) {
			ans.push_back(root->data);
			ltra(root->right, ans);
		}

		// since when we reach the leaf node on the left side...
		// it own't be printed since at leaf: leaf->left == leaf=>right== 0 ,
		// and in our function for both null we can see it just returns...
		return;
	}

	void lftra(Node * root, vector<int> &ans) { //pushing leaf node ...

		if (root == 0) return;

		//inorder traversal...
		lftra(root->left, ans);

		if (root->left == 0 and root->right == 0) {
			ans.push_back(root->data);
			return;
		}

		lftra(root->right, ans);
	}

	void rtra(Node * root, vector<int> &ans) { // right side ...

		if (root == 0) return;

		if (root->right) {
			rtra(root->right, ans);
			ans.push_back(root->data);
		}

		else if (root->left) {
			rtra(root->left, ans);
			ans.push_back(root->data);
		}
	}

	class Solution {
	public:
		vector <int> printBoundary(Node *root)
		{
			//Your code here

			if (root == 0) return {};
			// note it must be anticlockwise traversal...

			vector<int> ans;

			ans.push_back(root->data);

			ltra(root->left, ans); // preorder

			//inorder
			lftra(root->left, ans);
			lftra(root->right, ans);

			// postorder
			rtra(root->right, ans);

			return ans;
		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////


/*
// code by: srj_v //
*/


