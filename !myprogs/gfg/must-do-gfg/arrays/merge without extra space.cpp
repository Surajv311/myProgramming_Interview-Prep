/*
///////////////////////////////////////////
//Question/Info

Merge Without Extra Space
Hard Accuracy: 44.55% Submissions: 39461 Points: 8
Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. Merge them in sorted order without using any extra space. Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.


Example 1:

Input:
n = 4, arr1[] = [1 3 5 7]
m = 5, arr2[] = [0 2 6 8 9]
Output:
arr1[] = [0 1 2 3]
arr2[] = [5 6 7 8 9]
Explanation:
After merging the two
non-decreasing arrays, we get,
0 1 2 3 5 6 7 8 9.
Example 2:

Input:
n = 2, arr1[] = [10, 12]
m = 3, arr2[] = [5 18 20]
Output:
arr1[] = [5 10]
arr2[] = [12 18 20]
Explanation:
After merging two sorted arrays
we get 5 10 12 18 20.


Your Task:
You don't need to read input or print anything. You only need to complete the function merge() that takes arr1, arr2, n and m as input parameters and modifies them in-place so that they look like the sorted merged array when concatenated.


Expected Time Complexity:  O((n+m) log(n+m))
Expected Auxilliary Space: O(1)


Constraints:
1 <= n, m <= 5*104
0 <= arr1i, arr2i <= 107

Company Tags
 Amdocs Brocade Goldman Sachs Juniper Networks Linkedin Microsoft Quikr Snapdeal Synopsys Zoho

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
		//Function to merge the arrays.
		void merge(long long arr1[], long long arr2[], int n, int m)
		{
			// code here

			int i = n - 1;
			int j = 0 ;

			while (i >= 0 and j < m)
			{
				if (arr1[i] >= arr2[j]) {
					swap(arr1[i], arr2[j]);
					--i; ++j;
				}
				else {
					break;
				}
			}

			sort(arr1, arr1 + n);
			sort(arr2, arr2 + m);

		}
	};



	/*

	OR:


	//          for (int i = 0; i < m; i++)
	//             {

	//         if (arr1[i] > arr2[0])
	//         {
	//             swap(arr1[i], arr2[0]);
	//             int first = arr2[0];

	//           int k;
	//             for (k = 1; k < n && arr2[k] < first; k++) {
	//                 arr2[k - 1] = arr2[k];
	//             }

	//             arr2[k - 1] = first;
	//         }
	//     }

	*/

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}