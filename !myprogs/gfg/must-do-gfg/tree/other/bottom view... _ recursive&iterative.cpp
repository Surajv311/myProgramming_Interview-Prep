/*
///////////////////////////////////////////
//Question/Info

Bottom View of Binary Tree
Medium Accuracy: 45.32% Submissions: 73746 Points: 4
Given a binary tree, print the bottom view from left to right.
A node is included in bottom view if it can be seen when we look at the tree from bottom.

                      20
                    /    \
                  8       22
                /   \        \
              5      3       25
                    /   \
                  10    14

For the above tree, the bottom view is 5 10 3 14 25.
If there are multiple bottom-most nodes for a horizontal distance from root, then print the later one in level traversal. For example, in the below diagram, 3 and 4 are both the bottommost nodes at horizontal distance 0, we need to print 4.

                      20
                    /    \
                  8       22
                /   \     /   \
              5      3 4     25
                     /    \
                 10       14

For the above tree the output should be 5 10 4 14 25.


Example 1:

Input:
       1
     /   \
    3     2
Output: 3 1 2
Explanation:
First case represents a tree with 3 nodes
and 2 edges where root is 1, left child of
1 is 3 and right child of 1 is 2.

Thus nodes of the binary tree will be
printed as such 3 1 2.
Example 2:

Input:
         10
       /    \
      20    30
     /  \
    40   60
Output: 40 20 60 30
Your Task:
This is a functional problem, you don't need to care about input, just complete the function bottomView() which takes the root node of the tree as input and returns an array containing the bottom view of the given tree.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= Number of nodes <= 105
1 <= Data of a node <= 105


Note: The Input/Output format and Example given are used for the system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from the stdin/console. The task is to complete the function specified, and not to write the full code.

Company Tags
 Accolite Amazon CouponDunia Flipkart OYO Rooms Paytm Walmart

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



	void bottom(Node * curr, map<int, pair<int, int>> &mp, int dist, int level) {

		if (curr == 0) return ;

		if (mp.count(dist) == 0 or mp[dist].second < level)
		{
			mp[dist] = make_pair(curr->data, level);
			// {curr->data,level};
		}

		bottom(curr->left, mp, dist - 1, level + 1);
		bottom(curr->right, mp, dist + 1, level + 1);

	}

//Function to return a list containing the bottom view of the given tree.
	vector <int> bottomView(Node * root)
	{
		// Your Code Here


		// RECURSIVE.
		int dist = 0 ; int level = 0;
		map<int, pair<int, int>> mp;
		bottom(root, mp, dist, level);


		vector<int> ans;

		for (auto i : mp) {

			int node = i.second.first;
			ans.push_back(node);
		}

///////////////////////////////////////////////////////

// ITERATIVE

		/*
		  if(root==NULL) return {};

		      queue<pair<Node*,int>> q;
		      q.push({root,0}); // node & the horizontal distance...

		      map<int,int> mp; // dist,node val

		      while(!q.empty()){

		          Node* curr = q.front().first;
		          int dist = q.front().second;
		          q.pop();

		          // if(mp.count(dist)==0){

		          //in bottom view we are removing the condition
		          //because when we travers our node distance would be updated
		          //with the distance we have visited recently ~ last
		          //which would be the bottom distance...

		              mp[dist] = curr->data;
		          // }

		          if(curr->left) q.push({curr->left,dist-1});
		          if(curr->right) q.push({curr->right,dist+1});


		      }

		      vector<int> ans;

		      for (auto i : mp){
		          ans.push_back(i.second);
		      }
		     */
		return ans;
	}




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

