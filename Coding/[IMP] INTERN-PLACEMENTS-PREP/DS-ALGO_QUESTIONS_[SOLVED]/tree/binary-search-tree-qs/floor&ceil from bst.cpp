/*
///////////////////////////////////////////
//Question/Info

Floor and Ceil from a BST
Difficulty Level : Medium
Last Updated : 26 Apr, 2021
Given a binary tree and a key(node) value, find the floor and ceil value for that particular key value.

Floor Value Node: Node with the greatest data lesser than or equal to the key value.
Ceil Value Node: Node with the smallest data larger than or equal to the key value.

For example, Let’s consider the Binary Tree below –

          8
        /   \
      4      12
    /  \    /  \
   2    6  10   14

Key: 11  Floor: 10  Ceil: 12
Key: 1   Floor: -1  Ceil: 2
Key: 6   Floor: 6   Ceil: 6
Key: 15  Floor: 14  Ceil: -1
There are numerous applications where we need to find the floor/ceil value of a key in a binary search tree or sorted array. For example, consider designing a memory management system in which free nodes are arranged in BST. Find the best fit for the input request.

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

////////////////////////////////////////////////////////////

// RECURSION
// TO FIND CEIL VALUE
	int Ceil(node * root, int input)
	{
		// Base case
		if (root == NULL)
			return -1;

		// We found equal key
		if (root->key == input)
			return root->key;

		// If root's key is smaller, ceil must be in right subtree
		if (root->key < input)
			return Ceil(root->right, input);

		// Else, either left subtree or root has the ceil value
		int ceil = Ceil(root->left, input);
		return (ceil >= input) ? ceil : root->key;
	}
// SIMILARLY FLOOR VALUE

////////////////////////////////////////////////////////////

// ITERATIVE
// TO FIND CEIL/FLOOR VALUE

// value of floor/ceil passed initially = -1 ...
	void floorCeilBSTHelper(Node * root, int key, int& floor, int& ceil)
	{

		while (root) {

			if (root->data == key) {
				ceil = root->data;
				floor = root->data;
				return;
			}

			if (key > root->data) {
				floor = root->data;
				root = root->right;
			}
			else {
				ceil = root->data;
				root = root->left;
			}
		}
		return;
	}


////////////////////////////////////////////////////////////



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

