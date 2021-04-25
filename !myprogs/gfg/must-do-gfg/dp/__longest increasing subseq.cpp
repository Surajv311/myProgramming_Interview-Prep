/*
///////////////////////////////////////////
//Question/Info

Longest Increasing Subsequence
Medium Accuracy: 46.69% Submissions: 20113 Points: 4
Given an array of integers, find the length of the longest (strictly) increasing subsequence from the given array.

Example 1:

Input:
N = 16
A[]={0,8,4,12,2,10,6,14,1,9,5
     13,3,11,7,15}
Output: 6
Explanation:Longest increasing subsequence
0 2 6 9 13 15, which has length 6
Example 2:

Input:
N = 6
A[] = {5,8,3,7,9,1}
Output: 3
Explanation:Longest increasing subsequence
5 7 9, with length 3
Your Task:
Complete the function longestSubsequence() which takes the input array and its size as input parameters and returns the length of the longest increasing subsequence.

Expected Time Complexity : O( N*log(N) )
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤ 105
0 ≤ A[i] ≤ 106

Company Tags
 Amazon BankBazaar OYO Rooms Paytm Samsung Microsoft

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


/*
Note that it is SUBSEQ. SO IT NEED NOT BE CONTIGUOUS...
*/

int longestSubsequence(int n, int a[])
{
	// your code here
	vector<int> v;
	v.push_back(a[0]);
	for (int i = 1; i < n; i++) {
		if (a[i] > v.back()) {
			v.push_back(a[i]);
		} else {
			int min = lower_bound(v.begin(), v.end(), a[i]) - v.begin();
			// note that v is filling one by one after every iteration...
			/*
			yo 0 __ 1
			yo 2 __ 2
			6
			*/
			v[min] = a[i];
		}
	}
	return v.size();
}

/*
BRUTE FORCE DP

      int list[n];
 list[0] = 1;

      for(int i = 1 ; i < n ; i ++){
          list[i] = 1;
          for(int j = 0 ; j < i ; j++){

              if(arr[i]>arr[j] and list[j]>=list[i])
              {
                  list[i] = list[j]+1;
              }

          }
      }
      int ans;
      return ( ans = *max_element(list,list+n));

*/

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


	//taking size of array
	int n = 8;
	int a[n] = { -1, 1, 2, 3, 0, 4, 2, 5};


	//calling method longestSubsequence()
	cout << longestSubsequence(n, a) << endl;


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}