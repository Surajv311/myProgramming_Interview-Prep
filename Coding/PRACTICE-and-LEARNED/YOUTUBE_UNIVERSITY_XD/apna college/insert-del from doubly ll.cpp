/*
///////////////////////////////////////////
//Question/Info

Insert and delete from doubly linkedlist

///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define int 		   long long int
#define setbits(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define ct(x) 		   cout<<x<<endl;
#define ct2(x,y) 	   cout<<x<<" "<<y<<endl;
#define forn(i,n) 	   for(int i = 0; i < (int)(n); i++)
#define forx(i,x,n)    for(int i = x; i < (int)(n); i++)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed<<setprecision(y)<<x;
#define PI 			   3.1415926535897932384626433832795
#define MOD 		   1000000007 // (1e9+7)
#define pii 		   pair<int,int>
#define pis 		   pair<int,string>
#define vi  		   vector<int>
#define vii 		   vector<pii>
#define mii 		   map<int,int>
//typedef long long int lli;
typedef long double ld;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

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
	int data;
	Node* next;
	Node* prev;

	Node(int val) {
		data = val;
		next = 0 ;
		prev = 0 ;
	}
};
void ihead(Node *&x, int data) {

	Node* nn = new Node(data);
	nn->next = x;
	if (x != 0) {
		x->prev = nn;
	}
	x = nn;
	return;
}

void itail(Node* &x, int data) {

	Node* nn = new Node(data);
	if (x == 0) {
		ihead(x, data);
		return ;
	}
	Node *temp = x ;


	while (temp->next) {
		temp = temp->next;
	}

	temp->next = nn;
	nn->prev = temp;

	return ;
}

void delhead(Node* &x) {

	Node * del = x ;

	x = x->next ;
	x->prev = 0 ;

	free(del);
	// or delete del;

}

void deleten (Node *&x, int pos) {



//  say we have our head/first node to delete then (similarly edge case where we have to delete last node )

	if (pos == 0) {
		// directly call function
		delhead(x);
		return;
	}

	Node * temp = x ;



	while (temp->next and pos--) {
		temp = temp->next;
	}

	temp->prev->next = temp->next;

	// temp->next->prev = temp->prev ; // // since if its our last node to delete...we put 'if' condition...edge case...

	if (temp->next)
	{
		temp->next->prev = temp->prev ;
	}

	delete temp;

}

void display(Node *x) {

	while (x != 0) {
		cout << x->data << " ";
		x = x->next;
	}
	return;
}



int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/


	Node *head = 0;

	int n;
	cin >> n ;


	forn(i, n) {

		int data;
		cin >> data;
		itail(head, data);
	}

	display(head);

// now to delete node
	ct("");
	deleten(head, 3);
	display(head);
	return 0;
}

