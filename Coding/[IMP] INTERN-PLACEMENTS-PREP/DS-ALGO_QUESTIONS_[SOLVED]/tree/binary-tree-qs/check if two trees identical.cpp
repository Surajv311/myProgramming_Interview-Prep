/*
///////////////////////////////////////////
//Question/Info

Determine if Two Trees are Identical
Easy Accuracy: 52.24% Submissions: 100k+ Points: 2
Given two binary trees, the task is to find if both of them are identical or not.


Example 2:

Input:
     1          1
   /   \      /   \
  2     3    2     3
Output: Yes
Explanation: There are two trees both
having 3 nodes and 2 edges, both trees
are identical having the root as 1,
left child of 1 is 2 and right child
of 1 is 3.
Example 2:

Input:
    1       1
  /  \     /  \
 2    3   3    2
Output: No
Explanation: There are two trees both
having 3 nodes and 2 edges, but both
trees are not identical.

Your task:
Since this is a functional problem you don't have to worry about input, you just have to complete the function isIdentical() that takes two roots as parameters and returns true or false. The printing is done by the driver code.


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).


Constraints:
1 <= Number of nodes <= 105
1 <=Data of a node <= 105

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



	class Solution
	{
	public:
		//Function to check if two trees are identical.
		bool isIdentical(Node *r1, Node *r2)
		{
			//Your Code here
			if (r1 == NULL && r2 == NULL)
				return true;
			if (r1 == NULL || r2 == NULL)
				return false;

			bool data = (r1->data == r2->data);

			bool left = isIdentical(r1->left, r2->left);
			bool right = isIdentical(r1->right, r2->right);

			return (data && left && right);
		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

