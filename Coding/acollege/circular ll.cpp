/*
///////////////////////////////////////////
//Question/Info

circular linkedlist
insertion/deletion......

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


void ihead(Node *&head, int val) {

	Node *nn = new Node(val);

	if (head == NULL) {
		nn->next = nn ;// self loop as single node & its circular ll
		head = nn ;
		return ;
	}
	Node *temp = head ;

	while (temp->next != head) {
		temp = temp->next;
	}

	temp->next = nn ;
	nn->next = head ;
	head = nn ;


}

void itail(Node *&head, int val) {


	if (head == NULL) {
		ihead(head, val);
		return;
	}

	Node *nn = new Node(val);

	Node* temp = head;

	while (temp->next != head)
	{
		temp = temp->next;
	}

	temp->next = nn ;
	nn->next = head;


}

void display(Node* head) {

	Node* temp = head ;
	do {
		cout << temp->data << " ";
		temp = temp->next;
	}
	while (temp != head);

}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	Node *head = 0 ;

	itail(head, 1);
	itail(head, 2);
	itail(head, 3);
	itail(head, 4);
	itail(head, 5);


	display(head);
	ct("")
	ihead(head, 9);
	ihead(head, 8);

	display(head);

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}