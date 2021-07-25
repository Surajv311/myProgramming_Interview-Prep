/*
///////////////////////////////////////////
//Question/Info

Lowest Common Ancestor in a Binary Tree
Medium Accuracy: 39.75% Submissions: 66994 Points: 4
Given a Binary Tree with all unique values and two nodes value n1 and n2. The task is to find the lowest common ancestor of the given two nodes. We may assume that either both n1 and n2 are present in the tree or none of them is present.

Example 1:

Input:
n1 = 2 , n2 =  3
     1
   /  \
  2    3
Output: 1
Explanation:
LCA of 2 and 3 is 1.
Example 2:

Input:
n1 = 3 , n2 = 4
         5
        /
       2
     /  \
    3    4
Output: 2
Explanation:
LCA of 3 and 4 is 2.

Your Task:
You don't have to read input or print anything. Your task is to complete the function lca() that takes nodes, n1, and n2 as parameters and returns LCA node as output.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of Tree).

Constraints:
1 ≤ Number of nodes ≤ 105
1 ≤ Data of a node ≤ 105

Company Tags
 Accolite Amazon American Express Cisco Expedia Flipkart MakeMyTrip Microsoft OYO Rooms PayPal Payu Snapdeal Times Internet Twitter Google

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
		//Function to return the lowest common ancestor in a Binary Tree.
		Node* lca(Node* node , int n1 , int n2 )
		{
			//Your code here

			if (node == 0) return 0;

			if (node->data == n1 or node->data == n2) return node;

			Node* lnode = lca(node->left, n1, n2);
			Node* rnode = lca(node->right, n1, n2);

			if (lnode != 0 and rnode != 0) return node;
			else if (lnode != 0) return lnode;
			else return rnode;

		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

