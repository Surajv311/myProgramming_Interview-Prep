/*
//////////////////////////////////////////////////////
//Question/Info

Heap Sort
Medium Accuracy: 49.91% Submissions: 44589 Points: 4
Given an array of size N. The task is to sort the array elements by completing functions heapify() and buildHeap() which are used to implement Heap Sort.


Example 1:

Input:
N = 5
arr[] = {4,1,3,9,7}
Output:
1 3 4 7 9
Explanation:
After sorting elements
using heap sort, elements will be
in order as 1,3,4,7,9.
Example 2:

Input:
N = 10
arr[] = {10,9,8,7,6,5,4,3,2,1}
Output:
1 2 3 4 5 6 7 8 9 10
Explanation:
After sorting elements
using heap sort, elements will be
in order as 1, 2,3,4,5,6,7,8,9,10.

Your Task :
You don't have to read input or print anything. Your task is to complete the functions heapify(), buildheap() and heapSort() where heapSort() and buildheap() takes the array and it's size as input and heapify() takes the array, it's size and an index i as input. Complete and use these functions to sort the array using heap sort algorithm.


Expected Time Complexity: O(N * Log(N)).
Expected Auxiliary Space: O(1).


Constraints:
1 <= N <= 106
1 <= arr[i] <= 106

Company Tags
 24*7 Innovation Labs Amazon Belzabar Intuit Oracle Samsung SAP Labs Visa Microsoft

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


	void heapify(int arr[], int n, int i)
	{
		// Your Code Here

		//   int largest , l , r ,t;
		//  largest = i ;
		//  l = 2*i;
		//  r = (2*i)+1;
		//  if(l<=n && arr[l]>arr[largest])
		//  {
		//      largest = l ;
		//  }
		//  if(r <=n && arr[r]>arr[largest])
		//  {
		//      largest = r ;

		//  }
		//  if(largest!=i)
		//  {
		//      //swap arr[largest] , arr[i]
		//      t  = arr[largest];
		//      arr[largest] = arr[i];
		//      arr[i] = t ;
		//      heapify(arr , i , l );


		//  }


		int x = i;

		int left = ( 2 * i) + 1;

		int right = ( 2 * i) + 2;

		if ( left < n && arr [x] < arr [ left ] )

			x = left ;
		if ( right < n && arr[ x ] < arr[ right ])

			x = right;

		if ( x != i)
		{
			swap (arr[i] , arr[x]);
			heapify (arr , n , x);
		}

	}

public:
	//Function to build a Heap from array.
	void buildHeap(int arr[], int n)
	{
		// Your Code Here

		int s = (n - 1) / 2 ;
		for (int i = s ; i >= 0 ; i-- ) {
			heapify( arr , n , i ) ;
		}

	}


public:
	//Function to sort an array using Heap Sort.
	void heapSort(int arr[], int n)
	{
		//code here

//           int temp , i ;
//          // FOR BUILDING
//          for(i=n/2; i >= 1 ; i--)
//          {
//              heapify(arr , n , i );
//          }

// // FOR DELETING
//          for (i = n ; i>=1 ; i--)
//          {
//              // swap arr[n] , arr[i]
//             temp =  arr[1];
//             arr[1] = arr[i];
//             arr[i] = temp ;
//              heapify(arr , i-1 , 1);
//          }

		buildHeap(arr, n);
		for (int i = n - 1; i > 0; i--) {
			swap(arr[0], arr[i]);
			heapify(arr, i, 0);
		}

	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////