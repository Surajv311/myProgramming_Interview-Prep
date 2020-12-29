/*
///////////////////////////////////////////
//Question/Info

CODE FOR A *BINARY TREE* DATA STRUCTURE

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

	int data ;
	Node *left;
	Node *right;

};

Node* create(int data) { // Node* - since it would return a pointer

	Node *nn = new Node();

	nn->data = data;
	nn->right = 0;
	nn->left = 0;

	return nn;


}

void check(Node* &x, int data) {


	if (x == 0) {
		x = create(data); // now our new node with a data is created
	}

	else if (x->data > data) {
		check(x->left, data);
	}
	else {
		check(x->right, data);
	}
}

void display(Node* ref) {

// Inorder[LPR], Preorder[PLR] , Postorder[LRP]

	//  preorder

	if (ref != NULL) {
		cout << ref->data << " "; //p
		display(ref->left);//l
		display(ref->right); //r
	}

	// post order lrp

	// if (ref != NULL) {
	// 	display(ref->left);//l
	// 	display(ref->right); //r
	// 	cout << ref->data << " "; //p
	// }

	// inorder l p r

	// if (ref != NULL) {
	// 	display(ref->left); //l
	// 	cout << ref->data << " "; //p
	// 	display(ref->right); //r
	// }

}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	Node* root = NULL;

	int n ; // number of nodes
	cin >> n ;

	forn(i, n) {

		int data;
		cin >> data ;
		check(root, data);
	}

	display(root);

	return 0;
}