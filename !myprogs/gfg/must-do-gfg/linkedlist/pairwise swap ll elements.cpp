/*
//////////////////////////////////////////////////////
//Question/Info

Pairwise swap elements of a linked list
Easy Accuracy: 43.06% Submissions: 63125 Points: 2
Given a singly linked list of size N. The task is to swap elements in the linked list pairwise.
For example, if the input list is 1 2 3 4, the resulting list after swaps will be 2 1 4 3.
Note: You need to swap the nodes, not only the data. If only data is swapped then driver will print -1.

Example 1:

Input:
LinkedList: 1->2->2->4->5->6->7->8
Output: 2 1 4 2 6 5 8 7
Explanation: After swapping each pair
considering (1,2), (2, 4), (5, 6).. so
on as pairs, we get 2, 1, 4, 2, 6, 5,
8, 7 as a new linked list.


Example 1:

Input:
LinkedList: 1->3->4->7->9->10->1
Output: 3 1 7 4 10 9 1
Explanation: After swapping each pair
considering (1,3), (4, 7), (9, 10).. so
on as pairs, we get 3, 1, 7, 4, 10, 9,
1 as a new linked list.
Your Task:
The task is to complete the function pairWiseSwap() which takes the head node as the only argument and returns the head of modified linked list.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 103

Company Tags
 Amazon Intuit Microsoft Moonfrog Labs

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


	class Solution
	{
	public:
		Node* pairWiseSwap(struct Node* head)
		{
			// The task is to complete this method

			// its similar to reverse linkedlist in 'k' groups...

			Node* temp = head;
			Node* temp1;
			Node* prev = head;
			if (head == NULL || head->next == NULL) {
				return head;
			}
			head = temp->next;
			while (temp != NULL) {
				if (temp->next == NULL) {
					return head;
				}
				temp1 = temp->next->next;
				prev->next = temp->next;
				temp->next->next = temp;
				temp->next = temp1;
				prev = temp;
				temp = temp1;
			}
			return head;
		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////