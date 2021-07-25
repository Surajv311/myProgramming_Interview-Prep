/*
///////////////////////////////////////////
//Question/Info

Kadane's Algorithm
Medium Accuracy: 51.0% Submissions: 70765 Points: 4
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.



Example 1:

Input:
N = 5
arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which
is a contiguous subarray.
Example 2:

Input:
N = 4
arr[] = {-1,-2,-3,-4}
Output:
-1
Explanation:
Max subarray sum is -1
of element (-1)


Your Task:
You don't need to read input or print anything. The task is to complete the function maxSubarraySum() which takes arr and N as input parameters and returns the sum of subarray with maximum sum.



Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)



Constraints:
1 ≤ N ≤ 106
-107 ≤ A[i] <= 107

Company Tags
 24*7 Innovation Labs Accolite Amazon Citrix D-E-Shaw FactSet Flipkart Hike Housing.com MetLife Microsoft Morgan Stanley Ola Cabs Oracle Payu Samsung Snapdeal Teradata Visa Walmart Zoho

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
		// arr: input array
		// n: size of array
		//Function to find the sum of contiguous subarray with maximum sum.
		int maxSubarraySum(int arr[], int n) {

			// Your code here

			int msf = INT_MIN; int meh = 0 ;
			// max so far... max ending here...
			for (int i = 0 ; i < n ; ++i) {

				meh += arr[i];

				if (meh < arr[i]) {
					meh = arr[i];
				}

				if (msf < meh) {
					msf = meh;
				}

			}

			return msf;
		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}