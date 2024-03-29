


/*


Construct Tree from Preorder Traversal
Medium Accuracy: 50.68% Submissions: 13854 Points: 4
Construct a binary tree of size N using two given arrays pre[] and preLN[]. Array pre[] represents preorder traversal of a binary tree. Array preLN[] has only two possible values ‘L’ and ‘N’. The value ‘L’ in preLN[] indicates that the corresponding node in Binary Tree is a leaf node and value ‘N’ indicates that the corresponding node is a non-leaf node.
Note: Every node in the binary tree has either 0 or 2 children.

Example 1:

Input :
N = 5
pre[] = {10, 30, 20, 5, 15}
preLN[] = {N, N, L, L, L}

Output:
          10
        /    \
      30      15
     /  \
   20    5


Your Task:
You dont need to read input or print anything. Complete the function constructTree() which takes N, pre[] and preLN[] as input parameters and returns the root node of the constructed binary tree.
Note: The output generated by the compiler will contain the inorder traversal of the created binary tree.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


Constraints:
1 ≤ N ≤ 104
1 ≤ pre[i] ≤ 107
preLN[i]: {'N', 'L'}

View Bookmarked Problems
Company Tags
 Amazon Hike

*/






Node* fun(int n, int pre[], char preLN[], int& i) {

    if (i >= n) return 0;

    Node * x = new Node(pre[i]);
    if (preLN[i] == 'N') { //     if(preLN[i++]=='N'){

        i++;
        // not leaf.. then x->left recursive calls...
        x->left =  fun(n, pre, preLN, i);

        i++;
        x->right = fun(n, pre, preLN, i);

    }

    // else when preLN is 'L'
    return x;

}

struct Node *constructTree(int n, int pre[], char preLN[])
{
    // Code here
    int i = 0 ;
    return fun(n, pre, preLN, i);


    /*

    using iterative way

     stack<Node*>s;
    Node* root = new Node(pre[0]);
    s.push(root);
    int i=1;
    while(i<n){
        Node* curr = s.top();
        if(curr->left==NULL){
            curr->left = new Node(pre[i]);
            if(preLN[i]=='N'){
                s.push(curr->left);
            }
            i++;
        } else if(curr->right==NULL){
            curr->right = new Node(pre[i]);
            if(preLN[i]=='N'){
                s.push(curr->right);
            }
            i++;
        }
        else{
            s.pop();
        }
    }
    return root;

    */

}































