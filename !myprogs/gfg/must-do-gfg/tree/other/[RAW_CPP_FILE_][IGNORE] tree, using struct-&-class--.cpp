/*
///////////////////////////////////////////
//Question/Info

binary tree.... struct & class ......

author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define _IOS   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long double ld;
typedef long long int lli;

#pragma GCC optimize("Ofast")

void c_p_c()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

class NodeCl {

public:
	int data ; NodeCl* left ; NodeCl* right;

	NodeCl(int data) {
		this->data = data;
		left = 0;
		right = 0;

	}

};


struct NodeSt {
	int data;
	NodeSt* left;
	NodeSt* right;
};

NodeSt* create(int data)
{
	NodeSt* nn = new NodeSt();
	if (!nn) {
		cout << "Memory error\n";
		return NULL;
	}
	nn->data = data;
	nn->left = nn->right = NULL;
	return nn;
}

void inorder(NodeSt* temp)
{
	if (temp == NULL)
		return;

	inorder(temp->left);
	cout << temp->data << ' ';
	inorder(temp->right);
}


int32_t main() {
///////////
//	c_p_c();
///////////
	_IOS
//////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	// NodeCl *root = new NodeCl(1);
	// root->left = new NodeCl(2);
	// root->right = new NodeCl(3);


	NodeSt* root = create(1);
	root->left = create(2);
	root->right = create(3);
	inorder(root);


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

