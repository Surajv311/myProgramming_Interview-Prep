/*
///////////////////////////////////////////
//Question/Info


Connect n ropes with minimum cost


NOTE:
ITS SIMILAR TO Huffman Coding OR Optimal Merge Pattern Problem


There are given n ropes of different lengths, we need to connect
these ropes into one rope. The cost to connect two ropes
is equal to sum of their lengths. We need to connect the
ropes with minimum cost.

For example if we are given 4 ropes of lengths 4, 3, 2 and 6.
We can connect the ropes in following ways.
1) First connect ropes of lengths 2 and 3. Now we have
three ropes of lengths 4, 6 and 5.
2) Now connect ropes of lengths 4 and 5. Now we have
two ropes of lengths 6 and 9.
3) Finally connect the two ropes and all ropes have connected.

Total cost for connecting all ropes is 5 + 9 + 15 = 29.
This is the optimized cost for connecting ropes. Other
ways of connecting ropes would always have same or more cost.
For example, if we connect 4 and 6 first
(we get three strings of 3, 2 and 10), then connect 10 and 3
(we get two strings of 13 and 2). Finally we connect 13 and 2.
Total cost in this way is 10 + 13 + 15 = 38.

author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define int 		   long long int
#define setbits(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout << x << "\n";
#define ct2(x,y) 	   cout << x << " " << y << "\n";
#define forn(i,n) 	   for(int i = 0; i < (int)(n); ++i)
#define forx(i,x,n)    for(int i = x; i < (int)(n); ++i)
#define nfor(i,n)      for(int i = n-1; i >= 0; --i)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed << setprecision(y) << x;
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

#pragma GCC optimize("Ofast")

void c_p_c()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int rmc(int arr[], int size) {

	p_q<int, vi, greater<int>> minh(arr, arr + size);
	// we could also push elements via loop...

	int cost = 0 ;

	while (minh.size() > 1) {

// popping top 2 elements and adding...
// since min heap so elements at top are min. ...

		int a = minh.top();
		minh.pop();

		int b = minh.top();
		minh.pop();

// now finding cost

		cost += a + b ;

// now connect the ropes and pushing back to heap... so:
// again this process would repeat...
// since cost is basically summing length everytime we join...
// note that length would remain constant for all cases we consider,
// but cost would differ ...

		int l = a + b;

		minh.push(l);

	}

	return cost;
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

	int arr[] = { 4, 3, 2, 6 };

	int size = sizeof arr / sizeof arr[0];

	ct(rmc(arr, size));


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}