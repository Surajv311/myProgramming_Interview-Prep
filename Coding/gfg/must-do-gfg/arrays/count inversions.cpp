/*
///////////////////////////////////////////
//Question/Info

Count Inversions
Medium Accuracy: 39.43% Submissions: 48664 Points: 4
Given an array of integers. Find the Inversion Count in the array.

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum.
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.


Example 1:

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5
has three inversions (2, 1), (4, 1), (4, 3).
Example 2:

Input: N = 5
arr[] = {2, 3, 4, 5, 6}
Output: 0
Explanation: As the sequence is already
sorted so there is no inversion count.
Example 3:

Input: N = 3, arr[] = {10, 10, 10}
Output: 0
Explanation: As all the elements of array
are same, so there is no inversion count.
Your Task:
You don't need to read input or print anything. Your task is to complete the function inversionCount() which takes the array arr[] and the size of the array as inputs and returns the inversion count of the given array.

Expected Time Complexity: O(NLogN).
Expected Auxiliary Space: O(N).

Constraints:
1 ≤ N ≤ 5*105
1 ≤ arr[i] ≤ 1018

Company Tags
 Adobe Amazon BankBazaar Flipkart Microsoft Myntra

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
		// arr[]: Input Array
		// N : Size of the Array arr[]
		// Function to count inversions in the array.


		long long merge(long long arr[], long long low, long long mid, long long high)
		{
			long long n1 = mid - low + 1;
			long long n2 = high - mid;

			long long right[n2], left[n1];

			for (long long i = 0; i < n1; i++)
			{
				left[i] = arr[low + i];
			}

			for (long long i = 0; i < n2; i++)
			{
				right[i] = arr[mid + i + 1];
			}

			long long i = 0, j = 0, k = low;
			long long res = 0;

			while (i < n1 && j < n2)
			{
				if (left[i] <= right[j])
				{
					arr[k++] = left[i++];
				}
				else
				{
					arr[k++] = right[j++];
					res += (n1 - i);
				}
			}

			while (i < n1)
			{
				arr[k++] = left[i++];
			}

			while (j < n2)
			{
				arr[k++] = right[j++];
			}

			return res;
		}

		long long mergeSort(long long arr[], long long low, long long high)
		{
			long long res = 0;

			if (low < high)
			{
				long long mid = low + (high - low) / 2;

				res += mergeSort(arr, low, mid);
				res += mergeSort(arr, mid + 1, high);

				res += merge(arr, low, mid, high);
			}

			return res;
		}

		long long int inversionCount(long long arr[], long long N)
		{
			// Your Code Here

			return mergeSort(arr, 0, N - 1);

		}

	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}