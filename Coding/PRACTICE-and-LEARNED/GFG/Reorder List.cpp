/*


Reorder List
Hard Accuracy: 49.92% Submissions: 31657 Points: 8
Given a singly linked list: A0→A1→…→An-1→An, reorder it to: A0→An→A1→An-1→A2→An-2→…
For example: Given 1->2->3->4->5 its reorder is 1->5->2->4->3.

Note: It is recommended do this in-place without altering the nodes' values.

Example 1:

Input:
LinkedList: 1->2->3
Output: 1 3 2
Example 2:

Input:
LinkedList: 1->7->3->4
Output: 1 4 7 3.
Your Task:
The task is to complete the function reorderList() which should reorder the list as required. The reorder list is automatically printed by the driver's code.

Note: Try to solve without using any auxilliary space.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 104

View Bookmarked Problems
Company Tags
 Amazon Microsoft OYO Rooms Intuit



*/


#include <stack>

void reorderList(Node* head) {
	// Your code here

	// finding length then we use stack to connect the ending nodes...

	Node*cur = head;
	stack<Node*> st;
	int l = 0;
	while (cur) {
		st.push(cur);
		cur = cur->next;
		l++;
	}


	// making curr, back to head
	cur = head;

	Node* end; Node* x;

	for (int i = 0 ; i < l / 2; i++) {

		end = st.top(); st.pop();
		x = cur->next;
		cur->next =  end;
		end->next = x;
		cur = x;

	}

	// finally making the cur->next as null, since now cur is in last node...
	cur->next = 0 ;

}







































