/*
///////////////////////////////////////////
//Question/Info

Vertical Traversal of Binary Tree
Medium Accuracy: 32.45% Submissions: 89617 Points: 4
Given a Binary Tree, find the vertical traversal of it starting from the leftmost level to the rightmost level.
If there are multiple nodes passing through a vertical line, then they should be printed as they appear in level order traversal of the tree.

Example 1:

Input:
           1
         /   \
       2       3
     /   \   /   \
   4      5 6      7
              \      \
               8      9
Output:
4 2 1 5 6 3 8 7 9
Explanation:

Example 2:

Input:
       1
    /    \
   2       3
 /    \      \
4      5      6
Output: 4 2 1 5 3 6
Your Task:
You don't need to read input or print anything. Your task is to complete the function verticalOrder() which takes the root node as input parameter and returns an array containing the vertical order traversal of the tree from the leftmost to the rightmost level. If 2 nodes lie in the same vertical level, they should be printed in the order they appear in the level order traversal of the tree.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 <= Number of nodes <= 5000

Company Tags
 Accolite Amazon BrowserStack Dell Flipkart Grofers MakeMyTrip Netskope Walmart Microsoft

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
		//Function to find the vertical order traversal of Binary Tree.

		vector<int> verticalOrder(Node *root)
		{
			//Your code here
			if (root == 0) return {};

			int minv = INT_MAX; int maxv = INT_MIN;

			map<int, vector<int>> mp;
			queue<pair<Node*, int>> q;

			q.push({root, 0});

			while (!q.empty())
			{
				Node* node = q.front().first ;
				int dist = q.front().second;
				q.pop();

				minv = min(minv, dist);
				maxv = max(maxv, dist);

				mp[dist].emplace_back(node->data);

				if (node->left) q.push({node->left, dist - 1});
				if (node->right) q.push({node->right, dist + 1});
			}

			//now calculating ans...

			vector<int> ans;

			while (minv <= maxv) {

				// if (mp.find (min_dist) != mp.end()) // for using unordered_map<>
				for (auto i : mp[minv]) {

					ans.push_back(i);

				}

				minv++;
			}

			return ans;

		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

