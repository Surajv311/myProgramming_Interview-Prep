/*
///////////////////////////////////////////
//Question/Info

Maximize The Cut Segments
Medium Accuracy: 38.76% Submissions: 23119 Points: 4
Given an integer N denoting the Length of a line segment. You need to cut the line segment in such a way that the cut length of a line segment each time is either x , y or z. Here x, y, and z are integers.
After performing all the cut operations, your total number of cut segments must be maximum.

Example 1:

Input:
N = 4
x = 2, y = 1, z = 1
Output: 4
Explanation:Total length is 4, and the cut
lengths are 2, 1 and 1.  We can make
maximum 4 segments each of length 1.
Example 2:

Input:
N = 5
x = 5, y = 3, z = 2
Output: 2
Explanation: Here total length is 5, and
the cut lengths are 5, 3 and 2. We can
make two segments of lengths 3 and 2.
Your Task:
You only need to complete the function maximizeTheCuts() that takes n, x, y, z as parameters and returns max number cuts.

Expected Time Complexity : O(N)
Expected Auxiliary Space: O(N)

Constraints
1 <= N, x, y, z <= 104

Company Tags
 Amazon OYO Rooms Microsoft

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


// memoization

	// int dp[100007];

	// int fun(int n, int x, int y, int z){


	//   if(n<=0){
	//       return 0;
	//   }

	//   if(dp[n]!=-1){
	//       return dp[n];
	//   }

	//       int a = INT_MIN ; int b = INT_MIN; int c = INT_MIN;

	//  if(n>=x){
	//       a = maximizeTheCuts(n-x, x, y, z);
	//   }

	//   if(n>=y){
	//       b = maximizeTheCuts(n-y, x, y, z);
	//   }

	//   if(n>=z){
	//       c = maximizeTheCuts(n-z, x, y, z);
	//   }



	//   return dp[n] = 1 + max(a, max(b,c));


	// }


	int maximizeTheCuts(int n, int x, int y, int z)
	{

		// memset(dp,-1,sizeof(dp));

		// return fun(n,x,y,z);

		int dp[n + 1];
		memset(dp, -1, sizeof(dp));

		dp[0] = 0;
		for (int i = 0 ; i < n + 1; ++i) {

			if (dp[i] == -1) {
				continue;
			}

			else {

				if (i + x <= n) {
					dp[i + x] = max(dp[i + x], 1 + dp[i]);
				}

				if (i + y <= n) {
					dp[i + y] = max(dp[i + y], 1 + dp[i]);
				}

				if (i + z <= n) {
					dp[i + z] = max(dp[i + z], 1 + dp[i]);
				}

			}

		}

		if (dp[n] == -1) {
			dp[n] = 0;
		}

		return dp[n];
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}