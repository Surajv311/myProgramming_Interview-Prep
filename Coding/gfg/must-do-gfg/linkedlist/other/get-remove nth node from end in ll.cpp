/*
//////////////////////////////////////////////////////
//Question/Info

Nth node from end of linked list
Easy Accuracy: 46.6% Submissions: 100k+ Points: 2
Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.

Example 1:

Input:
N = 2
LinkedList: 1->2->3->4->5->6->7->8->9
Output: 8
Explanation: In the first example, there
are 9 nodes in linked list and we need
to find 2nd node from end. 2nd node
from end os 8.
Example 2:

Input:
N = 5
LinkedList: 10->5->100->5
Output: -1
Explanation: In the second example, there
are 4 nodes in the linked list and we
need to find 5th from the end. Since 'n'
is more than the number of nodes in the
linked list, the output is -1.
Your Task:
The task is to complete the function getNthFromLast() which takes two arguments: reference to head and N and you need to return Nth from the end or -1 in case node doesn't exist..

Note:
Try to solve in single traversal.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= L <= 106
1 <= N <= 106

Company Tags
 Accolite Adobe Amazon Citicorp Epic Systems FactSet Hike MAQ Software Monotype Solutions Morgan Stanley OYO Rooms Qualcomm Samsung Snapdeal


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


	int getNthFromLast(Node * head, int n)
	{
		// Your code here

		Node* node = head;
		Node* temp = head;


		while (n--) {
			if (temp == NULL)
				return -1;

			temp = temp->next;
		}

		while (temp != NULL) {
			node = node->next;
			temp = temp->next;
		}

		return node->data;

	}

	/*

	 Remove Nth Node From End of List
	Medium

	6015

	334

	Add to List

	Share
	Given the head of a linked list, remove the nth node from the end of the list and return its head.



	Example 1:


	Input: head = [1,2,3,4,5], n = 2
	Output: [1,2,3,5]
	Example 2:

	Input: head = [1], n = 1
	Output: []
	Example 3:

	Input: head = [1,2], n = 1
	Output: [1]


	Constraints:

	The number of nodes in the list is sz.
	1 <= sz <= 30
	0 <= Node.val <= 100
	1 <= n <= sz

	///////////////////////////////////////////////////

	class Solution {
	public:
	    ListNode* removeNthFromEnd(ListNode* head, int n) {

	// unoptimised : traversing whole ll and then subtracting the total length - given (n) ... and then againg traversing to change the links...~o(2n)

	// optimised : take two pointers: fast and slow.. slow should be at 0 and move fast to given 'n' places ahead of slow...now move both fast and slow pointers one by one, with this we are iterating only once and once our slow reaches the 'n' position (which is from back...) then we interchange the links of the slow pointer... and delete it... to avoid memory leak...~o(n)

	        ListNode * node = new ListNode();
	        node -> next = head;
	        ListNode* fast = node;
	        ListNode* slow = node;

	        for(int i = 1; i <= n; i++)
	            fast = fast->next;

	        while(fast->next != NULL)
	        {
	            fast = fast->next;
	            slow = slow->next;
	        }

	        slow->next = slow->next->next;

	        return node->next;

	    }
	};

	*/



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////