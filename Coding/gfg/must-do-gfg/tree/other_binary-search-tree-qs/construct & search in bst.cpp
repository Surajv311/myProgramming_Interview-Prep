/*
///////////////////////////////////////////
//Question/Info

constructing a BST... o(n)

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
	int data; Node*left; Node*right;

	Node(int data) {
		this->data = data;
		left = right = NULL;
	}
};

Node* construct(Node*node, int data) {

	if (node == 0) node = new Node(data);
	else if (data > node->data) node->right = construct(node->right, data);
	else node->left = construct(node->left, data);
	return node;

}

void inorder(Node *root) {

	if (root == 0) return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);

}

bool search(Node*root, int num) {

	if (root == 0) return false;

	if (root->data == num) return true;

	if (root->data > num) return search(root->left, num);

	else return search(root->right, num);

// we can also iteratively search using queue....

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

	Node*root = 0 ;

	int n = 5; int arr[n] = {7, 9, 3, 2, 4};
	for (int i = 0 ; i < n ; i++)
	{
		// int data; cin >> data;
		int data = arr[i];
		if (root == 0) root = construct(root, data);
		else construct(root, data);
	}

	inorder(root);

	cout << "\n";
	int num = 43; // to search

	cout << search(root, num);


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

