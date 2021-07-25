/*
///////////////////////////////////////////
//Question/Info

Top View of Binary Tree
Medium Accuracy: 32.3% Submissions: 77231 Points: 4
Given below is a binary tree. The task is to print the top view of binary tree. Top view of a binary tree is the set of nodes visible when the tree is viewed from the top. For the given below tree

       1
    /     \
   2       3
  /  \    /   \
4    5  6   7

Top view will be: 4 2 1 3 7
Note: Return nodes from leftmost node to rightmost node.

Example 1:

Input:
      1
   /    \
  2      3
Output: 2 1 3
Example 2:

Input:
       10
    /      \
  20        30
 /   \    /    \
40   60  90    100
Output: 40 20 10 30 100
Your Task:
Since this is a function problem. You don't have to take input. Just complete the function topView() that takes root node as parameter and returns a list of nodes visible from the top view from left to right. Print endline after end of printing the top view.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N).

Constraints:
1 ≤ N ≤ 105
1 ≤ Node Data ≤ 105


Note:The Input/Ouput format and Example given are used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.

Company Tags
 Walmart Ola Cabs Paytm

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


		void top(Node*curr, map<int, pair<int, int>> &mp, int dist, int level) {

			if (curr == 0) return ;

			if (mp.count(dist) == 0 or mp[dist].second > level)
			{
				mp[dist] = make_pair(curr->data, level);
				// {curr->data,level};
			}

			top(curr->left, mp, dist - 1, level + 1);
			top(curr->right, mp, dist + 1, level + 1);

		}

		//Function to return a list of nodes visible from the top view
		//from left to right in Binary Tree.
		vector<int> topView(Node *root)
		{
			//Your code here


			// RECURSIVE
			// int dist = 0 ; int level = 0;
			//  map<int,pair<int,int>> mp;
			// top(root,mp,dist,level);


			//  vector<int> ans;

			// for (auto i : mp){

			//     int node = i.second.first;
			//     ans.push_back(node);
			// }

			/////////////////////////////////////////////////////

			// ITERATIVE

			///*
			if (root == NULL) return {};

			queue<pair<Node*, int>> q;
			q.push({root, 0}); // node & the horizontal distance...

			map<int, int> mp; // dist,node val

			while (!q.empty()) {

				Node* curr = q.front().first;
				int dist = q.front().second;
				q.pop();

				if (mp.count(dist) == 0) {
					// if distance doesn't exist...
					mp[dist] = curr->data;
				}

				if (curr->left) q.push({curr->left, dist - 1});
				if (curr->right) q.push({curr->right, dist + 1});


			}

			vector<int> ans;

			for (auto i : mp) {
				ans.push_back(i.second);
			}
			//  */

			return ans;
		}

	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

