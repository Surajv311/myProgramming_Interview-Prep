/*
///////////////////////////////////////////
//Question/Info

append k nodes of linkedlist...

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

int lengthf(Node * head) {
	int l = 0 ;

	Node*temp = head ;

	while (temp != 0) {
		l++;
		temp = temp->next;
	}
	return l ;
}

Node *kappend(Node* &head, int k) {

	Node *newhead;
	Node *newtail;
	Node*tail = head ;

	int l = lengthf(head);
	int count = 1 ;

	while (tail->next != 0) {

		k = k % l;// for edge case
		if (count == l - k) {
			// the moment we reach the end of the linkedlist
			newtail = tail;
		}

// now jumpig to the next node which we have to append from the beginnning

		if (count == l - k + 1) {
			newhead = tail;
		}

		tail = tail->next ;
		count++;
	}



// now all we have to do is change links

	newtail->next = 0 ;
	tail->next = head;
	return newhead;
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
		ll(&head, data);
	}
	display(head);
	ct("");
	Node * newhead = kappend(head, 3);
	display(newhead);

	return 0;
}



