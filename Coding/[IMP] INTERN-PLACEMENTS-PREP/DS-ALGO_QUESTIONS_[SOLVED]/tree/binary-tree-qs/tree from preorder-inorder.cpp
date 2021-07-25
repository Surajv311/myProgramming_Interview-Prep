/*
///////////////////////////////////////////
//Question/Info

Construct Tree from Inorder & Preorder
Medium Accuracy: 36.26% Submissions: 43477 Points: 4
Given 2 Arrays of Inorder and preorder traversal. Construct a tree and print the Postorder traversal.

Example 1:

Input:
N = 4
inorder[] = {1 6 8 7}
preorder[] = {1 6 7 8}
Output: 8 7 6 1
Example 2:

Input:
N = 6
inorder[] = {3 1 4 0 5 2}
preorder[] = {0 1 3 4 2 5}
Output: 3 4 1 5 2 0
Explanation: The tree will look like
       0
    /     \
   1       2
 /   \    /
3    4   5
Your Task:
Your task is to complete the function buildTree() which takes 3 arguments(inorder traversal array, preorder traversal array, and size of tree n) and returns the root node to the tree constructed. You are not required to print anything and a new line is added automatically (The post order of the returned tree is printed by the driver's code.)

Expected Time Complexity: O(N*N).
Expected Auxiliary Space: O(N).

Constraints:
1<=Number of Nodes<=1000

Company Tags
 Accolite Amazon Microsoft

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

		Node*inpre(map<int, int>&mp, int pre[], int start, int end, int&preIn) {

			// no need for int in[]....
			if (start > end) return 0;

			// Node *node = new Node;
			Node *node = (Node*)malloc(sizeof(Node));
			node->left = node->right = NULL;
			node->data = pre[preIn]; preIn++;

			if (start == end) return node;

			int inIn = mp[node->data];// not using mp[pre[preIn]] since preIn++...

			node->left = inpre(mp, pre, start, inIn - 1, preIn);
			node->right = inpre(mp, pre, inIn + 1, end, preIn);

			return node;
		}


		Node* buildTree(int in[], int pre[], int n)
		{
			// Code here

			map<int, int> mp;

			// int preIn = 0;
			int start = 0; int end = n;
			for (int i = 0 ; i < n ; i++ ) mp[in[i]] = i ;
			int preIn = 0 ;
			return inpre(mp, pre, start, end - 1, preIn);
		}

		/*

		ITERATIVE.....


		Node* construct_tree(vector<char>& in, vector<char>& pre)
		{
		int preIn = 0, inIn = 0, flag = 0;
		stack<Node*> st;

		Node* root = new Node(pre[preIn]);
		++preIn;
		st.push(root);
		Node *prev = root;

		while (preIn < pre.size())
		{
		    if (!st.empty() && in[inIn] == st.top()->val)
		    {
		        prev = st.top();
		        st.pop();
		        ++inIn;
		        flag = 1;
		    }
		    else
		    {
		        Node* node = new Node(pre[preIn]);
		        if (flag == 0)
		        {
		            prev->left = node;
		            prev = prev->left;
		        }
		        else
		        {
		            prev->right = node;
		            prev = prev->right;
		            flag = 0;
		        }
		        st.push(node);
		        ++preIn;
		    }
		}
		return root;
		}

		*/
	};


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

