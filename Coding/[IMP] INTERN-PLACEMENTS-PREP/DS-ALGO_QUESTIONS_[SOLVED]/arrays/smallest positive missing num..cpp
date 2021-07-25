/*
///////////////////////////////////////////
//Question/Info

Smallest Positive missing number
Medium Accuracy: 45.09% Submissions: 58204 Points: 4
You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.

Example 1:

Input:
N = 5
arr[] = {1,2,3,4,5}
Output: 6
Explanation: Smallest positive missing
number is 6.
Example 2:

Input:
N = 5
arr[] = {0,-10,1,3,-20}
Output: 2
Explanation: Smallest positive missing
number is 2.
Your Task:
The task is to complete the function missingNumber() which returns the smallest positive missing number in the array.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 106
-106 <= arr[i] <= 106



Company Tags
 Accolite Amazon Samsung Snapdeal

author: srj_v
///////////////////////////////////////////
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



	class Solution
	{
	public:
		//Function to find the smallest positive number missing from the array.
		int missingNumber(int arr[], int n)
		{
			// Your code here

			for (int i = 0 ; i < n ; i++) {

// can't use if statement... WA...
				while (arr[i] >= 1 and arr[i] <= n and arr[i] != arr[arr[i] - 1])
				{
					swap(arr[i], arr[arr[i] - 1]);
				}
			}

			for (int i = 0 ; i < n ; i++) {
				if (arr[i] != i + 1) {
					return i + 1;
				}
			}

			return n + 1;
		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}