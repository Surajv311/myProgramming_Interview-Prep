/*
///////////////////////////////////////////
//Question/Info

Construct a graph - codechef

Graph can be constructed via:
------------------------------------------------------
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

*adjacency matrix - matrix to store graph vertices ...
[BUT IT TAKES HIGH SPACE COMPLEXITY O(N^2)]
[ALS TAKES O(N) TIME TO FIND NEIGHBOURS]
------------------------------------------------------
*adjacency list - (via lists or via a hashmap) ... [MOST PREFERRED]
[EASIER OT FIND NEIGHBOURS][MEMORY EFFICIENT]
------------------------------------------------------
*edge list - you store all source/destination points..
aka list of all vertices between...its used in kruskal's algorithm
------------------------------------------------------
*incidence matrix...

- we can use templates to represent nodes (as they could be string/int...)

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
------------------------------------------------------
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

template<typename T>
// class can also be used rather than typename
class Graph {
public:

	unordered_map<T, list<T>> adj;
	Graph() {
		// constructor
	}

	void add_edge(T n1, T n2, bool bidir = true) {

		adj[n1].pb(n2);
		if (bidir) {
			adj[n2].pb(n1);
		}

	}

	void display() {

		//cout << adj.size(); // can't use forn(i,adj.size()) since, this->adj
		for (auto x : this->adj) { // NOTE: 'this' is not necessarily required
			// for(auto x: adj){} would also suffice.
			cout << x.first << "-> ";

			for (T y : x.second) {

				cout << y << " ";
			}
			cout << endl;
		}
	}

};


int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	Graph<int> g1;

	g1.add_edge(1, 2);
	g1.add_edge(2, 3);
	g1.add_edge(1, 4);
	g1.add_edge(2, 4);
	g1.add_edge(4, 3);

	g1.display();

	return 0;
}

/*
NOTE

The first expression is used to allocate memory to contain one single element of type type. The second one is used to allocate a block (an array) of elements of type type, where number_of_elements is an integer value representing the amount of these. For example:

int * foo;
foo = new int [5];
// dynamically allocated memory...

------------------------------------------------------------

Key Differences Between Stack and Heap Allocations

In a stack, the allocation and deallocation is automatically done
In heap, it needs to be done by the programmer manually.

Handling of Heap frame is costlier than handling of stack frame.

Memory shortage problem is more likely to happen in stack whereas
the main issue in heap memory is fragmentation.

Accessing time of heap takes is more than a stack.

Memory leak occurs when programmers create a memory
in heap and forget to delete it.

*/