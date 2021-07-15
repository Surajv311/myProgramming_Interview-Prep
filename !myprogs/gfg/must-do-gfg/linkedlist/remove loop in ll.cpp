/*
//////////////////////////////////////////////////////
//Question/Info

Remove loop in Linked List
Medium Accuracy: 47.96% Submissions: 100k+ Points: 4
Given a linked list of N nodes such that it may contain a loop.

A loop here means that the last node of the link list is connected to the node at position X. If the link list does not have any loop, X=0.

Remove the loop from the linked list, if it is present.


Example 1:

Input:
N = 3
value[] = {1,3,4}
X = 2
Output: 1
Explanation: The link list looks like
1 -> 3 -> 4
     ^    |
     |____|
A loop is present. If you remove it
successfully, the answer will be 1.

Example 2:

Input:
N = 4
value[] = {1,8,3,4}
X = 0
Output: 1
Explanation: The Linked list does not
contains any loop.

Your Task:
You don't need to read input or print anything. Your task is to complete the function removeLoop() which takes the head of the linked list as input parameter. Simply remove the loop in the list (if present) without disconnecting any nodes from the list.
Note: The generated output will be 1 if your submitted code is correct.


Expected time complexity : O(N)
Expected auxiliary space : O(1)


Constraints:
1 ≤ N ≤ 104

Company Tags
 Adobe Amazon Goldman Sachs Kuliza MakeMyTrip Microsoft Morgan Stanley Netskope Oracle Qualcomm Snapdeal VMWare Walmart

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
		//Function to remove a loop in the linked list.
		void removeLoop(Node* head)
		{
			// code here
			// just remove the loop without losing any nodes

			/* EASY ,,, JUST USE THE FLOYD ALGO AND CHANGE THE POINTER ADDRESSES...*/


			if (head == NULL or head->next == NULL) return;

			Node *slow = head;
			Node *fast = head;

			slow = slow->next;
			fast = fast->next->next;


			while (fast and fast->next) {
				if (slow == fast) break;
				slow = slow->next;
				fast = fast->next->next;
			}

			if (slow == fast) {

				if (slow == head) {
					while (slow->next != head) {
						slow = slow->next;
					}
					slow->next = 0;
				}

				else {
					slow = head;
					while (slow->next != fast->next) {
						slow = slow->next;
						fast = fast->next;
					}
					fast->next = 0;
				}
			}


		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////