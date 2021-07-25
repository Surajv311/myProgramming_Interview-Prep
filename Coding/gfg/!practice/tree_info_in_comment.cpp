/*
///////////////////////////////////////////

Tree Data Structure
------------------------------------------------------------------

Binary Tree:
Max nodes at given height h = 2^h
Traversals:
      tree
      ----
       1    <-- root
     /   \
    2     3
   / \
  4	  5

Depth First Traversals:
(a) Inorder (L, P, R) : 4 2 5 1 3
(b) Preorder (P, L, R) : 1 2 4 5 3
(c) Postorder (L, R, P) : 4 5 2 3 1

Breadth First or Level Order Traversal : 1 2 3 4 5

-------------------------------------------------------------------

Binary Search Tree:
The left subtree of a node contains only
nodes with keys lesser than the node’s key. For right it's greater...
Traversals:

         100                               100
        /   \        Insert 40            /    \
      20     500    --------->          20     500
     /  \                              /  \
    10   30                           10   30
                                              \
                                              40

When you delete a node from this tree, then replace
it with its inorder successor.

--------------------------------------------------------------------

AVL Tree:
Its a self-balancing BST where the difference between
heights of left and right subtrees cannot
be more than one for all nodes.->-1,0,1

LL, RR, LR , RL rotations in the tree for balancing...
For height of a tree: go until leaf node- could be for left/right subtree

Check balance factor of each node every time you insert/delete
T1, T2 and T3 are subtrees of the tree
rooted with y (on the left side) or x (on
the right side)
     y                               x
    / \     Right Rotation          /  \
   x   T3   - - - - - - - >        T1   y
  / \       < - - - - - - -            / \
 T1  T2     Left Rotation            T2  T3

--------------------------------------------------------------------

Red Black Tree:
It's just like AVL Tree
So if your application involves frequent insertions and deletions,
then Red-Black trees should be preferred.
And if the insertions and deletions are less frequent and
search is a more frequent operation,
then AVL tree should be preferred over Red-Black Tree.
You name the nodes as red/black color.
Rules:
-Every node has a colour either red or black.
-The root of tree is always black.
-There are no two adjacent red nodes (A red node cannot
 have a red parent or red child).
-Every path from a node (including root) to any of its
 descendant NULL node has the same number of black nodes.

--------------------------------------------------------------------

Splay Tree:
Splay tree is also self-balancing BST.
The main idea of splay tree is to bring the recently accessed
item to root of the tree,
this makes the recently searched item to be accessible in
O(1) time if accessed again.

////You do the rotations on the grandparent node to bring ///
///your recen accessed element upward for zig-zig or zag-zag ///
///rotation... for others you start from your eleemnt only///

left - zag, right - zig
     			y                                      x
               / \     Zig (Right Rotation)          /  \
              x   T3   – - – - – - – - - ->         T1   y
             / \       < - - - - - - - - -              / \
            T1  T2     Zag (Left Rotation)            T2   T3


    Zig-Zig (Left Left Case):
       G                        P                           X
      / \                     /   \                        / \
     P  T4   rightRotate(G)  X     G     rightRotate(P)  T1   P
    / \      ============>  / \   / \    ============>       / \
   X  T3                   T1 T2 T3 T4                      T2  G
  / \                                                          / \
 T1 T2                                                        T3  T4

Zag-Zag (Right Right Case):
  G                          P                           X
 /  \                      /   \                        / \
T1   P     leftRotate(G)  G     X     leftRotate(P)    P   T4
    / \    ============> / \   / \    ============>   / \
   T2   X               T1 T2 T3 T4                  G   T3
       / \                                          / \
      T3 T4                                        T1  T2


 Zag-Zig (Left Right Case):
       G                        G                            X
      / \                     /   \                        /   \
     P   T4  leftRotate(P)   X     T4    rightRotate(G)   P     G
   /  \      ============>  / \          ============>   / \   /  \
  T1   X                   P  T3                       T1  T2 T3  T4
      / \                 / \
    T2  T3              T1   T2

Zig-Zag (Right Left Case):
  G                          G                           X
 /  \                      /  \                        /   \
T1   P    rightRotate(P)  T1   X     leftRotate(P)    G     P
    / \   =============>      / \    ============>   / \   / \
   X  T4                    T2   P                 T1  T2 T3  T4
  / \                           / \
 T2  T3                        T3  T4
Example:


         100                      100                       [20]
         /  \                    /   \                        \
       50   200                50    200                      50
      /          search(20)    /          search(20)         /  \
     40          ======>     [20]         ========>         30   100
    /            1. Zig-Zig    \          2. Zig-Zig         \     \
   30               at 40       30            at 100         40    200
  /                               \
[20]                              40

When you delete the element you are gonna
splay that element first and then delete.
And then the inorder predecessor of the
subtree must be splayed to that position
and joined with other subtree.

----------------------------------------------------

B tree:
B-Tree is a self-balancing search tree.
In most of the other self-balancing search trees
(like AVL and Red-Black Trees), it is assumed that
everything is in main memory.........

-------------------------------------

Heap:
A special Tree-based data structure in which the tree is
a complete binary tree. Generally, Heaps can be of two types:

Max-Heap: The key present at the root node must be greatest
among the keys present at all of it’s children.
The same property must be recursively true for all sub-trees in that Binary Tree.

Min-Heap: The key present at the root node must be minimum......

                                  10
                                /    \
                              15      30
                             /  \    /  \
                           40    50 100   40
min heap

                                  100
                            	/    \
                        	  40      50
                            /  \     /  \
                          10    15  50   40
max heap

Insertion:
First increase the heap size by 1, so that it can store the new element.
Insert the new element at the end of the Heap.
This newly inserted element may distort the
properties of Heap for its parents.
So, in order to keep the properties of Heap,
heapify this newly inserted element following a bottom-up approach.
EG:
Suppose the Heap is a Max-Heap as:
      10
    /    \
   5      3
  / \
 2   4

The new element to be inserted is 15.

Process:
Step 1: Insert the new element at the end.
      10
    /    \
   5      3
  / \    /
 2   4  15

Step 2: Heapify the new element following bottom-up
        approach.
-> 15 is more than its parent 3, swap them.
       10
    /    \
   5      15
  / \    /
 2   4  3

-> 15 is again more than its parent 10, swap them.
       15
    /    \
   5      10
  / \    /
 2   4  3

Therefore, the final heap after insertion is:
       15
    /    \
   5      10
  / \    /
 2   4  3


Deletion:
Replace the root or element to be deleted by the last element.
Delete the last element from the Heap.
Since, the last element is now placed at the position of the root node.
So, it may not follow the heap property.
Therefore, heapify the last node placed at the position of root.
EG:
Suppose the Heap is a Max-Heap as:
      10
    /    \
   5      3
  / \
 2   4

The element to be deleted is root, i.e. 10.

Process:
The last element is 4.

Step 1: Replace the last element with root, and delete it.
      4
    /    \
   5      3
  /
 2

Step 2: Heapify root.
Final Heap:
      5
    /    \
   4      3
  /
 2

Since deleting an element at any intermediary position
in the heap can be costly, so we can simply replace
the element to be deleted by the last element and delete
the last element of the Heap.


///////////////////////////////////////////
*/

#include <bits/stdc++.h>
#define int long long int
#define setbits(x) __builtin_popcount(x)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ct(x) cout<<x<<endl;
#define ct2(x,y) cout<<x<<" "<<y<<endl;
#define forn(i, n) for (int i = 0; i < (int)(n); i++)
#define forx(i, x, n) for (int i = x ; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

//typedef long long int lli;
typedef long double ld;
//typedef pair<int, int> pii;
//typedef vector<int> vi;
//typedef vector<pii> vii;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

using namespace std;


void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int32_t main() {

///////////
	c_p_c();
///////////

	// code












	return 0;
}