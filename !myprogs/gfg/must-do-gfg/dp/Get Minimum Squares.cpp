/*
///////////////////////////////////////////
//Question/Info

Get Minimum Squares
Medium Accuracy: 48.57% Submissions: 2312 Points: 4
Given a number N. Find the minimum number of squares of any number that sums to N. For Example: If N = 100 , N can be expressed as (10*10) and also as (5*5 + 5*5 + 5*5 + 5*5) but the output will be 1 as minimum number of square is 1 , i.e (10*10).


Example 1:

Input: N = 100
Output: 1
Explanation: 10 * 10 = 100
Example 2:

Input: N = 6
Output: 3
Explanation = 1 * 1 + 1 * 1 + 2 * 2 = 6


Your Task:
You don't need to read or print anyhting. Your task is to complete the function MinSquares() which takes N as input parameter and returns minimum number of squares needed to make N.


Expcted Time Complexity: O(N * sqrt(N) )
Expected Space Complexity: O(N)


Constraints:
1 <= N <= 10000

Company Tags
 Amazon Wipro Microsoft


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


		int MinSquares(int n)
		{
			// Code here

			/* recursion
			o(2^n)

			   if(sqrt(n) - floor(sqrt(n)) == 0){
			       return 1;
			   }
			   else if(n<=3){
			       return n;
			   }


			   int ans = INT_MAX;


			   for(int i = 1 ; i<=n ; ++i){

			       int x = i*i;

			       if(x>n){
			           break;
			       }

			       ans = min(ans, 1+ MinSquares(n-x));


			   }

			   return ans;
			   */


			/*
			// 	dp -> o(n^2)
			int dp[n+1];

			dp[0] = 0;
			dp[1] = 1;
			dp[2] = 2 ;
			dp[3] = 3;

			    for(int i = 4 ; i<=n ; ++i){

			        dp[i] = i;

			        for(int j = 1; j<=ceil(sqrt(i)); ++j){

			            int x = j*j;

			            if(x>i){
			                break;
			            }

			             dp[i] = min(dp[i], 1+ dp[i-x]);

			        }

			    }

			    return dp[n];

			    */

			/*

			bfs - o(n*(n^1/2))

			//
			vector<int> visited(n + 1,0);

			queue< pair<int,int> >q;

			int ans = INT_MAX;


			q.push({n,0});

			visited[n] = 1;
			while(!q.empty())
			{
			pair<int,int> p;
			p = q.front();
			q.pop();

			if(p.first == 0)
			ans=min(ans, p.second);

			for(int i = 1; i * i <= p.first; i++)
			{
			// i*i <=p.first is a very important condition!!
			int path=(p.first - (i*i));

			if(path >= 0 && ( !visited[path]
			                     || path == 0))
			{


			visited[path]=1;


			q.push({path,p.second + 1});
			}
			}
			}


			return ans;


			*/

			vector<int> v(n + 1, 0);

			queue<pair<int, int>> q;

			int ans = INT_MAX;
			q.push({n, 0});
			v[n] = 1;


			while (!q.empty())
			{

				pair<int, int> x;
				x = q.front();
				q.pop();

				if (x.first == 0) {
					ans = min(ans, x.second);
				}

				for (int i = 1 ; i * i <= x.first ; ++i) {

					int temp = i * i;
					int k = x.first - temp;

					if (k >= 0 and (!v[k] or k == 0)) {

						v[k] = true;

						q.push({k, x.second + 1});

					}


				}

			}

			return ans;

		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}