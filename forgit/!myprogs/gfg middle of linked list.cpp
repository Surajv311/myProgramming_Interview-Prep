// To find middle element from entire linkedlist

#include <bits/stdc++.h>
#define int long long int
#define setbits(x) __builtin_popcount(x)
using namespace std;

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

class Node {
public :
	int data;
	Node *next;
};

void push(Node** head , int data ) {


	Node *newnode = new Node() ;

	newnode->data = data ;
	newnode->next = (*head);
	(*head) = newnode ;
}

void print(Node* head ) {

	while (head != NULL) {
		cout << head->data << "->" ;
		head = head->next ;

	}
	cout << "NULL";
}

void middle(Node *head) {

	Node *fast = head;  // both being passed same node
	Node *slow = head ;


	if (head != NULL) {

		while (fast != NULL && fast->next != NULL) {

			slow = slow->next ;

			fast = fast->next->next;

		}

		cout << "the middle element is " << slow->data ;
	}


}

int32_t main() {

//////
	c_p_c();
///////

	Node *head = new Node() ;

	int n ; // number of nodes

	cin >> n ;

	int data ; // to input data into the nodes

	for (int i = 0; i < n; i++)
	{
		cin >> data ;
		push(&head , data);

	}

	print(head);
	cout << endl;
// to find the middle element

// Traverse linked list using two pointers.
// Move one pointer by one and other pointers by two.
// When the fast pointer reaches end slow pointer will reach the middle of
// the linked list. like 1x & 2x ......

	middle(head);


// other method

// Traverse the whole linked list and count the no. of nodes.
//  Now traverse the list again till count/2 and return the node at count/2.

	return 0 ;
}


