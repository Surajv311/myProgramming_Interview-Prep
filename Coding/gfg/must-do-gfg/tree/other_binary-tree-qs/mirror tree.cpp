/*
///////////////////////////////////////////
//Question/Info

Mirror Tree
Easy Accuracy: 63.43% Submissions: 87416 Points: 2
Given a Binary Tree, convert it into its mirror.
MirrorTree1

Example 1:

Input:
      1
    /  \
   2    3
Output: 2 1 3
Explanation: The tree is
   1    (mirror)  1
 /  \    =>      /  \
3    2          2    3
The inorder of mirror is 2 1 3
Example 2:

Input:
      10
     /  \
    20   30
   /  \
  40  60
Output: 30 10 60 20 40
Explanation: The tree is
      10               10
    /    \  (mirror) /    \
   20    30    =>   30    20
  /  \                   /   \
 40  60                 60   40
The inroder traversal of mirror is
30 10 60 20 40.
Your Task:
Just complete the function mirror() that takes node as paramter  and convert it into its mirror. The printing is done by the driver code only.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 ≤ Number of nodes ≤ 105
1 ≤ Data of a node ≤ 105

Company Tags
 Accolite Adobe Amazon Belzabar EBay Goldman Sachs Microsoft Morgan Stanley Myntra Ola Cabs Paytm PropTiger Samsung SAP Labs Snapdeal VMWare Walmart Google


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
		// Function to convert a binary tree into its mirror tree.
		void mirror(Node* node) {
			// code here

			// converting it to its mirror
			if (node == 0) return;

			mirror(node->left);
			mirror(node->right);
			swap(node->left, node->right);


		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

