/*
///////////////////////////////////////////
//Question/Info

Edit Distance
Medium Accuracy: 49.98% Submissions: 15654 Points: 4
Given two strings s and t. Find the minimum number of operations that need to be performed on str1 to convert it to str2. The possible operations are:

Insert
Remove
Replace


Example 1:

Input:
s = "geek", t = "gesek"
Output: 1
Explanation: One operation is required
inserting 's' between two 'e's of str1.
Example 2:

Input :
s = "gfg", t = "gfg"
Output:
0
Explanation: Both strings are same.


Your Task:
You don't need to read or print anything. Your task is to complete the function editDistance() which takes strings s and t as input parameters and returns the minimum number of operation required to make both strings equal.



Expected Time Complexity: O(|s|*|t|)
Expected Space Complexity: O(|s|*|t|)


Constraints:
1 <= Length of both strings <= 100
Both the strings are in lowercase.

Company Tags
 Amazon Goldman Sachs Microsoft

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


	int editDistance(string s, string t) {
		// Code here

		// similar logic like ...
		// there insert/delete, here insert/delete/replace ...

		int la = s.length();
		int lb = t.length();

		int dp[la + 1][lb + 1];

		for (int i = 0 ; i < la + 1; i++) {
			for (int j = 0 ; j < lb + 1 ; j++) {

				if (i == 0) {
					dp[i][j] = j;
				}
				else if (j == 0) {
					dp[i][j] = i ;
				}

				else if (s[i - 1] == t[j - 1]) {
					dp[i][j] = dp[i - 1][j - 1];
				}

				else {
					dp[i][j] =  1 + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
				}
			}
		}

		return (dp[la][lb]);

	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}