/*
///////////////////////////////////////////
//Question/Info

Preorder Traversal
Basic Accuracy: 59.04% Submissions: 53954 Points: 1
Given a binary tree, find its preorder traversal.

Example 1:

Input:
        1
      /
    4
  /    \
4       2
Output: 1 4 4 2
Example 2:

Input:
       6
     /   \
    3     2
     \   /
      1 2
Output: 6 3 1 2 2

Your Task:
You just have to complete the function preorder() which takes the root node of the tree as input and returns an array containing the preorder traversal of the tree.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= Number of nodes <= 104
0 <= Data of a node <= 105

Company Tags
 Amazon Walmart Microsoft

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




	void order(Node * curr, vector<int> &ans) {

		if (curr == 0) {
			return;
		}

		ans.push_back(curr->data);
		order(curr->left, ans);

		order(curr->right, ans);


	}

//Function to return a list containing the preorder traversal of the tree.
	vector <int> preorder(Node * root)
	{
		// Your code here

		vector<int> ans;
		Node *curr = root;
		// plr


		order(curr, ans);


		// APPROACH 2 - ITERATIVE

		//   stack<Node*> st;

		//     while(!st.empty() or curr){

		//         if(curr){

		//              ans.push_back(curr->data);
		//             st.push(curr);
		//             curr = curr->left;

		//         }

		//         else{

		//             curr = st.top();
		//             st.pop();
		//             curr = curr->right;

		//         }
		//     }

		return ans;


	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

