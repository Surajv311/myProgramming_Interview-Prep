/*
//////////////////////////////////////////////////////
//Question/Info

Check if Linked List is Palindrome
Easy Accuracy: 39.25% Submissions: 100k+ Points: 2
Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

Example 1:

Input:
N = 3
value[] = {1,2,1}
Output: 1
Explanation: The given linked list is
1 2 1 , which is a palindrome and
Hence, the output is 1.
Example 2:

Input:
N = 4
value[] = {1,2,3,4}
Output: 0
Explanation: The given linked list
is 1 2 3 4 , which is not a palindrome
and Hence, the output is 0.
Your Task:
The task is to complete the function isPalindrome() which takes head as reference as the only parameter and returns true or false if linked list is palindrome or not respectively.

Expected Time Complexity: O(N)
Expected Auxialliary Space Usage: O(1)  (ie, you should not use the recursive stack space as well)

Constraints:
1 <= N <= 105

Company Tags
 Accolite Adobe Amazon KLA Tencor Kritikal Solutions Microsoft Snapdeal Yodlee Infotech


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
		//Function to check whether the list is palindrome.

		Node* reverse(Node* head) {
			Node* curr = head;
			Node* prev = NULL;
			Node* next;

			while (curr != NULL) {
				next = curr->next;
				curr->next = prev;
				prev = curr;
				curr = next;
			}

			return prev;
		}

		bool isPalindrome(Node *head)
		{
			//Your code here
			Node* slow = head;
			Node* fast = head->next;

			while (fast && fast->next) {
				slow = slow->next;
				fast = fast->next->next;
			}

			Node* temp = reverse(slow->next);

			while (temp != NULL) {
				if (head->data != temp->data) return false;

				head = head->next;
				temp = temp->next;
			}

			return true;

			/*

			so basically we find the middle element using fast & slow pointers...
			now from middle element we reverse all elements ahead...
			now we iterate again, now temp would be iterating from
			back to forward since the pointers have been reversed & prev. was passed,,...
			and we move on head from forward to back... we could also create another temp
			pointer though... and check the equality...

			*/

		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////