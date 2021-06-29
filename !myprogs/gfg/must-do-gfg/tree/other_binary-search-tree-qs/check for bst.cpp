/*
///////////////////////////////////////////
//Question/Info

Check for BST
Easy Accuracy: 21.58% Submissions: 100k+ Points: 2
Given a binary tree. Check whether it is a BST or not.
Note: We are considering that BSTs can not contain duplicate Nodes.

Example 1:

Input:
    2
 /    \
1      3
Output: 1
Explanation:
The left subtree of root node contains node
with key lesser than the root node’s key and
the right subtree of root node contains node
with key greater than the root node’s key.
Hence, the tree is a BST.
Example 2:

Input:
  2
   \
    7
     \
      6
       \
        5
         \
          9
           \
            2
             \
              6
Output: 0
Explanation:
Since the node with value 7 has right subtree
nodes with keys less than 7, this is not a BST.
Your Task:
You don't need to read input or print anything. Your task is to complete the function isBST() which takes the root of the tree as a parameter and returns true if the given binary tree is BST, else returns false.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the BST).

Constraints:
0 <= Number of edges <= 100000

Company Tags
 Accolite Adobe Amazon Boomerang Commerce FactSet Flipkart Goldman Sachs GreyOrange Hike Linkedin MakeMyTrip MAQ Software Microsoft Ola Cabs OYO Rooms Qualcomm Samsung Snapdeal VMWare Walmart Wooker

author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

// #define int 		   long long int
#define sbit(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout << x << "\n";
#define ct2(x,y) 	   cout << x << " " << y << "\n";
#define tc(x) 		   cout << x << " ";
#define tc2(x,y) 	   cout << x << " " << y << " ";
#define forn(i,n) 	   for(int i = 0; i < (int)(n); ++i)
#define forx(i,x,n)    for(int i = x; i < (int)(n); ++i)
#define nfor(i,n)      for(int i = n-1; i >= 0; --i)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed << setprecision(y) << x
#define PI 			   3.1415926535897932384626433832795
#define MOD 		   1000000007 // (1e9+7)
#define pii 		   pair<int,int>
#define pis 		   pair<int,string>
#define vi  		   vector<int>
#define vii 		   vector<pii>
#define mii 		   map<int,int>
#define p_q            priority_queue // priority_queue<int> (&) priority_queue< int,vi,greater<int> >
#define _IOS      	   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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
	c_p_c();
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

		bool fun(Node*root , Node*min , Node*max) {

			if (root == 0) {
				return true;
			}

			if (min != 0 and root->data <= min->data) {
				return false;
			}

			if (max != 0 and root->data >= max->data) {
				return false;
			}

			bool left = fun(root->left, min, root);
			bool right = fun(root->right, root, max);

			return left and right;

		}


		//Function to check whether a Binary Tree is BST or not.
		bool isBST(Node* root)
		{
			// Your code here

			return fun(root, 0, 0);

		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}