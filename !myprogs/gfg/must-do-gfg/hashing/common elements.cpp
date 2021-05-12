/*
///////////////////////////////////////////
//Question/Info

Common Elements
Easy Accuracy: 51.41% Submissions: 5392 Points: 2
Given two lists V1 and V2 of sizes n and m respectively. Return the list of elements common to both the lists and return the list in sorted order. Duplicates may be there in the output list.

Example:

Input:
5
3 4 2 2 4
4
3 2 2 7

Output:
2 2 3

Explanation:
The first list is {3 4 2 2 4}, and the second list is {3 2 2 7}.
The common elements in sorted order are {2 2 3}
User Task:
This is a function problem. You need to complete the function common_element that takes both the lists as parameters and returns a list of common elements.

Constraints:
1 <= n, m <= 105
1 <= Vi <= 105

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

	class Solution {
	public:
		vector<int> common_element(vector<int>v1, vector<int>v2)
		{
			// Your code here

			// sort(v1.begin(),v1.end());
			// sort(v2.begin(),v2.end());

			int arr[100001] = {0};

			for (int i = 0 ; i < v1.size(); ++i) {
				++arr[v1[i]];
			}

			vector<int> v;

			for (int i = 0 ; i < v2.size(); i++ ) {
				if (arr[v2[i]]) {
					v.push_back(v2[i]);
					--arr[v2[i]];
				}
			}

			sort(v.begin(), v.end());
			return v;
		}
	};





// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}