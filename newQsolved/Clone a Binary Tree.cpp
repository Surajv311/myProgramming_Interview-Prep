

/*


Clone a Binary Tree
Medium Accuracy: 55.34% Submissions: 16037 Points: 4
Given a special binary tree having random pointers along with the usual left and right pointers. Clone the given tree.


Example 1:

Input:

Output: 1
Explanation: The tree was cloned successfully.

Your Task:
No need to read input or print anything. Complete the function cloneTree() which takes root of the given tree as input parameter and returns the root of the cloned tree.

Note: The output is 1 if the tree is cloned successfully. Otherwise output is 0.


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).


Constraints:
1 ≤ Number of nodes ≤ 100
1 ≤ Data of a node ≤ 1000

View Bookmarked Problems
Company Tags
 Amazon Synopsys


*/



Node* cloneTree(Node* tree)
{
	//Your code here
	if (tree == NULL) return NULL;

	Node* x = new Node(tree->data);

	if (tree->random)
		x->random = tree->random;

	x->left = cloneTree(tree->left);
	x->right = cloneTree(tree->right);

	return x;
}






























