/*
///////////////////////////////////////////
//Question/Info

Put Even position Nodes after Odd position Nodes⭐

Given a singly linked list, group all odd position Nodes
together followed by the even position Nodes.
You should try to do it in place.
The program should run in O(1) space complexity
and O(Nodes) time complexity.

///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define int 		   long long int
#define setbits(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define ct(x) 		   cout<<x<<endl;
#define ct2(x,y) 	   cout<<x<<" "<<y<<endl;
#define forn(i,n) 	   for(int i = 0; i < (int)(n); i++)
#define forx(i,x,n)    for(int i = x; i < (int)(n); i++)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed<<setprecision(y)<<x;
#define PI 			   3.1415926535897932384626433832795
#define MOD 		   1000000007 // (1e9+7)
#define pii 		   pair<int,int>
#define pis 		   pair<int,string>
#define vi  		   vector<int>
#define vii 		   vector<pii>
#define mii 		   map<int,int>
//typedef long long int lli;
typedef long double ld;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

class Node {
public:
	int data;
	Node* next;
	Node(int val) {
		data = val;
		next = 0 ;
	}
};


void evenAfterOdd(Node* &head) {
	Node* odd = head;
	Node* even = head->next;
	Node* evenStart = even;
	while (odd->next != NULL && even->next != NULL) {
		odd->next = even->next;
		odd = odd->next;
		even->next = odd->next;
		even = even->next;
	}
	odd->next = evenStart;
	if (odd->next != NULL) {
		even->next = NULL;
	}
}


int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

// INSERT NOES//
	// DISPLAY NODES..........



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}