// entire linkedlist

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

public:
	int data ;
	Node *next ;
};

void Push_l(Node** ref , int d) {

	Node *new_node = new Node();

	new_node->data = d ;
	new_node-> next = (*ref);

	(*ref) = new_node ;


}


void Push_r(Node** head , int d) {

	Node *new_node = new Node() ;

	Node* lastRef = (*head) ;

	new_node->data = d ;
	new_node->next = NULL ;

	if (*head == 0) {

		*head = new_node ;
		return;
	}

	while (lastRef->next != 0) {
		lastRef = lastRef->next ;
	}

	lastRef->next = new_node;
	return;
}

void print(Node *p) {

	while (p != 0) {
		cout << p->data << " ";

		p = p->next;
	}

	cout << endl;

}

int32_t main() {

// insert nodes from beginning of ll


//////
	c_p_c();
///////

	int n ; // number of nodes
	cin >> n ;

	Node *nodeL = NULL;
	for (int i = 0; i < n; ++i)
	{
		int d ; // insert data

		cin >> d ;

		Push_l(&nodeL , d);

	}

	print(nodeL);

	// insert nodes from end of ll - pref


	Node *nodeR = NULL;
	for (int i = 0; i < n; ++i)
	{
		int d ; // insert data

		cin >> d ;

		Push_r(&nodeR , d);

	}

	print(nodeR);

	return 0 ;
}