/*
//////////////////////////////////////////////////////
//Question/Info

Get minimum element from stack
Medium Accuracy: 24.49% Submissions: 100k+ Points: 4
You are given N elements and your task is to Implement a Stack in which you can get minimum element in O(1) time.

Example 1:

Input:
push(2)
push(3)
pop()
getMin()
push(1)
getMin()
Output: 3 2 1
Explanation: In the first test case for
query
push(2)  the stack will be {2}
push(3)  the stack will be {2 3}
pop()    poped element will be 3 the
         stack will be {2}
getMin() min element will be 2
push(1)  the stack will be {2 1}
getMin() min element will be 1
Your Task:
You are required to complete the three methods push() which take one argument an integer 'x' to be pushed into the stack, pop() which returns a integer poped out from the stack and getMin() which returns the min element from the stack. (-1 will be returned if for pop() and getMin() the stack is empty.)

Expected Time Complexity : O(1) for all the 3 methods.
Expected Auixilliary Space : O(1) for all the 3 methods.

Constraints:
1 <= Number of queries <= 100
1 <= values of the stack <= 100

Company Tags
 Amazon D-E-Shaw FactSet Flipkart Goldman Sachs GreyOrange Kuliza Microsoft One97 SAP Labs Sapient Snapdeal Walmart


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


	/*
	The structure of the class is as follows
	class _stack{
	stack<int> s;
	int minEle;
	public :
	    int getMin();
	    int pop();
	    void push(int);
	};
	*/

// given minEle in the class...

	/*returns min element from stack*/
	int _stack :: getMin()
	{
		//Your code here
		if (s.empty()) return -1;

		return minEle;
	}

	/*returns poped element from stack*/
	int _stack ::pop()
	{
		//Your code here

		if (s.empty()) {
			return -1;
		}

		else if (minEle > s.top()) {
			int k = minEle;
			minEle = minEle * 2 - s.top();
			s.pop();
			return k;
		}

		else {
			int k = s.top();
			s.pop();
			return k;
		}

	}

	/*push element x into the stack*/
	void _stack::push(int x)
	{
		//Your code here

		if (s.empty()) {
			s.push(x);
			minEle = x;
			return;
		}

		else if (minEle > x) {
			int k = 2 * x - minEle; // logic...
			s.push(k);
			minEle = x;
			return;
		}

		else {
			s.push(x);
			return;
		}

	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////