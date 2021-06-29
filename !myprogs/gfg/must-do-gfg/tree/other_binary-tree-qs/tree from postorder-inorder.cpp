/*
///////////////////////////////////////////
//Question/Info

Tree from Postorder and Inorder
Medium Accuracy: 49.98% Submissions: 20525 Points: 4
Given inorder and postorder traversals of a Binary Tree in the arrays in[] and post[] respectively. The task is to construct the binary tree from these traversals.



Example 1:

Input:
N = 8
in[] = 4 8 2 5 1 6 3 7
post[] =8 4 5 2 6 7 3 1
Output: 1 2 4 8 5 3 6 7
Explanation: For the given postorder and
inorder traversal of tree the  resultant
binary tree will be
           1
       /      \
     2         3
   /  \      /  \
  4    5    6    7
   \
     8


Example 2:

Input:
N = 5
in[] = 9 5 2 3 4
post[] = 5 9 3 4 2
Output: 2 9 5 4 3
Explanation:
the  resultant binary tree will be
           2
        /     \
       9       4
        \     /
         5   3


Your Task:
You do not need to read input or print anything. Complete the function buildTree() which takes the inorder, postorder traversals and the number of nodes in the tree as input parameters and returns the root node of the newly constructed Binary Tree.
The generated output contains the preorder traversal of the constructed tree.



Expected Time Complexity: O(N2)
Expected Auxiliary Space: O(N)



Constraints:
1 <= N <= 103
1 <= in[i], post[i] <= 103



Company Tags
 Adobe Amazon Hike Microsoft

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


	Node*inpos(map<int, int>&mp, int post[], int start, int end, int&posIn) {

		// no need for int in[]....
		if (start > end) return 0;

		// Node *node = new Node;
		Node *node = (Node*)malloc(sizeof(Node));
		node->left = node->right = NULL;
		node->data = post[posIn]; posIn--;

		if (start == end) return node;

		int inIn = mp[node->data];// not using mp[post[posIn]] since posIn--...


		// HERE FIRST NODE->RIGHT.........
		node->right = inpos(mp, post, inIn + 1, end, posIn);
		node->left = inpos(mp, post, start, inIn - 1, posIn);

		return node;
	}

//Function to return a tree created from postorder and inoreder traversals.
	Node *buildTree(int in[], int post[], int n) {
		// Your code here

		map<int, int> mp;

		// int posIn = 0;
		int start = 0; int end = n;
		for (int i = 0 ; i < n ; i++ ) mp[in[i]] = i ;
		int posIn = n - 1 ;
		// it is very similar to preorder & inorder given
		// here we just iterate from backwords in postorder...

		return inpos(mp, post, start, end - 1, posIn);


	}


	/*

	ITERATIVE...


	Node* construct_tree(vector<char>& inorder, vector<char>& postorder)
	{
	    int postIndex = postorder.size()-1, inIndex = inorder.size()-1, flag = 0;
	    stack<Node*> st;

	    Node* root = new Node(postorder[postIndex]);
	    --postIndex;
	    st.push(root);
	    Node *prev = root;

	    while (postIndex >= 0)
	    {
	        if (!st.empty() && inorder[inIndex] == st.top()->val)
	        {
	            prev = st.top();
	            st.pop();
	            --inIndex;
	            flag = 1;
	        }
	        else
	        {
	            Node* node = new Node(postorder[postIndex]);
	            if (flag == 0)
	            {
	                prev->right = node;
	                prev = prev->right;
	            }
	            else
	            {
	                prev->left = node;
	                prev = prev->left;
	                flag = 0;
	            }
	            st.push(node);
	            --postIndex;
	        }
	    }
	    return root;
	}

	*/



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

