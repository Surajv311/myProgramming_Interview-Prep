/*
//////////////////////////////////////////////////////
//Question/Info

Shell Sort

ShellSort is mainly a variation of Insertion Sort.

Shell Sort Complexity
Time Complexity
Best	O(nlog n)
Worst	O(n2)
Average	O(nlog n)
Space Complexity	O(1)
Stability	No

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

// Shell sort
void shellSort(int array[], int n) {
	// Rearrange elements at each n/2, n/4, n/8, ... intervals
	for (int interval = n / 2; interval > 0; interval /= 2) {
		for (int i = interval; i < n; i += 1) {
			int temp = array[i];
			int j;
			for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
				array[j] = array[j - interval];
			}
			array[j] = temp;
		}
	}
}

// Print an array
void printArray(int array[], int size) {
	int i;
	for (i = 0; i < size; i++)
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



	int data[] = {9, 8, 3, 7, 5, 6, 4, 1};
	int size = sizeof(data) / sizeof(data[0]);
	shellSort(data, size);
	cout << "Sorted array: \n";
	printArray(data, size);


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////