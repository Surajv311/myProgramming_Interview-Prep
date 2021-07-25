/*
///////////////////////////////////////////
//Question/Info

Given a linked list, check if the linked list has loop or not.

FLOYD ALGORITHM

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
};
void ll(Node **ref, int data) {

	Node* nn = new Node();
	nn->data = data;
	nn->next = (*ref);
	*ref = nn;
	return;
}

void lll(Node **ref, int data) {


	Node *xx = *ref;

	Node* nn = new Node();
	nn->data = data;
	nn->next = NULL;
	if (*ref == 0) {
		*ref = nn;
		return ;
	}

	while (xx->next != 0)
	{
		xx = xx->next;
	}
	xx->next = nn;
	return ;
}

void display(Node *x) {

	while (x != 0) {
		cout << x->data << " ";
		x = x->next;
	}
	return;
}

void makel(Node* &x , int pos) {
	Node *temp = x;
	Node *lpoint; // loopoint

	int count = 1 ;

	while (temp->next) {

		if (pos == count) {
			lpoint = temp;
		}

		temp = temp->next;
		count++;
	}

	temp->next = lpoint;

}

bool checkl(Node *&x) {

	Node *fast = x ;
	Node *slow = x ;


	while (slow and fast and fast->next) {

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast) {
			return true;
		}

	}

	return false;
}
int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

// FLOYD ALGO

	Node *head = 0;

	int n;
	cin >> n ;


	forn(i, n) {

		int data;
		cin >> data;
		lll(&head, data);
	}

	display(head);

	/*
	ct("");

	reverse(&head);
	display(head);

	ct("");
	*/

	/*
	// reverse ll in groups

		// say g is :

		int g = 3 ;
		Node *newh = reverseg(head, g);
		display(newh);

		ct("");
	*/

	ct("");
	makel(head, 3);

	if (checkl(head)) {
		ct("true")
	}
	else {
		ct("false")
	}

	return 0;
}

/*
void reverse(Node**ref) {

	Node *prevn = 0 ;
	Node *nextn = 0 ;
	Node *currn = *ref;


	while (currn != 0) {

		nextn = currn->next;
		currn->next = prevn;

		prevn = currn;
		currn = nextn;

	}

	*ref = prevn;
	return;
}

Node* reverseg(Node* ref, int g) {


	Node *prevn = 0 ;
	Node *nextn ; // *need not be initialised to NULL*
	Node *currn = ref;
	int count = 0 ;

	while (currn != 0 and count < g) {

		nextn = currn->next;
		currn->next = prevn;

		prevn = currn;
		currn = nextn;
		count++;
	}

// since next = curr->next;
	if (nextn != 0) {
		ref->next = reverseg(nextn, g);
	}

	return prevn;
}
*/