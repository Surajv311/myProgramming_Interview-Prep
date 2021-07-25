/*
///////////////////////////////////////////
//Question/Info

Search in row wise and column wise sorted array

Given an n x n matrix and a number x, find the position of x in the matrix if it is present in it. Otherwise, print “Not Found”. In the given matrix, every row and column is sorted in increasing order. The designed algorithm should have linear time complexity.

Example:

Input: mat[4][4] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};
              x = 29
Output: Found at (2, 1)
Explanation: Element at (2,1) is 29

Input : mat[4][4] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};
              x = 100
Output : Element not found
Explanation: Element 100 is not found


Efficient Solution

Approach: The simple idea is to remove a row or column in each comparison until an element is found. Start searching from the top-right corner of the matrix. There are three possible cases.
The given number is greater than the current number: This will ensure, that all the elements in the current row are smaller than the given number as the pointer is already at the right-most element and the row is sorted. Thus, the entire row gets eliminated and continue the search on the next row. Here elimination means that row needs not to be searched.
The given number is smaller than the current number: This will ensure, that all the elements in the current column are greater than the given number. Thus, the entire column gets eliminated and continue the search on the previous column i.e. the column at the immediate left.
The given number is equal to the current number: This will end the search.
Algorithm:
Let the given element be x, create two variable i = 0, j = n-1 as index of row and column
Run a loop until i = 0
Check if the current element is greater than x then decrease the count of j. Exclude the current column.
Check if the current element is less than x then increase the count of i. Exclude the current row.
If the element is equal then print the position and end.

Complexity would be O(m + n)

Brute force way would have solution of O(n^2)...
i.e iterating through whole matrix and finding the element....

author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define int 		   long long int
#define setbits(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout << x << "\n";
#define ct2(x,y) 	   cout << x << " " << y << "\n";
#define forn(i,n) 	   for(int i = 0; i < (int)(n); ++i)
#define forx(i,x,n)    for(int i = x; i < (int)(n); ++i)
#define nfor(i,n)      for(int i = n-1; i >= 0; --i)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed << setprecision(y) << x;
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

#pragma GCC optimize("Ofast")

void c_p_c()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int finde(int arr[4][4], int n, int x)
{
	if (n == 0) {
		return -1;
	}

	int sma = arr[0][0], lar = arr[n - 1][n - 1];
	// since in our matrix if we notice,
	// the first element would be smallest
	// and the bottom right would be the largest
	if (x < sma or x > lar) {
		return -1;
	}

	// set indexes for top right element
	int i = 0, j = n - 1;
	//  ~ binary search in 2D...

	while (i < n && j >= 0)
	{
		if (arr[i][j] == x)
		{
			// cout << "found at: " << i << " " << j;
			return 1;
		}

		if (arr[i][j] > x) {
			j--;
		}

		// Check if arr[i][j] < x
		else {
			i++;
		}
	}

	// cout << "Element not found";
	return -1;
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

// its a good use of binary search

	int arr[4][4] = { { 10, 20, 30, 40 },
		{ 15, 25, 35, 45 },
		{ 27, 29, 37, 48 },
		{ 32, 33, 39, 50 }
	};

	int n = 4 ; // row or col size = 4 ...

	cout << finde(arr, n, 37);


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}