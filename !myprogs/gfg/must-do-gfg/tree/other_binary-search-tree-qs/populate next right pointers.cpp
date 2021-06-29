/*
///////////////////////////////////////////
//Question/Info

116. Populating Next Right Pointers in Each Node
Medium

3689

171

Add to List

Share
You are given a perfect binary tree where all leaves are on the same level, and every parent has two children. The binary tree has the following definition:

struct Node {
  int val;
  Node *left;
  Node *right;
  Node *next;
}
Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL.

Initially, all next pointers are set to NULL.



Follow up:

You may only use constant extra space.
Recursive approach is fine, you may assume implicit stack space does not count as extra space for this problem.


Example 1:



Input: root = [1,2,3,4,5,6,7]
Output: [1,#,2,3,#,4,5,6,7,#]
Explanation: Given the above perfect binary tree (Figure A), your function should populate each next pointer to point to its next right node, just like in Figure B. The serialized output is in level order as connected by the next pointers, with '#' signifying the end of each level.


Constraints:

The number of nodes in the given tree is less than 4096.
-1000 <= node.val <= 1000

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

		void recur(Node*l, Node*r) {


			if (l == 0) return;

			l->next = r;

			recur(l->left, l->right);

			recur(l->right, r->left);
			recur(r->left, r->right);

		}

		Node* connect(Node* root) {

			// recursive

			if (root == 0) return 0;

			recur(root->left, root->right);


			/*
			// iterative approach

			if(root==0) return 0;

			queue<Node*> q;
			q.push(root);

			while(!q.empty()){

			    int sz = q.size();

			    while(sz--){
			        Node*curr = q.front(); q.pop();


			        if(sz!=0) curr->next = q.front(); // q has been popped, so the new front is the right node...
			        if(curr->left) q.push(curr->left);
			          if(curr->right) q.push(curr->right);

			    }


			}

			*/

			return root;
		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

