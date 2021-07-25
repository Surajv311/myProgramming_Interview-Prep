/*
///////////////////////////////////////////
//Question/Info

Dijkstra's Shortest path Algo

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
class Graph {
	map<T, list<pair<T, int> > > adj;

public:

	void addEdge(T u, T v, int dist, bool bidir = true) {
		adj[u].push_back(make_pair(v, dist));
		if (bidir) {
			adj[v].push_back(make_pair(u, dist));
		}

	}
	void printAdj() {
		//Let try to print the adj list
		//Iterate over all the key value pairs in the map
		for (auto j : adj) {

			cout << j.first << "->";

			//Iterater over the list of cities
			for (auto l : j.second) {
				cout << "(" << l.first << "," << l.second << ")";

			}
			cout << endl;
		}

	}
	void dijsktraSSSP(T src) {

		map<T, int> dist;

		//Set all distance to infinity
		for (auto j : adj) {
			dist[j.first] = INT_MAX;
		}

		//Make a set to find a out node with the minimum distance
		set<pair<int, T> > s; // set stores value in sorted order... here it would sort based on first parameter

		dist[src] = 0;
		s.insert(make_pair(0, src));

		while (!s.empty()) {

			//Find the pair at the front.
			auto p =   *(s.begin()); // value inside pointer (s.begin())
			T node = p.second;

			int nodeDist = p.first;
			s.erase(s.begin());


			//Iterate over neighbours/children of the current node
			for (auto x : adj[node]) {

				if (nodeDist + x.second < dist[x.first]) {


					//In the set updation of a particular is not possible
					// we have to remove the old pair, and insert the new pair to simulation updation
					T dest = x.first;
					auto f = s.find( make_pair(dist[dest], dest));
					if (f != s.end()) {
						s.erase(f);
					}

					//Insert the new pair
					dist[dest] = nodeDist + x.second;
					s.insert(make_pair(dist[dest], dest));

				}

			}
		}
		//Lets print distance to all other node from src
		for (auto d : dist) {

			cout << d.first << " is located at distance of  " << d.second << endl;
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


	Graph<int> g;
	g.addEdge(1, 2, 1);
	g.addEdge(1, 3, 4);
	g.addEdge(2, 3, 1);
	g.addEdge(3, 4, 2);
	g.addEdge(1, 4, 7);
	//g.printAdj();
	// g.dijsktraSSSP(1);




	Graph<string> india;
	india.addEdge("Amritsar", "Delhi", 1);
	india.addEdge("Amritsar", "Jaipur", 4);
	india.addEdge("Jaipur", "Delhi", 2);
	india.addEdge("Jaipur", "Mumbai", 8);
	india.addEdge("Bhopal", "Agra", 2);
	india.addEdge("Mumbai", "Bhopal", 3);
	india.addEdge("Agra", "Delhi", 1);
	//india.printAdj();
	india.dijsktraSSSP("Amritsar");

	cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

