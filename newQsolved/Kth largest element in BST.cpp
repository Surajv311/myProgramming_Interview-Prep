

/*

Kth largest element in BST
Easy Accuracy: 42.26% Submissions: 52813 Points: 2
Given a Binary search tree. Your task is to complete the function which will return the Kth largest element without doing any modification in Binary Search Tree.


Example 1:

Input:
      4
    /   \
   2     9
k = 2
Output: 4

Example 2:

Input:
       9
        \
          10
K = 1
Output: 10

Your Task:
You don't need to read input or print anything. Your task is to complete the function kthLargest() which takes the root of the BST and an integer K as inputs and returns the Kth largest element in the given BST.


Expected Time Complexity: O(H + K).
Expected Auxiliary Space: O(H)


Constraints:
1 <= N <= 1000
1 <= K <= N

View Bookmarked Problems
Company Tags
 Accolite Amazon Samsung SAP Labs Microsoft


*/




void fun(Node* root, vector<int> & ans) {

	if (root == 0) return;

	fun(root->left, ans);
	ans.push_back(root->data);
	fun(root->right, ans);

	return;
}

int kthLargest(Node *root, int K)
{
	//Your code here
	if (root == 0) return 0;

	vector<int> ans;
	fun(root, ans);

	sort(ans.begin(), ans.end(), greater<int>());
	// reverse(ans.begin(),ans.end());

	return ans[K - 1];
}































