/*
///////////////////////////////////////////
//Question/Info

Count Leaves in Binary Tree
Basic Accuracy: 63.56% Submissions: 59058 Points: 1
Given a Binary Tree of size N , You have to count leaves in it. For example, there are two leaves in following tree

        1
     /      \
   10      39
  /
5



Example 1:


Input:
Given Tree is
               4
             /   \
            8     10
           /     /   \
          7     5     1
         /
        3
Output:
3
Explanation:
Three leaves are 3 , 5 and 1.


Your Task:
You don't have to take input. Complete the function countLeaves() that takes root node of given tree as parameter and returns the count of leaves in tree . The printing is done by the driver code.


Constraints:
1<= N <= 104



Note:The Input/Ouput format and Example given below is used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console, and should not print anything on stdout/console. The task is to complete the function specified, and not to write the full code.

Company Tags
 Ola Cabs Samsung

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


	int countL(Node * root, int &count) {
		if (root == 0) {
			return 0;
		}

		if (root->left == 0 and root->right == 0) count++;

		countL(root->left, count);
		countL(root->right, count);
	}

	int countLeaves(Node * root)
	{
		// Your code here
		int count =  0 ;
		countL(root, count);

		return count;
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

