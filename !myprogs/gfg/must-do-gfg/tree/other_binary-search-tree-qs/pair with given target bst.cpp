/*
///////////////////////////////////////////
//Question/Info

Find a pair with given target in BST
Medium Accuracy: 47.17% Submissions: 25663 Points: 4
Given a Binary Search Tree and a target sum. Check whether there's a pair of Nodes in the BST with value summing up to the target sum.

Example 1:

Input:
        2
      /   \
     1     3
sum = 5
Output: 1
Explanation:
Nodes with value 2 and 3 sum up to 5.
Example 2:

Input:
           6
          /
         5
        /
       3
     /  \
    1    4
sum = 2
Output: 0
Explanation:
There's no pair that sums up to 2.

Your Task:
You don't need to read input or print anything. Your task is to complete the function isPairPresent() that takes a root node and a target value as a parameter and returns 1 if there's a pair of Nodes in the BST with values summing up to the target sum, else returns 0.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the BST).

Constraints:
1<=Number of Nodes<=100000
1<=Sum<=1000005

Company Tags
Amazon OYO Rooms Snapdeal VMWare Microsoft Google

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
		// root : the root Node of the given BST
		// target : the target sum


		// unordered_set<int> s;

		// int findPair(struct Node *root, int target){

		// if(root==0) return 0;

		// if(findPair(root->left,target)) return true;

		// if(s.find((target- root->data)) !=s.end()) return true;
		// // not using abs(target-root->data)... X
		// else s.insert(root->data);

		// return findPair(root->right,target);

		// }

		void leftP(Node* root, stack<Node*> &st1) {

			while (root) {
				st1.push(root);
				root = root->left;
			}

		}

		void rightP(Node* root, stack<Node*> &st2) {

			while (root) {
				st2.push(root);
				root = root->right;
			}

		}

		int isPairPresent(struct Node *root, int target)
		{
			//add code here.

			// recursive
			// return findPair(root,target);

			// iterative

			if (root == 0) return 0 ;
			stack<Node*> st1;
			stack<Node*> st2;

			leftP(root, st1); rightP(root, st2);

			Node* low = st1.top(); Node* high = st2.top();

			bool flag = false;

			while (low and high and low->data < high->data)
			{
				int val = low->data + high->data;

				if (val < target) {
					// increase the low value...
					leftP(low->right, st1);
					low = st1.top(); st1.pop();

				}

				else if (val > target) {
					// decrease high value...
					rightP(high->left, st2);
					high = st2.top(); st2.pop();
				}

				else {
					flag = true;
					break;
				}

			}

			return flag;

		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

