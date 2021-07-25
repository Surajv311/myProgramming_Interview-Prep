/*
//////////////////////////////////////////////////////
//Question/Info

Flattening a Linked List
Medium Accuracy: 33.91% Submissions: 60915 Points: 4
Given a Linked List of size N, where every node represents a sub-linked-list and contains two pointers:
(i) a next pointer to the next node,
(ii) a bottom pointer to a linked list where this node is head.
Each of the sub-linked-list is in sorted order.
Flatten the Link List such that all the nodes appear in a single level while maintaining the sorted order.
Note: The flattened list will be printed using the bottom pointer instead of next pointer.



Example 1:

Input:
5 -> 10 -> 19 -> 28
|     |     |     |
7     20    22   35
|           |     |
8          50    40
|                 |
30               45
Output:  5-> 7-> 8- > 10 -> 19-> 20->
22-> 28-> 30-> 35-> 40-> 45-> 50.
Explanation:
The resultant linked lists has every
node in a single level.
(Note: | represents the bottom pointer.)


Example 2:

Input:
5 -> 10 -> 19 -> 28
|          |
7          22
|          |
8          50
|
30
Output: 5->7->8->10->19->20->22->30->50
Explanation:
The resultant linked lists has every
node in a single level.

(Note: | represents the bottom pointer.)


Your Task:
You do not need to read input or print anything. Complete the function flatten() that takes the head of the linked list as input parameter and returns the head of flattened link list.



Expected Time Complexity: O(N*M)
Expected Auxiliary Space: O(1)



Constraints:
0 <= N <= 50
1 <= Mi <= 20
1 <= Element of linked list <= 103

Company Tags
 24*7 Innovation Labs Amazon Drishti-Soft Flipkart Goldman Sachs Microsoft Paytm Payu Qualcomm Snapdeal Visa


author: srj_v
//////////////////////////////////////////////////////
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

//////////////////////////////////////////////////////


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


	/* Node structure  used in the program

	struct Node{
		int data;
		struct Node * next;
		struct Node * bottom;

		Node(int x){
		    data = x;
		    next = NULL;
		    bottom = NULL;
		}

	};
	*/

	/*  Function which returns the  root of
	    the flattened linked list. */


	Node* merge(Node * l1, Node * l2)
	{

		Node*temp = new Node(0);
		Node*ans = temp;

		while (l1 and l2) {

			if (l1->data < l2->data) {

				temp->bottom = l1;
				temp = temp->bottom;
				l1 = l1->bottom;
				//NOTE...WE ARE MOVING TO BOTTOM ... NOT NEXT POINTER....
			}

			else {

				temp->bottom = l2;
				temp = temp->bottom;
				l2 = l2->bottom;

			}

		}

		// now if any left...

		if (l1) temp->bottom = l1;
		else temp->bottom = l2;

		return ans->bottom;


	}
	Node *flatten(Node * root)
	{
		// Your code here

//   base case...

		if (root == 0 or root->next == 0 ) return root;

// recursion...for list on right...

		root->next = flatten(root->next);

// now merging...

		root = merge(root, root->next);

		return root;

	}




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////