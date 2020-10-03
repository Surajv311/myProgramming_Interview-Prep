// To find length of an entire linkedlist

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


int32_t print(Node *node) {
	int count = 0 ;

	while (node->next != NULL) {
		//cout << node->data << endl ;
		node = node->next;
		count++ ;

	}
	return count ;

}

void push(Node **n , int data) {

	Node *newnode = new Node() ;

	newnode->data = data ;

	newnode->next = (*n) ;

	(*n) = newnode ;

} // ll in reverse fashion



int32_t main() {

//////
	c_p_c();
///////


	Node *node = new Node() ;

// pushing the node into the function to allot data

	int n ; // number of nodes

	cin >> n ; //num of nodes

	for (int i = 0; i < n; i++)
	{
		int data ;
		cin >> data ;
		push(&node , data);
	}
	// push(&node , 1 );
	// push(&node , 2 );
	// push(&node , 3);

	cout << print(node);


}


