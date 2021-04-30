/*
///////////////////////////////////////////
//Question/Info

Josephus problem
Easy Accuracy: 52.47% Submissions: 37146 Points: 2
Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle in a fixed direction.

The task is to choose the safe place in the circle so that when you perform these operations starting from 1st place in the circle, you are the last one remaining and survive.

Example 1:

Input:
n = 3 k = 2
Output: 3
Explanation: There are 3 persons so
skipping 1 person i.e 1st person 2nd
person will be killed. Thus the safe
position is 3.


Example 2:

Input:
n = 5 k = 3
Output: 4
Explanation: There are 5 persons so
skipping 2 person i.e 3rd person will
be killed. Thus the safe position is 4.


Your Task:
You don't need to read input or print anything. You are required to complete the function josephus () that takes two parameters n and k and returns an integer denoting safe position.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= k, n <= 20

Company Tags
 Amazon Walmart Microsoft

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

	int fun(int n , int k, vector<int>&v, int index ) {

		if (v.size() == 1) {
			return v[0];
		}


		index = (index + k) % v.size();

		v.erase(v.begin() + index);
		int x = v.size();

		fun(x, k, v, index);

	}

	int josephus(int n, int k)
	{
		//Your code here

		vector<int> v;

		for (int i = 1; i <= n; ++i) {
			v.push_back(i);
		}

		--k; int index = 0;

		return fun(n, k, v, index);

	}




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}