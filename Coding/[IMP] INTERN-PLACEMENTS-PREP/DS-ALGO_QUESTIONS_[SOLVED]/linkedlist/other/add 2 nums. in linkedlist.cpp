/*
//////////////////////////////////////////////////////
//Question/Info

Add two numbers represented by linked lists
Easy Accuracy: 30.12% Submissions: 100k+ Points: 2
Given two numbers represented by two linked lists of size N and M. The task is to return a sum list. The sum list is a linked list representation of the addition of two input numbers from the last.

Example 1:

Input:
N = 2
valueN[] = {4,5}
M = 3
valueM[] = {3,4,5}
Output: 3 9 0
Explanation: For the given two linked
list (4 5) and (3 4 5), after adding
the two linked list resultant linked
list will be (3 9 0).
Example 2:

Input:
N = 2
valueN[] = {6,3}
M = 1
valueM[] = {7}
Output: 7 0
Explanation: For the given two linked
list (6 3) and (7), after adding the
two linked list resultant linked list
will be (7 0).
Your Task:
The task is to complete the function addTwoLists() which has node reference of both the linked lists and returns the head of the new list.

Expected Time Complexity: O(N+M)
Expected Auxiliary Space: O(Max(N,M))

Constraints:
1 <= N, M <= 5000

Company Tags
 Accolite Amazon Flipkart MakeMyTrip Microsoft Morgan Stanley Qualcomm Snapdeal

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
		//Function to add two numbers represented by linked list.


		struct Node* reverse(struct Node *head) {
			Node* curr = head;
			Node* prev = NULL;

			while (curr != NULL) {
				Node* next = curr->next;
				curr->next = prev;
				prev = curr;
				curr = next;
			}
			head = prev;

			return head;
		}

		struct Node* addTwoLists(struct Node* first, struct Node* second)
		{
			// code here

			Node* a = reverse(first);
			Node* b = reverse(second);

			Node* head = new Node(0);

			int carry = 0;
			Node* curr = head;

			while (a != NULL || b != NULL) {
				int x = (a == NULL) ? 0 : a->data;
				int y = (b == NULL) ? 0 : b->data;

				int sum = x + y + carry;
				carry = sum / 10;
				sum %= 10;

				curr->next = new Node(sum);
				curr = curr->next;

				if (a != NULL) a = a->next;
				if (b != NULL) b = b->next;
			}

			if (carry)
				curr->next = new Node(carry);

			return reverse(head->next);

		}

		/*

		//////////////////////////////////////////////////////////
		2. Add Two Numbers
		Medium

		12743

		2912

		Add to List

		Share
		You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

		You may assume the two numbers do not contain any leading zero, except the number 0 itself.



		Example 1:


		Input: l1 = [2,4,3], l2 = [5,6,4]
		Output: [7,0,8]
		Explanation: 342 + 465 = 807.
		Example 2:

		Input: l1 = [0], l2 = [0]
		Output: [0]
		Example 3:

		Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
		Output: [8,9,9,9,0,0,0,1]


		Constraints:

		The number of nodes in each linked list is in the range [1, 100].
		0 <= Node.val <= 9
		It is guaranteed that the list represents a number that does not have leading zeros.

		/////////////////////////////////////////////////////////////

		    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

		    ListNode* dhead = new ListNode();
		    ListNode* temp = dhead;
		    int carry,sum; carry=sum=0;

		    while(l1 or l2 or carry){
		        if(l1){
		            sum+=l1->val;
		            l1 = l1->next;
		        }

		        if(l2){
		            sum+=l2->val;
		            l2 = l2->next;
		        }

		        sum+=carry;
		        carry = sum/10;
		        ListNode *node = new ListNode(sum%10);
		        temp->next = node;
		        temp = temp->next;
		        sum = 0; // initializing back to 0...

		    }

		    return dhead->next;

		}

		*/
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////