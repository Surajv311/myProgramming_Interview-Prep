/*
///////////////////////////////////////////
//Question/Info

Maximize Toys
Easy Accuracy: 56.1% Submissions: 3525 Points: 2
Given an array arr[ ] of length N consisting cost of N toys and an integer K depicting the amount with you. Your task is to find maximum number of toys you can buy with K amount.

Example 1:

Input:
N = 7
K = 50
arr[] = {1, 12, 5, 111, 200, 1000, 10}
Output: 4
Explaination: The costs of the toys
you can buy are 1, 12, 5 and 10.
Example 2:

Input:
N = 3
K = 100
arr[] = {20, 30, 50}
Output: 3
Explaination: You can buy all toys.
Your Task:
You do not need to read input or print anything. Your task is to complete the function toyCount() which takes the integer N, integer K and the array arr[ ] as input parameters and returns the maximum count of toys you can have.

Expected Time Complexity: O(N * Log(N))
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 105
1 ≤ K, arr[i] ≤ 109

Company Tags
 Microsoft

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
		int toyCount(int N, int K, vector<int> arr)
		{
			// code here

			sort(arr.begin(), arr.end());

			int sum = 0;

			int count = 0 ;

			for (int i = 0 ; i < N; ++i) {

				sum += arr[i];
				++count;

				if (sum > K) {
					--count;
					break;
				}

			}

			return count;

		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}