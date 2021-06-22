/*
///////////////////////////////////////////
//Question/Info

Binary Trees..

For a level L = max nodes = 2^L
Max nodes at a height H = 2^H - 1
Min possible heights/levels = log(N+1) to base 2
A binary tree with L leaves has atleast log(N+1) +1 to base 2 number of levels


Its not easy to directly construct a binary tree from a given order..
since think of how will you insert a node as left child
& right child.. you may have to maintain a flag..
to check & insert... hence its easier to construct a tree
if we a properly given an - inorder/preorder/postorder...


FIRST LETS DISCUSS THE TRAVERSALS... INORDER/PREORDER/POSTORDER

/////////////////////////////////////////////////////////////////////

Inorder Traversal
Basic Accuracy: 60.29% Submissions: 68009 Points: 1
Given a Binary Tree, find the In-Order Traversal of it.

Example 1:

Input:
       1
     /  \
    3    2
Output: 3 1 2

Example 2:

Input:
        10
     /      \
    20       30
  /    \    /
 40    60  50
Output: 40 20 60 10 50 30

Your Task:
You don't need to read input or print anything. Your task is to complete the function inOrder() that takes root node of the tree as input and returns a list containing the In-Order Traversal of the given Binary Tree.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= Number of nodes <= 105
0 <= Data of a node <= 105


Company Tags
 Adobe Amazon Snapdeal


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

	/*
	INORDER = LEFT-PARENT-RIGHT
	PREORDER = PARENT-LEFT-RIGHT
	POSTORDER = LEFT-RIGHT-PARENT
	*/



	class Solution {
	public:

		void order(Node*curr, vector<int> &ans) {

			if (curr == 0) {
				return;
			}

			order(curr->left, ans);
			ans.push_back(curr->data);
			order(curr->right, ans);


		}
		// Function to return a list containing the inorder traversal of the tree.
		vector<int> inOrder(Node* root) {
			// Your code here
			vector<int> ans;
			Node *curr = root;
			// lpr


			//order(curr,ans);


			// APPROACH 2 - ITERATIVE

			stack<Node*> st;

			while (!st.empty() or curr) {

				if (curr) {

					st.push(curr);
					curr = curr->left;

				}

				else {

					curr = st.top();
					st.pop();

					ans.push_back(curr->data);

					curr = curr->right;

				}
			}

			return ans;
		}
	};





// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

