/*
///////////////////////////////////////////
//Question/Info

find intersection point of two ll

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

int lengthf(Node*head) {

	int l = 0 ;

	Node*temp = head ;

	while (temp) {

		temp = temp->next ;

		l++;

	}

	return l ;

}

int intersection(Node*&head1, Node*&head2) {


	int l1 = lengthf(head1);
	int l2 = lengthf(head2);


	int d = 0 ;
	Node*p1 ;
	Node*p2 ;
//  now we must see which is the larger ll

// we traverse that first

//  lets make p1 point the larger ll and p2 to the shorter one


	if (l1 > l2) {
		d = l1 - l2;
		p1 = head1;
		p2 = head2 ;
	}

	else {
		d = l2 - l1;
		p1 = head2;
		p2 = head1;
	}

//  since p1 is pointing to larger ll, we traverse that only
	while (d--) {

		p1 = p1->next;

		if (p1 == 0) {
			return -1;
		}

	}

// now matching the address of the pointers and shifting them everytime...
	while (p1 and p2) {

		if (p1 == p2) {
			return p1->data; // or even p2 data

		}

		p1 = p1->next;
		p2 = p2->next;

	}

	return -1;
}

//  say we have to intersect the ll... the function is :

void intersect(Node*&head1, Node*&head2, int pos) {

//  if the length of ll1 is greater than ll2 ...
	Node *temp1 = head1 ;

	pos-- ; // we are starting count from 0...

	while (pos--) {
		temp1 = temp1->next;

	}
	Node *temp2 = head2 ;

	while (temp2->next != NULL) {

		temp2 = temp2->next ;
	}

	temp2->next = temp1;
}
////////////////////////

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
	intersect(head1, head2, 3);
	ct(intersection(head1, head2));


	return 0;
}

