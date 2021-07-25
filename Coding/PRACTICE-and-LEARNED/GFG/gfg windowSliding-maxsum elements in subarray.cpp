// Given an array of integers of size ‘n’.
// Our aim is to calculate the maximum sum of ‘k’
// consecutive elements in the array.

// Input  : arr[] = {100, 200, 300, 400}
//          k = 2
// Output : 700

/////////////////////////////////////////////////////////


/*
INT_MAX is a macro that specifies that an integer variable
cannot store any value beyond this limit.
INT_MIN specifies that an integer variable
cannot store any value below this limit.

Value of INT_MAX is +2147483647.
Value of INT_MIN is -2147483648.
*/


//Window Sliding Technique

// This technique shows how a nested for loop
//  in some problems can be converted to a single for
//  loop to reduce the time complexity.


////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
#define int long long int
#define setbits(x) __builtin_popcount(x)
using namespace std;

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t maxsumWS(int arr[] , int n , int m ) {


// n must be greater
	if (n < m) {
		cout << "error";
		return -1;
	}

	int sum = 0 ;
	for (int i = 0; i < m; ++i)
	{
		sum += arr[i] ;
	}

	int sum2 = sum ;
	int d ;
	for (int i = m; i < n; ++i)
	{
		sum2 += arr[i] - arr[i - m]; // sliding like window pane
		d = max(sum , sum2);
	}


	return d ;
}

int32_t main() {


//////
	c_p_c();
///////

// window sliding method


	int n ; // size of array
	cin >> n ;

	int m ; // number of consecutive elements in array
	cin >> m ;

	int arr[n] ;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i] ;
	}

	cout << maxsumWS(arr , n , m );

	return 0 ;
}


// brute force method would be :

/*
int maxSum(int arr[], int n, int k)
{
	// Initialize result
	int max_sum = INT_MIN;

	// Consider all blocks starting with i.
	for (int i = 0; i < n - k + 1; i++) {
		int current_sum = 0;
		for (int j = 0; j < k; j++)
			current_sum = current_sum + arr[i + j];

		// Update result if required.
		max_sum = max(current_sum, max_sum);
	}

	return max_sum;
}
*/