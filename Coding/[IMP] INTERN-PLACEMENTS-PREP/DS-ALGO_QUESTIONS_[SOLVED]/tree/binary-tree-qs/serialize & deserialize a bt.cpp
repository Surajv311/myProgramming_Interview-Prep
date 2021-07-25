/*
///////////////////////////////////////////
//Question/Info

Serialize and Deserialize a Binary Tree
Medium Accuracy: 47.46% Submissions: 31173 Points: 4
Serialization is to store a tree in an array so that it can be later restored and Deserialization is reading tree back from the array. Now your task is to complete the function serialize which stores the tree into an array A[ ] and deSerialize which deserializes the array to tree and returns it.
Note: The structure of tree must be maintained.

Example 1:

Input:
      1
    /   \
   2     3
Output: 2 1 3
Example 2:

Input:
         10
       /    \
      20    30
    /   \
   40  60
Output: 40 20 60 10 30
Your Task:
The task is to complete two function serialize which takes the root node of the tree as input andstores the tree into an array and deSerialize which deserializes the array to the original tree and returns the root of it.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= Number of nodes <= 1000
1 <= Data of a node <= 1000


Note: The Input/Ouput format and Example given above are used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console, and should not print anything on stdout/console. The task is to complete the function specified, and not to write the full code.


Company Tags
 Accolite Adobe Amazon Flipkart InMobi Linkedin MAQ S

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

	class Solution
	{
	public:
		//Function to serialize a tree and return a list containing nodes of tree.
		void Serialize(Node*root, vector<int>&v)
		{
			if (root == NULL)
			{
				v.push_back(-1);
				return;
			}
			v.push_back(root->data);
			Serialize(root->left, v);
			Serialize(root->right, v);
		}
		vector<int> serialize(Node *root)
		{
			//Your code here
			vector<int>v;
			Serialize(root, v);
			return v;
		}

		//Function to deserialize a list and construct the tree.
		const int empty = -1;
		int index = 0;
		Node * deSerialize(vector<int> &A)
		{
			//Your code here
			if (index == A.size())
				return NULL;
			int value = A[index++];
			if (value == empty) return NULL;
			Node*root = new Node(value);
			root->left = deSerialize(A);
			root->right = deSerialize(A);

			return root;
		}

	};




	/*

	LEETCODE EXPLANATION & QUESTION.........

	LEETCODE SOLN...
	297. Serialize and Deserialize Binary Tree
	Hard

	4563

	207

	Add to List

	Share
	Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer, or transmitted across a network connection link to be reconstructed later in the same or another computer environment.

	Design an algorithm to serialize and deserialize a binary tree. There is no restriction on how your serialization/deserialization algorithm should work. You just need to ensure that a binary tree can be serialized to a string and this string can be deserialized to the original tree structure.

	Clarification: The input/output format is the same as how LeetCode serializes a binary tree. You do not necessarily need to follow this format, so please be creative and come up with different approaches yourself.



	Example 1:


	Input: root = [1,2,3,null,null,4,5]
	Output: [1,2,3,null,null,4,5]
	Example 2:

	Input: root = []
	Output: []
	Example 3:

	Input: root = [1]
	Output: [1]
	Example 4:

	Input: root = [1,2]
	Output: [1,2]


	Constraints:

	The number of nodes in the tree is in the range [0, 104].
	-1000 <= Node.val <= 1000
	//////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////

	//
	 //* Definition for a binary tree node.
	 //* struct TreeNode {
	 //*     int val;
	 //*     TreeNode *left;
	 //*     TreeNode *right;
	 //*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	 //* };
	 //
	class Codec {
	public:

	    // Encodes a tree to a single string.
	    string serialize(TreeNode* root) {

	//         lets do the preorder traversal...
	//         using delimiter ','

	        if(root==NULL) return "NULL,";

	return to_string(root->val) + ","+serialize(root->left)+serialize(root->right);


	    }


	    TreeNode* help(queue<string>&q){

	     string node = q.front(); q.pop();

	        if(node=="NULL") return 0;

	        TreeNode* nroot = new TreeNode(stoi(node));

	        nroot->left = help(q);
	            nroot->right = help(q);

	        return nroot;

	    }

	    // Decodes your encoded data to tree.
	    TreeNode* deserialize(string data) {
	//          got string data... preorder...
	//         now removing the delimiters... pushing in queue...

	        queue<string> q;
	        string s = "";
	        for(int i = 0 ; i < data.length();i++){

	            if(data[i]==','){

	                q.push(s);
	                s = "";
	                continue;
	            }

	            else s+=data[i];

	        }
	        if(s.length()!=0) q.push(s);

	//          we have s now...

	        return help(q);


	    }
	};

	*/



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

