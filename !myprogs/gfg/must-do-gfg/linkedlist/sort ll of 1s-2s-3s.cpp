/*
//////////////////////////////////////////////////////
//Question/Info

Given a linked list of 0s, 1s and 2s, sort it.
Easy Accuracy: 49.37% Submissions: 55103 Points: 2
Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.

Example 1:

Input:
N = 8
value[] = {1,2,2,1,2,0,2,2}
Output: 0 1 1 2 2 2 2 2
Explanation: All the 0s are segregated
to the left end of the linked list,
2s to the right end of the list, and
1s in between.
Example 2:

Input:
N = 4
value[] = {2,2,0,1}
Output: 0 1 2 2
Explanation: After arranging all the
0s,1s and 2s in the given format,
the output will be 0 1 2 2.
Your Task:
The task is to complete the function segregate() which segregates the nodes in the linked list as asked in the problem statement and returns the head of the modified linked list. The printing is done automatically by the driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 103

Company Tags
 Amazon MakeMyTrip Microsoft

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
		//Function to sort a linked list of 0s, 1s and 2s.
		Node* segregate(Node *head) {

			// Add code here

			Node* node = head;

			int zero, one, two;

			zero = one = two = 0;

			while (node) {

				if (node->data == 0) zero += 1;
				if (node->data == 1) one += 1;
				if (node->data == 2) two += 1;

				node = node->next;
			}

			node = head;

			while (zero) {
				node->data = 0; node = node->next;
				zero--;
			}

			while (one) {
				node->data = 1; node = node->next;
				one--;
			}

			while (two) {
				node->data = 2; node = node->next;
				two--;
			}

			return head;

		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////