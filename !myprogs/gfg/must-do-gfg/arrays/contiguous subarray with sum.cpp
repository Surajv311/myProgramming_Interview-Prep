/*
///////////////////////////////////////////
//Question/Info

contiguous Subarray with given sum
Easy Accuracy: 39.71% Submissions: 87564 Points: 2
Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.



Example 1:

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements
from 2nd position to 4th position
is 12.


Example 2:

Input:
N = 10, S = 15
A[] = {1,2,3,4,5,6,7,8,9,10}
Output: 1 5
Explanation: The sum of elements
from 1st position to 5th position
is 15.


Your Task:
You don't need to read input or print anything. The task is to complete the function subarraySum() which takes arr, N and S as input parameters and returns a list containing the starting and ending positions of the first such occurring subarray from the left where sum equals to S. The two indexes in the list should be according to 1-based indexing. If no such subarray is found, return -1.



Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)



Constraints:
1 <= N <= 105
1 <= Ai <= 1010



Company Tags
 Amazon Facebook Google Visa

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


	class Solution
	{
	public:
		//Function to find a continuous sub-array which adds up to a given number.
		vector<int> subarraySum(int arr[], int n, int s)
		{
			vector<int> v;
			int curSum = 0; int pos = 0 ;
			bool flag = false;
			for (int i = 0 ; i < n ; ++i) {

				curSum += arr[i];

				while (curSum > s and pos < i) {

					curSum -= arr[pos];
					++pos;

				}

				if (curSum == s) {
					v.push_back(pos + 1); // to remove 0 indexing
					v.push_back(i + 1);
					flag = true;
					break;
				}

				// if sub array not found
				// flag remains false

			}

			if (flag == false) {
				v.push_back(-1);
			}

			return v;
		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}