/*
///////////////////////////////////////////
//Question/Info

Finding middle element in a linked list
Easy Accuracy: 47.37% Submissions: 100k+ Points: 2
Given a singly linked list of N nodes. The task is to find the middle of the linked list. For example, if given linked list is 1->2->3->4->5 then the output should be 3.
If there are even nodes, then there would be two middle nodes, we need to print the second middle element. For example, if given linked list is 1->2->3->4->5->6 then the output should be 4.

Example 1:

Input:
LinkedList: 1->2->3->4->5
Output: 3
Explanation:
Middle of linked list is 3.
Example 2:

Input:
LinkedList: 2->4->6->7->5->1
Output: 7
Explanation:
Middle of linked list is 7.
Your Task:
The task is to complete the function getMiddle() which takes a head reference as the only argument and should return the data at the middle node of the linked list.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 5000

Company Tags
 Adobe Amazon Flipkart GE Hike IgniteWorld MAQ Software Microsoft Morgan Stanley Nagarro Netskope Payu Qualcomm Samsung SAP Labs Veritas VMWare Wipro Zoho

author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

// #define int 		   long long int
#define sbit(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout << x << "\n";
#define ct2(x,y) 	   cout << x << " " << y << "\n";
#define tc(x) 		   cout << x << " ";
#define tc2(x,y) 	   cout << x << " " << y << " ";
#define forn(i,n) 	   for(int i = 0; i < (int)(n); ++i)
#define forx(i,x,n)    for(int i = x; i < (int)(n); ++i)
#define nfor(i,n)      for(int i = n-1; i >= 0; --i)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed << setprecision(y) << x
#define PI 			   3.1415926535897932384626433832795
#define MOD 		   1000000007 // (1e9+7)
#define pii 		   pair<int,int>
#define pis 		   pair<int,string>
#define vi  		   vector<int>
#define vii 		   vector<pii>
#define mii 		   map<int,int>
#define p_q            priority_queue // priority_queue<int> (&) priority_queue< int,vi,greater<int> >
#define _IOS      	   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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
	c_p_c();
///////////
	_IOS
//////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/



	/* Link list Node
	struct Node {
	    int data;
	    Node* next;

	    Node(int x){
	        data = x;
	        next = NULL;
	    }

	}; */

	/* Should return data of middle node. If linked list is empty, then  -1*/
	int getMiddle(Node * head)
	{
		// Your code here
		Node*ref = head;
		Node *ans = head;
		int l = 0 ;
		while (ref != 0) {
			ref = ref->next;
			++l;
		}

		if (l == 1) {
			return ans->data;
		}

		l = l / 2 ;

		int data ;

		while (l != 0) {
			ans = ans->next;

			data = ans->data;

			--l;
		}

		return data;
	}




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}