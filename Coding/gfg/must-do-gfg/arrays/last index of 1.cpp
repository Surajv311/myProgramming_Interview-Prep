/*
///////////////////////////////////////////
//Question/Info

Last index of One
Basic Accuracy: 67.57% Submissions: 4998 Points: 1
Given a string S consisting only '0's and '1's,  find the last index of the '1' present in it.



Example 1:

Input:
S = 00001
Output:
4
Explanation:
Last index of  1 in given string is 4.


Example 2:

Input:
0
Output:
-1
Explanation:
Since, 1 is not present, so output is -1.



Your Task:
You don't need to read input or print anything. Your task is to complete the function lastIndex() which takes the string S as inputs and returns the last index of '1'. If '1' is not present, return "-1" (without quotes).



Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)



Constraints:
1 <= |S| <= 106
S = {0,1}

Company Tags
 InMobi

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
		int lastIndex(string s)
		{
			for (int i = s.length() - 1; i >= 0; i--) {
				if (s[i] == '1') {
					return i;
				}
			}
			return -1;
		}

	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}