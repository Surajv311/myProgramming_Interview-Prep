/*
///////////////////////////////////////////
//Question/Info

Level order traversal
Easy Accuracy: 49.61% Submissions: 77632 Points: 2
Given a binary tree, find its level order traversal.
Level order traversal of a tree is breadth-first traversal for the tree.


Example 1:

Input:
    1
  /   \
 3     2
Output:1 3 2
Example 2:

Input:
        10
     /      \
    20       30
  /   \
 40   60
Output:10 20 30 40 60 N N

Your Task:
You don't have to take any input. Complete the function levelOrder() that takes the root node as input parameter and returns a list of integers containing the level order traversal of the given Binary Tree.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


Constraints:
1 ≤ Number of nodes ≤ 105
1 ≤ Data of a node ≤ 105

Company Tags
 Accolite Adobe Amazon Cisco D-E-Shaw Flipkart Microsoft Morgan Stanley Ola Cabs Payu Qualcomm Samsung


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


	/* A binary tree Node

	struct Node
	{
	    int data;
	    struct Node* left;
	    struct Node* right;

	    Node(int x){
	        data = x;
	        left = right = NULL;
	    }
	};
	 */


	class Solution
	{
	public:
		//Function to return the level order traversal of a tree.
		vector<int> levelOrder(Node* root)
		{
			//Your code here

			vector<int> ans ;

			queue<Node*> q;

			Node* curr = root;
			q.push(curr);

			while (!q.empty()) {

				Node* node = q.front();
				q.pop();
				if (node->left) q.push(node->left);
				if (node->right) q.push(node->right);

				ans.push_back(node->data);
			}

			return ans;

		}
	};


	/*

	USING RECURSION


	int height(Node *curr)
	{
	    if (curr == NULL)
	       return -1;
	    int lheight = height(curr->left);
	    int rheight = height(curr->right);
	    return max(lheight, rheight) + 1;
	}

	void print_level(Node *curr, int level)
	{
	    if (curr == NULL)
	       return;
	    else if (level == 0)
	       cout << curr->val << " ";
	    else if (level > 0)
	    {
	        print_level(curr->left, level-1);
	        print_level(curr->right, level-1);
	    }
	}

	void levelorder_traversal(Node *root)
	{
	    cout << height(root) << endl;
	    for (int level=0; level <= height(root); level++)
	        print_level(root, level);
	}
	*/


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

