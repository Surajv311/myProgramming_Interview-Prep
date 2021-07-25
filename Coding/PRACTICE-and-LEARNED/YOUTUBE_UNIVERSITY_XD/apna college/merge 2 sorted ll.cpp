/*
///////////////////////////////////////////
//Question/Info

merge two sorted ll

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
	Node(int val) {
		data = val;
		next = 0 ;
	}
};

void ll(Node **ref, int data) {

	Node* nn = new Node(data);
	// nn->data = data;
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

Node* merge(Node*&head1, Node*&head2) {


	Node* p1 = head1;
	Node *p2 = head2;

	Node*dummynode = new Node(-1);

	Node*p3 = dummynode ;


	while (p1 != 0 and p2 != 0) {

// we are not creating any new node... just append the nodes .. merging the lists

		if (p1->data < p2->data) {
			p3->next = p1;
			p1 = p1->next;
		}
		else {
			p3->next = p2 ;
			p2 = p2->next;
		}
		p3 = p3->next;

	}

//  now say element left in ll1 or other sorted likedlist then we can directly append the nodes

	while (p1 != 0) {
		p3->next = p1;
		p1  = p1->next;
		p3 = p3->next;
	}
	while (p2 != 0) {
		p3->next = p2;
		p2  = p2->next;
		p3 = p3->next;
	}

	return dummynode->next;
//  basicall y : dummynode->(now comes sorted lists...)

}

//////////////
// OR
/////////////
// via recursion

Node* mr(Node* &head1, Node*&head2) {

//  base case

	if (head1 == 0) {
		return head2;
	}
	if (head2 == 0) {
		return head1;
	}

	Node*result ;

	if (head1->data < head2->data) {
		result = head1;
		result->next = mr(head1->next, head2);

	}

	else {
		result = head2 ;
		result->next = mr(head1, head2->next);

	}

	return result;

}


int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	Node *head1 = 0;
	Node *head2 = 0;

	int n1;
	cin >> n1 ;


	forn(i, n1) {

		int data1;
		cin >> data1;
		ll(&head1, data1);
	}

	int n2;
	cin >> n2 ;


	forn(i, n2) {

		int data2;
		cin >> data2;
		ll(&head2, data2);
	}
	display(head1);
	ct("");
	display(head2);
	ct("");
	Node *newhead = merge(head1, head2);
	// OR VIA RECURSION
	// Node *newhead = mr(head1, head2);
	display(newhead);


	return 0;
}

