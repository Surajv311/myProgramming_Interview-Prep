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

class Node {

public:
	int data ; Node* left ; Node* right;

	Node(int data) {
		this->data = data;
		left = 0;
		right = 0;

	}

};


struct NodeNode {
	int data;
	NodeNode* left;
	NodeNode* right;
};

NodeNode* CreateNode(int data)
{
	NodeNode* nn = new NodeNode();
	if (!nn) {
		cout << "Memory error\n";
		return NULL;
	}
	nn->data = data;
	nn->left = nn->right = NULL;
	return nn;
}

void inorder(NodeNode* temp)
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

	// Node *root = new Node(1);
	// root->left = new Node(2);
	// root->right = new Node(3);


	NodeNode* root = CreateNode(1);
	root->left = CreateNode(2);
	root->right = CreateNode(3);
	inorder(root);


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

