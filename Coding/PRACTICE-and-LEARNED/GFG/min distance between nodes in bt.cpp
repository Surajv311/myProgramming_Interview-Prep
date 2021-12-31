/*


Min distance between two given nodes of a Binary Tree
Medium Accuracy: 45.05% Submissions: 50411 Points: 4
Given a binary tree and two node values your task is to find the minimum distance between them.

Example 1:

Input:
        1
      /  \
     2    3
a = 2, b = 3
Output: 2
Explanation: The tree formed is:
       1
     /   \
    2     3
We need the distance between 2 and 3.
Being at node 2, we need to take two
steps ahead in order to reach node 3.
The path followed will be:
2 -> 1 -> 3. Hence, the result is 2.
Your Task:
You don't need to read input or print anything. Your task is to complete the function findDist() which takes the root node of the Tree and the two node values a and b as input parameters and returns the minimum distance between the nodes represented by the two given node values.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 <= Number of nodes <= 104
1 <= Data of a node <= 105



Note:The Input/Ouput format and Example given are used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.

View Bookmarked Problems
Company Tags
 Amazon Linkedin MakeMyTrip Ola Cabs Qualcomm Samsung


*/


/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
public:
	/* Should return minimum distance between a and b
	in a tree with given root*/

	Node* lca(Node*node, int a, int b) {

		if (node == 0) return 0;
		if (node->data == a or node->data == b) return node;

		Node*l = lca(node->left, a, b);
		Node*r = lca(node->right, a, b);

		if (l and r) return node;
		if (l) return l;
		else return r;

	}

	int dist(Node* l, int x) {

		if (l == 0) return 0;
		if (l->data == x) return 1;

		int a = dist(l->left, x);
		int b = dist(l->right, x);

		if (a == 0 and b == 0) return 0; // means equal value nodes in differnt parts of tree...

		return a + b + 1; // add 1 in every recursive call...

	}

	int findDist(Node* root, int a, int b) {
		// Your code here
//  we find lca, then dist from lca-a , lca-b & then -2... for getting total dist

		Node* l = lca(root, a, b);

		int d1 = dist(l, a);
		int d2 = dist(l, b);

		return d1 + d2 - 2;
	}
};


