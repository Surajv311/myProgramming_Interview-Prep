

/*


Root to leaf path sum
Easy Accuracy: 36.24% Submissions: 68649 Points: 2
Given a binary tree and an integer S, check whether there is root to leaf path with its sum as S.

Example 1:

Input:
Tree =
            1
          /   \
        2      3
S = 2

Output: 0

Explanation:
There is no root to leaf path with sum 2.
Example 2:

Input:
Tree =
            1
          /   \
        2      3
S = 4

Output: 1

Explanation:
The sum of path from leaf node 3 to root 1 is 4.

Your Task:
You dont need to read input or print anything. Complete the function hasPathSum() which takes root node and target sum S as input parameter and returns true if path exists otherwise it returns false.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(height of tree)

Constraints:
1 ≤ N ≤ 10^4
1 ≤ S ≤ 10^6

View Bookmarked Problems
Company Tags
 Accolite Adobe Amazon CouponDunia FactSet Goldman Sachs Housing.com Microsoft Oracle Samsung Atlassian

*/




bool hasPathSum(Node *root, int sum) {
	// Your code here

	if (root == 0 and sum == 0) return true; // &  root->left==0 and root->right==0...
	// means if root==0, we are at leaf node, and by that time, sum has become 0...

	if (root == 0 or sum == 0) return false; // so path does not exist

	// OBSERVATION, IF THE `IF CONDITIONS` above ARE REVERSED, ANS BECOMES WRONG...

	return (
	           hasPathSum(root->left, sum - (root->data)) or
	           hasPathSum(root->right, sum - (root->data))
	       );
	// note how we are passing the sum-(root->data) in this case..,
	// hence every time the we reach to a depth, our sum value would be decreasing...

	// also we used `or` condition since at every node, we get 2 choices...
	// and with the choice, we make the decision...

	// hence the moment root has become leaf & the sum has become 0, it returns true...

	// good q.

}

























