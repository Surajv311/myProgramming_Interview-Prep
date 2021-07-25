/*
//////////////////////////////////////////////////////
//Question/Info

Counting Sort

Points to be noted:
1. Counting sort is efficient if the range of input data is not significantly greater than the number of objects to be sorted. Consider the situation where the input sequence is between range 1 to 10K and the data is 10, 5, 10K, 5K.
2. It is not a comparison based sorting. It running time complexity is O(n) with space proportional to the range of data.
3. It is often used as a sub-routine to another sorting algorithm like radix sort.
4. Counting sort uses a partial hashing to count the occurrence of the data object in O(1).
5. Counting sort can be extended to work for negative inputs also.

Time Complexity: O(n+k) where n is the number of elements in input array and k is the range of input.
Auxiliary Space: O(n+k)

Complexity
Time Complexity
Best	O(n+k)
Worst	O(n+k)
Average	O(n+k)
Space Complexity	O(max)
Stability	Yes

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

void countSort(int array[], int size) {
	// The size of count must be at least the (max+1) but
	// we cannot assign declare it as int count(max+1) in C++ as
	// it does not support dynamic memory allocation.
	// So, its size is provided statically.
	int output[10];
	int count[10];
	int max = array[0];

	// Find the largest element of the array
	for (int i = 1; i < size; i++) {
		if (array[i] > max)
			max = array[i];
	}

	// Initialize count array with all zeros.
	for (int i = 0; i <= max; ++i) {
		count[i] = 0;
	}

	// Store the count of each element
	for (int i = 0; i < size; i++) {
		count[array[i]]++;
	}

	// Store the cummulative count of each array
	for (int i = 1; i <= max; i++) {
		count[i] += count[i - 1];
	}

	// Find the index of each element of the original array in count array, and
	// place the elements in output array
	for (int i = size - 1; i >= 0; i--) {
		output[count[array[i]] - 1] = array[i];
		count[array[i]]--;
	}

	// Copy the sorted elements into original array
	for (int i = 0; i < size; i++) {
		array[i] = output[i];
	}
}

// Function to print an array
void printArray(int array[], int size) {
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}

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

	int array[] = {4, 2, 2, 8, 3, 3, 1};
	int n = sizeof(array) / sizeof(array[0]);
	countSort(array, n);
	printArray(array, n);




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////