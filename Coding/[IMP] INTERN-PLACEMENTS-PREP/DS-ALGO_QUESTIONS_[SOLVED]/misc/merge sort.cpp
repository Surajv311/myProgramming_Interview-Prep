/*
//////////////////////////////////////////////////////
//Question/Info

Merge Sort
Medium Accuracy: 41.46% Submissions: 61695 Points: 4
Given an array arr[], its starting position l and its ending position r. Sort the array using merge sort algorithm.
Example 1:

Input:
N = 5
arr[] = {4 1 3 9 7}
Output:
1 3 4 7 9
Example 2:

Input:
N = 10
arr[] = {10 9 8 7 6 5 4 3 2 1}
Output:
1 2 3 4 5 6 7 8 9 10

Your Task:
You don't need to take the input or print anything. Your task is to complete the function merge() which takes arr[], l, m, r as its input parameters and modifies arr[] in-place such that it is sorted from position l to position r, and function mergeSort() which uses merge() to sort the array in ascending order using merge sort algorithm.

Expected Time Complexity: O(nlogn)
Expected Auxiliary Space: O(n)

Constraints:
1 <= N <= 105
1 <= arr[i] <= 103

Company Tags
 Amazon Boomerang Commerce Goldman Sachs Grofers Medlife Microsoft Oracle Paytm Qualcomm Snapdeal Target Corporation Wipro


author: srj_v
//////////////////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define _IOS   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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

//////////////////////////////////////////////////////


int32_t main() {
///////////
//	c_p_c();
///////////
	_IOS
//////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/


	void merge(int arr[], int l, int m, int r)
	{

		int n1 = m - l + 1;
		int n2 = r - m;

		int y[n1], x[n2];

		for (int i = 0; i < n1; i++) {
			y[i] = arr[l + i];
		}
		for (int j = 0; j < n2; j++) {
			x[j] = arr[m + 1 + j];
		}


		int i = 0;

		int j = 0;

		int k = l;

		while (i < n1 && j < n2) {
			if (y[i] <= x[j]) {
				arr[k] = y[i];
				i++;
			}
			else {
				arr[k] = x[j];
				j++;
			}
			k++;
		}


		while (i < n1) {
			arr[k] = y[i];
			i++;
			k++;
		}

		while (j < n2) {
			arr[k] = x[j];
			j++;
			k++;
		}

	}


	void mergeSort(int arr[], int l, int r)
	{
		if (l < r)
		{
			// Same as (l+r)/2, but avoids overflow for
			// large l and h
			int m = l + (r - l) / 2;

			// Sort first and second halves
			mergeSort(arr, l, m);
			mergeSort(arr, m + 1, r);
			merge(arr, l, m, r);
		}
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////