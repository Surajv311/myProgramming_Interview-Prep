/*


Merge Sort for Linked List
Medium Accuracy: 52.29% Submissions: 33980 Points: 4
Given Pointer/Reference to the head of the linked list, the task is to Sort the given linked list using Merge Sort.
Note: If the length of linked list is odd, then the extra node should go in the first list while splitting.

Example 1:

Input:
N = 5
value[]  = {3,5,2,4,1}
Output: 1 2 3 4 5
Explanation: After sorting the given
linked list, the resultant matrix
will be 1->2->3->4->5.
Example 2:

Input:
N = 3
value[]  = {9,15,0}
Output: 0 9 15
Explanation: After sorting the given
linked list , resultant will be
0->9->15.
Your Task:
For C++ and Python: The task is to complete the function mergeSort() which sort the linked list using merge sort function.
For Java: The task is to complete the function mergeSort() and return the node which can be used to print the sorted linked list.

Expected Time Complexity: O(N*Log(N))
Expected Auxiliary Space: O(N)

Constraints:
1 <= T <= 100
1 <= N <= 105



View Bookmarked Problems
Company Tags
 Accolite Adobe Amazon MAQ Software Microsoft Paytm Veritas

*/





/* Structure of the linked list node is as
struct Node
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution {
public:
	//Function to sort the given linked list using Merge Sort.

	Node* mid(Node*h) {

		// base case
		if (h == 0 or h->next == 0) return h;

		Node*slow = h;
		Node*fast = h;

		while (fast->next and fast->next->next) {
			slow = slow->next;
			fast = fast->next->next;
		}
		// to get the mid of the entire linkedlist...
		// we have node->next & node->next->next
		// cases since total ll size could be even/odd..

		return slow;

	}


	Node*merge(Node*l1, Node*l2) {
		//  to merge the nodes

		if (l1 == 0 or l2 == 0) return l1 != 0 ? l1 : l2;

		Node*temp = new Node(-1);
		Node* t = temp;

		while (l1 and l2) {

			if (l1->data > l2->data) {
				temp->next = l2;
				l2 = l2->next;

			}

			else {
				temp->next = l1;
				l1 = l1->next;
			}

			temp = temp->next;

		}

		if (l1) temp->next = l1;
		else temp->next = l2;

		return t->next;

	}


	Node* mergeSort(Node* head) {
		// your code here

		if (head == 0 or head->next == 0) return head;

		//  first find the mid element to divide...

		Node*m = mid(head);

		Node* x = m->next;
		m->next = 0;

		Node*a = mergeSort(head);
		Node*b = mergeSort(x);

		return merge(a, b);

	}
};





