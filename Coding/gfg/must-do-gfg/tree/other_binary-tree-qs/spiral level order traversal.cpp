/*
///////////////////////////////////////////
//Question/Info

Level order traversal in spiral form
Easy Accuracy: 43.27% Submissions: 90699 Points: 2
Complete the function to find spiral order traversal of a tree. For below tree, function should return 1, 2, 3, 4, 5, 6, 7.


Example 1:

Input:
      1
    /   \
   3     2
Output:1 3 2

Example 2:

Input:
           10
         /     \
        20     30
      /    \
    40     60
Output: 10 20 30 60 40
Your Task:
The task is to complete the function findSpiral() which takes root node as input parameter and returns the elements in spiral form of level order traversal as a list. The newline is automatically appended by the driver code.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
0 <= Number of nodes <= 105
0 <= Data of a node <= 105

Company Tags
 Accolite Adobe Amazon Flipkart Hike Housing.com MakeMyTrip Microsoft Morgan Stanley Ola Cabs Payu Teradata Walmart

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


//Function to return a list containing the level order traversal in spiral form.
	vector<int> findSpiral(Node * root)
	{
		//Your code here

		// approach 1
		if (root == NULL) return {};

		stack<int> st; queue<Node*> q; q.push(root);
		bool flag = false; vector<int> ans;
		while (!q.empty()) {

			int sz = q.size();

			while (sz--) {

				Node *curr = q.front();
				q.pop();

				if (flag == true) ans.push_back(curr->data);

				// if flag false
				else st.push(curr->data);

				if (curr->left) q.push(curr->left);
				if (curr->right) q.push(curr->right);

			}

			if (flag == false) {
				while (!st.empty())
				{
					ans.push_back(st.top());
					st.pop();
				}
			}

			flag = !flag; // toggle....

		}

		return ans;

	}

	/*
	APPROACH 2 :

	int height(Node *node)
	{
	    if (node == NULL)
	       return -1;
	    int lheight = height(node->left);
	    int rheight = height(node->right);
	    return max(lheight, rheight) + 1;
	}

	void display(Node *node, int level, int ltr)
	{
	    if (node == NULL)
	       return;
	    else if (level == 0)
	       cout << node->val << " ";
	    else if (level > 0)
	    {
	        if (ltr)
	        {
	            display(node->left, level-1, ltr);
	            display(node->right, level-1, ltr);
	        }
	        else
	        {
	            display(node->right, level-1, ltr);
	            display(node->left, level-1, ltr);
	        }
	    }
	}

	void fun(Node *root)
	{
	    bool ltr = false;
	    for (int level=0; level <= height(root); level++)
	    {
	        display(root, level, ltr);
	        ltr = !ltr;
	    }
	}
	*/

	/*

	APPROACH 3

	void fun(Node *root)
	{
	    stack<Node*> st1, st2;
	    st1.push(root);
	    Node *curr = NULL;

	    while (!st1.empty() || st2.empty())
	    {
	        while (!st1.empty())
	        {
	            curr = st1.top();
	            st1.pop();
	            cout << curr->val << " ";

	           ///// NOTE WE ARE PUSHING RIGHT FIRST... ////

	            if (curr->right != NULL)
	                st2.push(curr->right);


			/// LEFT IS PUSHED LATER...
	            if (curr->left != NULL)
	                st2.push(curr->left);
	        }
	        while (!st2.empty())
	        {
	            curr = st2.top();
	            st2.pop();
	            cout << curr->val << " ";
	            if (curr->left != NULL)
	                st1.push(curr->left);
	            if (curr->right != NULL)
	                st1.push(curr->right);
	        }
	    }
	}
	*/

	/* approach 4 using deque....*/


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

