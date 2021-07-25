/*
///////////////////////////////////////////
//Question/Info

Diameter of Binary Tree
Easy Accuracy: 50.01% Submissions: 100k+ Points: 2
Given a Binary Tree, find diameter of it.

////NOTE :
The diameter of a tree is the number of nodes on the
longest path between two end nodes in the tree.
The diagram below shows two trees each with diameter
nine, the leaves that form the ends of a longest
path are shaded (note that there is more than one
path in each tree of length nine, but no
path longer than nine nodes).


Example 1:

Input:
       1
     /  \
    2    3
Output: 3
Example 2:

Input:
         10
        /   \
      20    30
    /   \
   40   60
Output: 4
Your Task:
You need to complete the function diameter() that takes root as parameter and returns the diameter.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 <= Number of nodes <= 10000
1 <= Data of a node <= 1000



Company Tags
 Amazon Cadence India Directi MakeMyTrip Microsoft Oracle OYO Rooms Philips PropTiger Salesforce Snapdeal VMWare Google


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
		// Function to return the diameter of a Binary Tree.
		int height(Node*root, int &d) {
			if (root == 0) return 0;

			int lh = height(root->left, d);
			int rh = height(root->right, d);

			d = max(d, lh + rh + 2);

			return max(lh, rh) + 1;
		}

		int diameter(Node* root) {
			// Your code here
			int d = 0 ;
			height(root, d);
			return d - 1; // could return d...
		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

