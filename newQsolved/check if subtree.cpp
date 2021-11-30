/*

Check if subtree
Medium Accuracy: 43.66% Submissions: 80919 Points: 4
Given two binary trees with head reference as T and S having at most N nodes. The task is to check if S is present as subtree in T.
A subtree of a tree T1 is a tree T2 consisting of a node in T1 and all of its descendants in T1.

Example 1:

Input:
T:      1          S:   3
      /   \            /
     2     3          4
   /  \    /
  N    N  4
Output: 1
Explanation: S is present in T

Example 2:

Input:
T:      26         S:   26
       /   \           /  \
     10     N        10    N
   /    \           /  \
   20    30        20  30
  /  \            /  \
 40   60         40  60
Output: 1
Explanation:
S and T are both same. Hence,
it can be said that S is a subtree
of T.
Your Task:
You don't need to read input or print anything. Your task is to complete the function isSubtree() that takes root node of S and T as parameters and returns 1 if S is a subtree of T else 0.


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= Number of nodes <= 105
1 <= Value of nodes <= 104


View Bookmarked Problems
Company Tags
 Adobe Amazon Cavisson System MakeMyTrip Microsoft Morgan Stanley OYO Rooms SAP Labs


*/




/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution
{
public:
	//Function to check if S is a subtree of tree T.

	bool check(Node* T, Node*S) {
		if (T == 0 and S == 0) return true;
		if (T == 0 or S == 0) return false;
		if (T->data != S->data) return false;

		return check(T->left, S->left) and check(T->right, S->right);
	}

	bool isSubTree(Node* T, Node* S)
	{
		// Your code here

		// easy...solved in leetcode...

		if (T == 0) return false;
		if (check(T, S)) return true;

		return isSubTree(T->left, S) or isSubTree(T->right, S) ;

	}
};