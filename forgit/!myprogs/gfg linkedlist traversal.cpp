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

	// having two components
public :
	int data;
	Node *next;

};

int32_t main() {

//////
	c_p_c();
///////

// to create linkedlist with 3 elements and traverse

// since class is node so we create 3 object pointers . We use 'new' keyword

// initializing pointer with 0
	Node *first = 0 ;
	Node *second = 0 ;
	Node *third = 0 ;

	first = new Node() ; // now the pointer would have two parts
	second = new Node() ;
	third = new Node() ;

	first->data = 1 ;  // first NODE
	first->next = second ;

	second->data = 2;      // second NODE
	second->next = third ;

	third->data = 3;  // third NODE
	third->next = NULL ;

// now printing the linked list

	while (first != NULL) {
		cout << first->data << endl ;

		first = first->next ;

	}

}
