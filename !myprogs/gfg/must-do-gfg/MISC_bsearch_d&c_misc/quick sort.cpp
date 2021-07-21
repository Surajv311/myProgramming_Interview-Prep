/*
//////////////////////////////////////////////////////
//Question/Info

Quick Sort
Medium Accuracy: 46.8% Submissions: 60900 Points: 4
Quick Sort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot.
Given an array arr[], its starting position low and its ending position high.

Implement the partition() and quickSort() functions to sort the array.

Example 1:

Input:
N = 5
arr[] = { 4, 1, 3, 9, 7}
Output:
1 3 4 7 9
Example 2:

Input:
N = 9
arr[] = { 2, 1, 6, 10, 4, 1, 3, 9, 7}
Output:
1 1 2 3 4 6 7 9 10

Your Task:
You don't need to read input or print anything. Your task is to complete the functions partition()  and quickSort() which takes the array arr[], low and high as input parameters and partitions the array. Consider the last element as the pivot such that all the elements less than(or equal to) the pivot lie before it and the elements greater than it lie after the pivot.

Expected Time Complexity: O(N*logN)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 103
1 <= arr[i] <= 104

Company Tags
 Adobe Amazon Goldman Sachs Grofers Hike HSBC Ola Cabs Qualcomm Samsung SAP Labs Target Corporation VMWare Microsoft

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


	int partition (int arr[], int low, int high)
	{
		// Your code hereint

		int pivot = arr[low];

		int start = low ; int end = high;

		while (start < end) {

			while (arr[start] <= pivot) {
				start++;
			}
			while (arr[end] > pivot) {
				end--;
			}

			if (start < end) {
				swap(arr[start], arr[end]);
			}
		}
		swap(arr[low], arr[end]);
		return end;

	}


	void quickSort(int arr[], int low, int high)
	{
		if (low < high)
		{
			/* pi is partitioning index, arr[p] is now at right place */
			int pi = partition(arr, low, high);
			// Separately sort elements before partition and after partition
			quickSort(arr, low, pi - 1);
			quickSort(arr, pi + 1, high);
		}
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////