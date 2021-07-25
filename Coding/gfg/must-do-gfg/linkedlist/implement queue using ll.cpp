/*
//////////////////////////////////////////////////////
//Question/Info

Implement Queue using Linked List
Basic Accuracy: 32.71% Submissions: 49855 Points: 1
Implement a Queue using Linked List.
A Query Q is of 2 Types
(i) 1 x   (a query of this type means  pushing 'x' into the queue)
(ii) 2     (a query of this type means to pop an element from the queue and print the poped element)

Example 1:

Input:
Q = 5
Queries = 1 2 1 3 2 1 4 2
Output: 2 3
Explanation: n the first testcase
1 2 the queue will be {2}
1 3 the queue will be {2 3}
2   poped element will be 2 the
    queue will be {3}
1 4 the queue will be {3 4}
2   poped element will be 3.

Example 2:

Input:
Q = 4
Queries = 1 2 2 2 1 3
Output: 2 -1
Explanation: In the second testcase
1 2 the queue will be {2}
2   poped element will be {2} then
    the queue will be empty.
2   the queue is empty and hence -1
1 3 the queue will be {3}.
Your Task:
Complete the function push() which takes an integer as input parameter and pop() which will remove and return an element(-1 if queue is empty).

Expected Time Complexity: O(1).
Expected Auxiliary Space: O(1).

Constraints:
1 <= Q <= 100
1 <= x <= 100

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


	/* Structure of a node in Queue
	struct QueueNode
	{
	    int data;
	    QueueNode *next;
	    QueueNode(int a)
	    {
	        data = a;
	        next = NULL;
	    }
	};

	And structure of MyQueue
	struct MyQueue {
	    QueueNode *front;
	    QueueNode *rear;
	    void push(int);
	    int pop();
	    MyQueue() {front = rear = NULL;}
	}; */

//Function to push an element into the queue.
	void MyQueue:: push(int x)
	{
		// Your Code

		QueueNode* node = new QueueNode(x);
		if (front == 0) front = rear = node;
		else {
			rear->next = node;
			rear = node;
		}

		// adding elements in the ll... and moving the tail ahead...

	}

//Function to pop front element from the queue.
	int MyQueue :: pop()
	{
		// Your Code

		if (front == 0) return -1;
		int d = front->data;
		QueueNode* temp = front;
		front = front->next;

		delete(temp); // free(temp) // also works...
		return d;

		// just moving the head ahead to pop...
	}




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////