/*
//////////////////////////////////////////////////////
//Question/Info

CONSTRUCT LINKEDLIST...

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

class Node {
public:
	int data; Node*next ;

	Node(int data) {
		this->data = data;
		next = 0;
	}

};

void addFront(Node*&node, int data) {
// add node at front...

	Node *nn = new Node(data); // //nn->data = data; nn->next = 0;

	if (node == 0) {
		node = nn; return;
	}

	nn->next = node;
	node = nn;

	return;
}

/*

if passed by reference, then use ** ...

eg:

addFront(Node**node, int data) {

	Node *nn = new Node(data);

	if (*node == 0) {
		*node = nn; return;
	}

	nn->next = *node;
	*node = nn;

	return;
}

main(){
	addFront(&root, data);
}

*/


void addBack(Node*&node , int data) {
	Node*nn = new Node(data);
	Node*temp = node;

	if (node == 0) {
		node = nn; return;
	}

	while (temp->next) temp = temp->next;

	temp->next = nn;
	return;
}

void display(Node*head) {
	while (head) {
		cout << head->data << " ";
		head = head->next;
	}
}



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


	Node * root = 0 ;

	int n = 5; // nodes...

	for (int i = 0 ; i < n ; i++) {
		int data; data = i;
		addFront(root, data);
		// addBack(root, data);
	}

	display(root);


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////