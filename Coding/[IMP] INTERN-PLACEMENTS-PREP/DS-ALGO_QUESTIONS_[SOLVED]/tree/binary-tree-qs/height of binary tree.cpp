/*
///////////////////////////////////////////
//Question/Info

Height of Binary Tree
Medium Accuracy: 65.76% Submissions: 100k+ Points: 4
Given a binary tree, find its height.


Example 1:

Input:
     1
    /  \
   2    3
Output: 2
Example 2:

Input:
  2
   \
    1
   /
 3
Output: 3

Your Task:
You don't need to read input or print anything. Your task is to complete the function height() which takes root node of the tree as input parameter and returns an integer denoting the height of the tree. If the tree is empty, return 0.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


Constraints:
1 <= Number of nodes <= 105
1 <= Data of a node <= 105

Company Tags
 Amazon Cadence India CouponDunia D-E-Shaw FactSet FreeCharge MakeMyTrip Monotype Solutions Snapdeal Synopsys Teradata VMWare Zoho Microsoft


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
		//Function to find the height of a binary tree.
		int height(struct Node* node) {
			// code here
			if (node == 0) return 0;

			// recursive...
			// int lmax = height(node->left);
			// int rmax = height(node->right);

			// return max(lmax,rmax) +1 ;

			///*

			//  iterative:

			queue<Node*> q; q.push(node);
			int h = 0;

			while (!q.empty())
			{

				int sz = q.size();
				h++;
				while (sz--) {
					Node* curr = q.front();
					q.pop();

					if (curr->left) q.push(curr->left);
					if (curr->right) q.push(curr->right);

				}

			}

			return h;
			// */

		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

