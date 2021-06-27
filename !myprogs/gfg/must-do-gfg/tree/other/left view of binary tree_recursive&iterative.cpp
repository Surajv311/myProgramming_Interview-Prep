/*
///////////////////////////////////////////
//Question/Info

Left View of Binary Tree
Easy Accuracy: 37.86% Submissions: 100k+ Points: 2
Given a Binary Tree, print Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. The task is to complete the function leftView(), which accepts root of the tree as argument.

Left view of following tree is 1 2 4 8.

          1
       /     \
     2        3
   /     \    /    \
  4     5   6    7
   \
     8

Example 1:

Input:
   1
 /  \
3    2
Output: 1 3

Example 2:

Input:

Output: 10 20 40
Your Task:
You just have to complete the function leftView() that prints the left view. The newline is automatically appended by the driver code.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
0 <= Number of nodes <= 100
1 <= Data of a node <= 1000

Company Tags
 Accolite Amazon Flipkart Knowlarity MakeMyTrip Ola Cabs Open Solutions OYO Rooms Paytm Qualcomm Samsung Snapdeal Twitter


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


	/* A binary tree node

	struct Node
	{
	    int data;
	    struct Node* left;
	    struct Node* right;

	    Node(int x){
	        data = x;
	        left = right = NULL;
	    }
	};
	 */

	void fleft(Node * currN, int &currL, int level,  vector<int> &ans) {

		if (currN == NULL) return;
		if (currL < level) {
			ans.push_back(currN->data);
			currL = level;
		}

		fleft(currN->left, currL , level + 1 , ans);
		fleft(currN->right, currL , level + 1 , ans);
		/// for the currN->right call ,our currL becomes
		// equal to level... hence our data is not push_back...

		/*

		for right view of tree, recursive approach:
		fun(currN->right,,,)
		fun(currN->left,,,)

		*/

		return ;

	}

//Function to return a list containing elements of left view of the binary tree.
	vector<int> leftView(Node * root)
	{
		// Your code here

		if (root == NULL) return {};

		vector<int> ans;

		int currL = -1;
		Node*currN = root;

		fleft(currN, currL, 0, ans);


//   queue<Node*> q;
//   q.push(currN);

//   while(!q.empty()){

//       int sz = q.size();

//       ans.push_back(q.front()->data); // pushing the leftmost node...

//       // now removing the nodes..from the level...

//       while(sz--){

//           Node* node = q.front();
//           q.pop();

//           if(node->left) q.push(node->left);
//           if(node->right) q.push(node->right);


//       }

//   }


		/*

		for right view of tree, iterative approach:

		all same, just :
		ans.push_back(q.back()->data); // thats it!

		*/

		return ans;

	}





// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}