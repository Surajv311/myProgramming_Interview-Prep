/*
///////////////////////////////////////////
//Question/Info

CHECKING POINTERS/ADDRESSES IN LINKEDLIST INSERTION....

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
// double pointer points to a pointer ... takes the address of a pointer
	cout << "-------" << endl;
	cout << "ref: " << ref << endl;
	cout << "*ref: " << *ref << endl;
	// cout << "**ref: " << **ref << endl; - error

	Node* nn = new Node();
	nn->data = data;
	nn->next = (*ref);
	*ref = nn;
	return;
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

	// ct("");

	cout << "head: " << (head) << endl;

	cout << "&head: " << (&head) << endl;

	// //ct(*head); // error - as head is a Node * and not an int *...
	forn(i, n) {

		int data;
		cin >> data;
		ll(&head, data);
	}
	cout << "-------" << endl;
	cout << "head: " << (head) << endl;
	cout << "&head: " << (&head) << endl;
	display(head);

	/*
	cannot pass &head in display and make Node**x... and use *x->data....
	*/

	ct("");


	return 0;
}

/* NOTE:
==============================================================
FOR INPUT :
3
1 2 3

--------------------------------------------------------------
PASSING head ...

	forn(i, n) {

		int data;
		cin >> data;
		ll(head, data);
	}
void ll(Node * &ref, int data) {
// double pointer points to a pointer ... takes the address of a pointer
	cout << "-------" << endl;
	cout << "ref: " << ref << endl;
	// cout << "*ref: " << *ref << endl; // would throw error in this case
	// cout << "**ref: " << **ref << endl; - error

	Node* nn = new Node();
	nn->data = data;
	nn->next = (ref);
	ref = nn;
	return;
}
head: 0
&head: 0x61feec
-------
ref: 0
-------
ref: 0x11017b0
-------
ref: 0x11017c8
-------
head: 0x11017e0
&head: 0x61feec
3 2 1

--------------------------------------------------------------
PASSING &head...

forn(i, n) {

		int data;
		cin >> data;
		ll(&head, data);
	}

void ll(Node **ref, int data) {
// double pointer points to a pointer ... takes the address of a pointer
	cout << "-------" << endl;
	cout << "ref: " << ref << endl;
	cout << "*ref: " << *ref << endl;
	// cout << "**ref: " << **ref << endl; - error

	Node* nn = new Node();
	nn->data = data;
	nn->next = (*ref);
	*ref = nn;
	return;
}


head: 0
&head: 0x61feec
-------
ref: 0x61feec
*ref: 0
-------
ref: 0x61feec
*ref: 0x10017b0
-------
ref: 0x61feec
*ref: 0x10017c8
-------
head: 0x10017e0
&head: 0x61feec
3 2 1
==================================================================
*/

