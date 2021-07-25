/*
//////////////////////////////////////////////////////
//Question/Info

Merge K sorted linked lists
Medium Accuracy: 41.42% Submissions: 33305 Points: 4
Given K sorted linked lists of different sizes. The task is to merge them in such a way that after merging they will be a single sorted linked list.

Example 1:

Input:
K = 4
value = {{1,2,3},{4 5},{5 6},{7,8}}
Output: 1 2 3 4 5 5 6 7 8
Explanation:
The test case has 4 sorted linked
list of size 3, 2, 2, 2
1st    list     1 -> 2-> 3
2nd   list      4->5
3rd    list      5->6
4th    list      7->8
The merged list will be
1->2->3->4->5->5->6->7->8.
Example 2:

Input:
K = 3
value = {{1,3},{4,5,6},{8}}
Output: 1 3 4 5 6 8
Explanation:
The test case has 3 sorted linked
list of size 2, 3, 1.
1st list 1 -> 3
2nd list 4 -> 5 -> 6
3rd list 8
The merged list will be
1->3->4->5->6->8.
Your Task:
The task is to complete the function mergeKList() which merges the K given lists into a sorted one. The printing is done automatically by the driver code.

Expected Time Complexity: O(nk Logk)
Expected Auxiliary Space: O(k)
Note: n is the maximum size of all the k link list

Constraints
1 <= K <= 103


Company Tags
 Amazon VMWare Microsoft

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


	struct Node
	{
		int data;
		Node* next;

		Node(int x) {
			data = x;
			next = NULL;
		}

	};
	* /

	class Solution {
	public:
		//Function to merge K sorted linked list.
		Node * merge(Node * A, Node * B) {

			Node* ans = NULL;

			if (A == NULL) return B;
			if (B == NULL) return A;

			if (A->data >= B->data) {
				ans = B;
				ans->next = merge(A, B->next);
			}
// recursion...
			if (A->data < B->data) {
				ans = A;
				ans->next = merge(A->next, B);
			}

			return ans;
		}

		Node * mergeKLists(Node *arr[], int K)
		{
			// Your code here
			//   like merge 2 arrays question... in o(1) space...

			for (int i = 1; i < K; i++) arr[0] = merge(arr[0], arr[i]);

			return arr[0];
			//   o(nlogk)

			/*

			Approach -2

			// 'compare' function used to build up the priority queue

			struct compare {
			bool operator()(
			    struct Node* a, struct Node* b)
			{
			    return a->data > b->data;
			}
			};

			struct Node* mergeKSortedLists(
			struct Node* arr[], int k)
			{
			struct Node *head = NULL, *temp;

			priority_queue<Node*, vector<Node*>, compare> pq;
			// since for int min heap, we use greater<int>(), but for a Node*...
			// heap we use comparator...

			for (int i = 0; i < k; i++)
			    if (arr[i] != NULL)
			        pq.push(arr[i]);

			while (!pq.empty()) {

			    struct Node* x = pq.top();
			    pq.pop();

			    if (x->next != NULL) pq.push(x->next);

			    // base ...
			    if (head == NULL) {
			        head = x;
			        temp = x;
			    }

			    else {
			        temp->next = x;
			        temp = x;
			    }
			}

			return head;
			}

			// display...
			void printList(struct Node* head)
			{
			while (head != NULL) {
			    cout << head->data << " ";
			    head = head->next;
			}
			}

			*/


		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////