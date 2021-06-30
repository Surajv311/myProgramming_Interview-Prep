/*
///////////////////////////////////////////
//Question/Info

Binary Tree to DLL
Hard Accuracy: 41.34% Submissions: 66281 Points: 8
Given a Binary Tree (BT), convert it to a Doubly Linked List(DLL) In-Place. The left and right pointers in nodes are to be used as previous and next pointers respectively in converted DLL. The order of nodes in DLL must be same as Inorder of the given Binary Tree. The first node of Inorder traversal (leftmost node in BT) must be the head node of the DLL.

TreeToList

Example 1:

Input:
      1
    /  \
   3    2
Output:
3 1 2
2 1 3
Explanation: DLL would be 3<=>1<=>2
Example 2:

Input:
       10
      /   \
     20   30
   /   \
  40   60
Output:
40 20 60 10 30
30 10 60 20 40
Explanation:  DLL would be
40<=>20<=>60<=>10<=>30.
Your Task:
You don't have to take input. Complete the function bToDLL() that takes root node of the tree as a parameter and returns the head of DLL . The driver code prints the DLL both ways.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(H).
Note: H is the height of the tree and this space is used implicitly for recursion stack.

Constraints:
1 <= Number of nodes <= 105
1 <= Data of a node <= 105

Company Tags
 Accolite Amazon Goldman Sachs Microsoft Morgan Stanley Salesforce Snapdeal

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


	class Solution
	{
	public:

		void dll(Node*root, Node* &head, Node*&prev, bool &flag) {
			if (root == 0) return;

			dll(root->left, head, prev, flag);

			// for the first case when we reach the leftmost pointer...
			if (flag) {
				//  we make this as our first element in doubly linkedlist...

				prev = root;
				head = root;
				flag = false; // switching...

			}

			else {
				// now for rest cases since now flag is false...

				prev->right = root;
				prev->right->left = prev; // back connection...
				prev = prev->right;

			}

			// since inorder - LPR ...
			// recursion for L done, P data analysed..now recursion for R...

			dll(root->right, head, prev, flag);

		}

		//Function to convert binary tree to doubly linked list and return it.
		Node * bToDLL(Node *root)
		{
			// your code here

			//  just do inorder traversal & solve...
			bool flag = true;
			Node*prev = 0;
			Node*head = 0;
			dll(root, head, prev, flag); // passing by reference...

			return head;
		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

