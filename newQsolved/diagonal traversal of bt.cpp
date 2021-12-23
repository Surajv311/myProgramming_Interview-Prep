


/*

Diagonal Traversal of Binary Tree
Medium Accuracy: 49.87% Submissions: 32132 Points: 4
Given a Binary Tree, print the diagonal traversal of the binary tree.

Consider lines of slope -1 passing between nodes. Given a Binary Tree, print all diagonal elements in a binary tree belonging to same line.

Example 1:

Input :
            8
         /     \
        3      10
      /   \      \
     1     6     14
         /   \   /
        4     7 13
Output : 8 10 14 3 6 7 13 1 4
Explanation:
unnamed
Diagonal Traversal of binary tree :
 8 10 14 3 6 7 13 1 4
Your Task:
You don't need to read input or print anything. The task is to complete the function diagonal() that takes the root node as input argumets and returns the diagonal traversal of the given tree.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
Here N is number of nodes.

Constraints:
1 <= Number of nodes<= 105
1 <= Data of a node<= 105


View Bookmarked Problems
Company Tags
 Amazon Microsoft

*/




vector<int> diagonal(Node *root)
{
	// your code here

	vector<int> ans;
	if (root == NULL) return ans;

	queue<Node*> q;

	q.push(root);
	while (!q.empty()) {
		int s = q.size();
		while (s--) {
			auto x = q.front() ; q.pop();
			ans.push_back(x->data);

			while (x) {
				if (x->left) {
					q.push(x->left);
				}
				if (x->right) {
					//   means x->right exist... so...
					ans.push_back(x->right->data);

				}
				x = x->right;
			}
		}
	}

	return ans;


}























