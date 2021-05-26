/*
///////////////////////////////////////////
//Question/Info

Disjoint Set | Union By Rank and Path Compression


-> disjoint set data structure...

author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define _IOS   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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

/*
	NOTE THAT:


	PATH COMPRESSION helps to minimize number of movements
	while finding the parent of given node...

	Now while constructing, note the process:

	1. find parent
	2. find the rank

	-> If you have 2 nodes with same rank then increment
	the rank by 1(since tree height would be increased)
	->In the union of two nodes, ensure that the
	lower rank guy is attached to a higher rank guy/node.
	With this tree height won't increase... so no need
	to increment rank...
	Eg. node rank = 4 <- node rank 3 <- node rank 2 .....

	3. then see if you can join/union them
	4. change ranks of node accordingly...


	Time complexity of all operations : O(4a)...
	where 'a' - alpha (small constant near to 1)

	*/

int ranks[10007];
int parent[10007];

// intialising the ranks and the nodes...

void init(int n) {

	memset(ranks, -1 , sizeof(ranks));
	memset(parent, -1, sizeof(parent));

	for (int i = 0 ; i < n ; i++) {
		parent[i] = i ; // node is component of one self...
		ranks[i] = 0 ;
	}

}


int findPar(int node)
{
	if (node = parent[node])
	{
		return node;
	}
// doing path compression
	return parent[node] = findPar(parent[node]);
}

void unionSet(int u , int v) {

	u = findPar(u);
	v = findPar(v); // finding the parent to check if they are from same component....

// now we will compare ranks and union the nodes accordingly...

	if (ranks[u] < ranks[v]) {
// now if rank not equal then attach lower rank node with higher rank node...

// if they are attached and union , then both nodes would have the same parent...

// hence we are changing the val stored in parent arr[]...

		parent[u] = v	;
	}
	else if (ranks[u] > ranks[v]) {
		parent[v] = u	;
	}

	else {
		parent[v] = u	;
		ranks[u]++;
	}

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

	int n = 5;
	init(n);

	// while (n--) {
	// 	int u , v; cin >> u >> v ;
	// 	cout << n << " " << u << " " << v << " ";
	// 	unionSet(u, v); // constructing
	// }

	unionSet(1, 2);
	unionSet(6, 4);
	unionSet(1, 5);
	unionSet(2, 3);
	unionSet(3, 6);


	if (findPar(2) != findPar(3)) {
		cout << "different component" << " ";
	}
	else {cout << "same component" << " ";}


	for (int i = 0 ; i < n ; i++) {
		cout << parent[i] << " ";
	}




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}