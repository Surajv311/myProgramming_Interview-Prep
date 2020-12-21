/*
///////////////////////////////////////////

delete node from linkedlist

Let us formulate the problem statement to understand the deletion process. Given a ‘key’, delete the first occurrence of this key in the linked list.
To delete a node from the linked list, we need to do the following steps.
1) Find the previous node of the node to be deleted.
2) Change the next of the previous node.
3) Free memory for the node to be deleted.

///////////////////////////////////////////
*/

#include <bits/stdc++.h>
#define int long long int
#define setbits(x) __builtin_popcount(x)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ct(x) cout<<x<<endl;
#define ct2(x,y) cout<<x<<" "<<y<<endl;
#define forn(i, n) for (int i = 0; i < (int)(n); i++)
#define forx(i, x, n) for (int i = x ; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

//typedef long long int lli;
typedef long double ld;
//typedef pair<int, int> pii;
//typedef vector<int> vi;
//typedef vector<pii> vii;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

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
	Node* next;

};

void Push_l(Node **ref, int d) {

	Node* nn = new Node();

	nn->data = d ;
	nn->next = *ref;
	*ref = nn ;

}

void Push_r(Node **ref, int d) {

	Node* last = *ref;

	Node* nn = new Node();

	nn->data = d ;

	if (*ref == 0) {

		*ref = nn ;
		return ;

	}

	while (last->next != 0) {

		last = last->next;

	}

	last-> next = nn ;

}


void display(Node* r) {


	while (r != 0) {

		cout << r->data << " ";
		r = r->next;

	}

}

void deleteNode(Node **ref, int key) {

	Node *temp = *ref ;
	Node *prev = 0 ;


// if the given node is to be deleted

	if (temp != 0 and temp->data == key)
	{
		*ref = temp->next;
		delete temp;
		return;
	}

	while (temp != 0 and temp->data != key)
	{
		prev = temp;
		temp = temp->next;
	}

// if key not present
	if (temp == NULL) {
		return ;
	}
	prev->next = temp->next;

	delete temp;

}

int32_t main() {

///////////
	c_p_c();
///////////

	// code


	Node *x = 0 ;


	Push_l(&x, 1);
	Push_l(&x, 2);
	Push_l(&x, 3);
	Push_l(&x, 4);
	Push_l(&x, 5);

// display

	display(x);

	cout << endl ;

	Node *y = 0 ;
	Push_r(&y, 1);
	Push_r(&y, 2);
	Push_r(&y, 3);
	Push_r(&y, 4);
	Push_r(&y, 5);


	display(y);


// delete node of the given data : 3
	cout << endl ;

	deleteNode(&y, 3);

	display(y);

	return 0;
}