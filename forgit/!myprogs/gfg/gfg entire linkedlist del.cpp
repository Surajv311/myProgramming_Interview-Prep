// To delete an entire linkedlist

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

// to push the nodes in the linkedlist

void push(Node **head_ref , int data) {

	Node *newnode = new Node();

	newnode->data = data ;

	newnode->next = (*head_ref);
	(*head_ref) = newnode ;

}

void print(Node *node) {

	while (node->next != NULL) {
		cout << node->data << endl ;
		node = node->next;
	}

}

void delete_ll(Node **del) {

	Node* current = *del;
	Node* next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*del = NULL;
}




int32_t main() {

//////
	c_p_c();
///////


	Node *head = new Node();

	push(&head , 1);
	push(&head , 2);
	push(&head , 3);


	print(head);

	delete_ll(&head);

	//print(head) ;
	cout << "linked list deleted" ;


	return 0;

}
