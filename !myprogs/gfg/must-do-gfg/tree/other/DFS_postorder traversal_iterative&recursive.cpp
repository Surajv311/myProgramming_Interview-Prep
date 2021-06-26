/*
///////////////////////////////////////////
//Question/Info

Postorder Traversal
Basic Accuracy: 59.22% Submissions: 49590 Points: 1
Given a binary tree, find the Postorder Traversal of it.
For Example, the postorder traversal of the following tree is:
5 10 39 1

        1
     /     \
   10     39
  /
5


Example 1:

Input:
        19
     /     \
    10      8
  /    \
 11    13
Output: 11 13 10 8 19
Example 2:

Input:
          11
         /
       15
      /
     7
Output: 7 15 11

Your Task:
You don't need to read input or print anything. Your task is to complete the function postOrder() that takes root node as input and returns an array containing the postorder traversal of the given Binary Tree.


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).


Constraints:
1 <= Number of nodes <= 105
0 <= Data of a node <= 106



Company Tags
 Morgan Stanley Snapdeal Walmart

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

		order(curr->left, ans);

		order(curr->right, ans);
		ans.push_back(curr->data);


	}
//Function to return a list containing the postorder traversal of the tree.
	vector <int> postOrder(Node * root)
	{
		// Your code here


		vector<int> ans;
		Node *curr = root;
		// lrp


		order(curr, ans);

		// APPROACH 2 - ITERATIVE

		//   if(curr==0) return {};

		//   stack<Node*> st1;
		//   stack<Node*> st2;

		//   st1.push(curr);

		//     while(!st1.empty()){

		//       Node* node = st1.top(); st1.pop();
		//       st2.push(node);
		//       if(node->left!=0){
		//           st1.push(node->left);
		//       }

		//       if(node->right!=0){
		//           st1.push(node->right);
		//       }

		//         }

		//     while(!st2.empty())
		//   {
		//       Node* x = st2.top();
		//       st2.pop();
		//       ans.push_back(x->data);
		//   }
		return ans;
	}

	/*

	ALSO USING ONLY ONE STACK:

	class Solution {
	public:
	    vector<int> postorderTraversal(Node* root) {
	        vector<int> ans;
	        Node *curr = root;
	        stack<Node*> st;
	        Node* prev = NULL;
	        while (curr or !st.empty()) {
	            if (curr) {
	                st.push(curr);
	                curr = curr -> left;
	            } else {
	               curr = st.top();
	                if (curr -> right==0 or curr -> right==prev) // using the condition when our node becomes parent in LRP...
	                 {
	                    ans.push_back(curr -> data);
	                    prev = curr;
	                    curr = 0 ; // to escape the if condition in beginning...
	                     st.pop();
	                } else {
	                    curr = curr -> right;
	                }
	            }
	        }
	        return ans;
	    }
	};

	*/



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

