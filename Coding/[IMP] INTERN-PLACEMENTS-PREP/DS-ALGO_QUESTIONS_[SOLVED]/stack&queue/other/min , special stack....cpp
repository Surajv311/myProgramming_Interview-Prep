/*
//////////////////////////////////////////////////////
//Question/Info

Special Stack
Easy Accuracy: 50.0% Submissions: 42834 Points: 2
Design a data-structure SpecialStack that supports all the stack operations like push(), pop(), isEmpty(), isFull() and an additional operation getMin() which should return minimum element from the SpecialStack. Your task is to complete all the functions, using stack data-Structure.

Example 1:

Input:
Stack: 18 19 29 15 16
Output: 15
Explanation:
The minimum element of the stack is 15.

Your Task:
Since this is a function problem, you don't need to take inputs. You just have to complete 5 functions, push() which takes the stack and an integer x as input and pushes it into the stack; pop() which takes the stack as input and pops out the topmost element from the stack; isEmpty() which takes the stack as input and returns true/false depending upon whether the stack is empty or not; isFull() which takes the stack and the size of the stack as input and returns true/false depending upon whether the stack is full or not (depending upon the
given size); getMin() which takes the stack as input and returns the minimum element of the stack.
Note: The output of the code will be the value returned by getMin() function.

Expected Time Complexity: O(N) for getMin, O(1) for remaining all 4 functions.
Expected Auxiliary Space: O(1) for all the 5 functions.

Constraints:
1 ≤ N ≤ 104

Company Tags
 Adobe Amazon FactSet Goldman Sachs Intuit Linkedin MakeMyTrip Paytm SAP Labs VMWare Walmart Microsoft


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


	void push(stack<int>& s, int a) {
		// Your code goes here
		s.push(a); return;
	}

	bool isFull(stack<int>& s, int n) {
		// Your code goes here
		if (s.size() == n) return true;

		return false;
	}

	bool isEmpty(stack<int>& s) {
		// Your code goes here
		if (s.empty()) return true;

		return false;
	}

	int pop(stack<int>& s) {
		// Your code goes here
// 	s.pop(); return;
		int x = s.top() ; s.pop(); return x;
	}

	int getMin(stack<int>& s) {
		// Your code goes here

		int e = s.top(); s.pop();

		while (!s.empty()) {
			if (s.top() <= e) e = s.top();

			s.pop();
		}

		return e;
	}


	/*

	MIN STACK Q. LEETCODE...

	////////////////////////////////////////////////////////////////

	155. Min Stack
	Easy

	5503

	497

	Add to List

	Share
	Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

	Implement the MinStack class:

	MinStack() initializes the stack object.
	void push(val) pushes the element val onto the stack.
	void pop() removes the element on the top of the stack.
	int top() gets the top element of the stack.
	int getMin() retrieves the minimum element in the stack.


	Example 1:

	Input
	["MinStack","push","push","push","getMin","pop","top","getMin"]
	[[],[-2],[0],[-3],[],[],[],[]]

	Output
	[null,null,null,null,-3,null,0,-2]

	Explanation
	MinStack minStack = new MinStack();
	minStack.push(-2);
	minStack.push(0);
	minStack.push(-3);
	minStack.getMin(); // return -3
	minStack.pop();
	minStack.top();    // return 0
	minStack.getMin(); // return -2


	Constraints:

	-231 <= val <= 231 - 1
	Methods pop, top and getMin operations will always be called on non-empty stacks.
	At most 3 * 104 calls will be made to push, pop, top, and getMin.

	////////////////////////////////////////////////////////////////

	class MinStack {
	public:
	  // initialize your data structure here.
	    MinStack() {
	        stack<int> s1; stack<int> s2;// s2 store min elements...
	    }
	    stack<int> s1; stack<int> s2;
	    void push(int val) {
	        s1.push(val);

	        if(s2.empty() or val<=getMin()) s2.push(val);
	    }

	    void pop() {
	        if(s1.top()==getMin()) s2.pop();

	        s1.pop();
	    }

	    int top() {
	        return s1.top();
	    }

	    int getMin() {
	return s2.top();
	    }
	};

	//
	// * Your MinStack object will be instantiated and called as such:
	// * MinStack* obj = new MinStack();
	// * obj->push(val);
	// * obj->pop();
	 //* int param_3 = obj->top();
	 //* int param_4 = obj->getMin();
	//


	////////////////////////////////////////////////////////////////

	*/

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////