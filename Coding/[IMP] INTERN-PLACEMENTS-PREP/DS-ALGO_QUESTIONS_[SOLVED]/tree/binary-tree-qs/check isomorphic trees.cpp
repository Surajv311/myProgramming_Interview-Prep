/*
///////////////////////////////////////////
//Question/Info

Check if Tree is Isomorphic
Easy Accuracy: 50.16% Submissions: 31493 Points: 2
Given two Binary Trees. Check whether they are Isomorphic or not.

Note:
Two trees are called isomorphic if one can be obtained from another by a series of flips, i.e. by swapping left and right children of several nodes. Any number of nodes at any level can have their children swapped. Two empty trees are isomorphic.
For example, the following two trees are isomorphic with the following sub-trees flipped: 2 and 3, NULL and 6, 7 and 8.
ISomorphicTrees

Example 1:

Input:
 T1    1     T2:   1
     /   \        /  \
    2     3      3    2
   /            /
  4            4
Output: No

Example 2:

Input:
T1    1     T2:    1
    /  \         /   \
   2    3       3     2
  /                    \
  4                     4
Output: Yes
Your Task:
You don't need to read input or print anything. Your task is to complete the function isomorphic() that takes the root nodes of both the Binary Trees as its input and returns True if the two trees are isomorphic. Else, it returns False. (The driver code will print Yes if the returned values are true, otherwise false.)



Expected Time Complexity: O(min(M, N)) where M and N are the sizes of the two trees.
Expected Auxiliary Space: O(min(H1, H2)) where H1 and H2 are the heights of the two trees.

Constraints:
1<=Number of nodes<=105

Company Tags
 Amazon Microsoft

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
		// Return True if the given trees are isomorphic. Else return False.
		bool isIsomorphic(Node *root1, Node *root2)
		{
			//add code here.

			if (root1 == 0 and root2 == 0) return true; // or also root1 == root2...
			if (root1 == 0 or root2 == 0) return false; // means an imbalance of node values...only one of them is zero not other...
			if (root1->data != root2->data) return false; // even if one not equal then return false..

			bool a = isIsomorphic(root1->left, root2->left) and isIsomorphic(root1->right, root2->right);
			bool b = isIsomorphic(root1->left, root2->right) and isIsomorphic(root1->right, root2->left);

			return a or b;


		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

