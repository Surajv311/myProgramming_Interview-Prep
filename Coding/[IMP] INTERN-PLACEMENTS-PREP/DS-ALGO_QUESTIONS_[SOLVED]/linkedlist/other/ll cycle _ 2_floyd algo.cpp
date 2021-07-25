/*
//////////////////////////////////////////////////////
//Question/Info

142. Linked List Cycle II
Medium

4605

332

Add to List

Share
Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Notice that you should not modify the linked list.



Example 1:


Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1
Explanation: There is a cycle in the linked list, where tail connects to the second node.
Example 2:


Input: head = [1,2], pos = 0
Output: tail connects to node index 0
Explanation: There is a cycle in the linked list, where tail connects to the first node.
Example 3:


Input: head = [1], pos = -1
Output: no cycle
Explanation: There is no cycle in the linked list.


Constraints:

The number of the nodes in the list is in the range [0, 104].
-105 <= Node.val <= 105
pos is -1 or a valid index in the linked-list.

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


	class Solution {
	public:
		ListNode *detectCycle(ListNode *head) {
//         hashtable also used along with set.. elements pushed to set to check if cycle exists or not... since the node would be revisited..


			if (head == 0 or head->next == 0) return 0;

//         its floyd algo application... easy proof....

			ListNode* slow = head;
			ListNode* fast = head;

			bool flag = false;

			while (fast->next and fast->next->next) {

				slow = slow->next;
				fast = fast->next->next;

				if (slow == fast) {
					flag = true;  break;
				}

			}

//         slow and fast determined...
//         now place back fast to start & iterate one step for both slow and fast

			if (flag) {
				fast = head;
				while (slow != fast) {
					slow = slow->next;
					fast = fast->next;
				}

				ListNode * ans = fast;

				return ans;
			}

			return 0;

		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////