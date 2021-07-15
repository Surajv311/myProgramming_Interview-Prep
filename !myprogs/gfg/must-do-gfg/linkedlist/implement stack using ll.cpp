/*
//////////////////////////////////////////////////////
//Question/Info

Implement Stack using Linked List
Basic Accuracy: 49.96% Submissions: 51565 Points: 1
Let's give it a try! You have a linked list and you have to implement the functionalities push and pop of stack using this given linked list. Your task is to use the class as shown in the comments in the code editor and complete the functions push() and pop() to implement a stack.

Example 1:

Input:
push(2)
push(3)
pop()
push(4)
pop()
Output: 3 4
Explanation:
push(2)    the stack will be {2}
push(3)    the stack will be {2 3}
pop()      poped element will be 3,
           the stack will be {2}
push(4)    the stack will be {2 4}
pop()      poped element will be 4
Example 2:

Input:
pop()
push(4)
push(5)
pop()
Output: -1 5
Your Task: You are required to complete two methods push() and pop(). The push() method takes one argument, an integer 'x' to be pushed into the stack and pop() which returns an integer present at the top and popped out from the stack. If the stack is empty then return -1 from the pop() method.

Expected Time Complexity: O(1) for both push() and pop().
Expected Auxiliary Space: O(1) for both push() and pop().

Constraints:
1 <= Q <= 100
1 <= x <= 100

Company Tags
 Codenation FactSet Microsoft Samsung SAP Labs

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


	void MyStack ::push(int x)
	{
		// Your Code

		// so its pushing the element in ll bottom, so as we push elements, the depth of linkedlist is increasing...
		// so when we pop, the most depth element is popped and the pointer is moved up... hence following stack operations...

		StackNode* node = new StackNode(x);
		node->next = top;
		top = node;


	}

//Function to remove an item from top of the stack.
	int MyStack ::pop()
	{
		// Your Code

		if (top == 0) return -1;
		int x = top->data;
		StackNode  * temp = top;

		top = top->next;

		free(temp);
		return x;

	}




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////