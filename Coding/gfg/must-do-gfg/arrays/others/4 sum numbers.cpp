/*
///////////////////////////////////////////
//Question/Info

Find All Four Sum Numbers
Medium Accuracy: 41.1% Submissions: 19078 Points: 4
Given an array of integers and another number. Find all the unique quadruple from the given array that sums up to the given number.

Example 1:

Input:
N = 5, K = 3
A[] = {0,0,2,1,1}
Output: 0 0 1 2 $
Explanation: Sum of 0, 0, 1, 2 is equal
to K.
Example 2:

Input:
N = 7, K = 23
A[] = {10,2,3,4,5,7,8}
Output: 2 3 8 10 $2 4 7 10 $3 5 7 8 $
Explanation: Sum of 2, 3, 8, 10 = 23,
sum of 2, 4, 7, 10 = 23 and sum of 3,
5, 7, 8 = 23.
Your Task:
You don't need to read input or print anything. Your task is to complete the function fourSum() which takes the array arr[] and the integer k as its input and returns an array containing all the quadruples in a lexicographical manner. Also note that all the quadruples should be internally sorted, ie for any quadruple [q1, q2, q3, q4] the following should follow: q1 <= q2 <= q3 <= q4.  (In the output each quadruple is separate by $. The printing is done by the driver's code)

Expected Time Complexity: O(N3).
Expected Auxiliary Space: O(N2).

Constraints:
1 <= N <= 100
-1000 <= K <= 1000
-100 <= A[] <= 100


Company Tags
 Adobe Amazon Google Microsoft OYO Rooms

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


	class Solution {
	public:
		// arr[] : int input array of integers
		// k : the quadruple sum required
		vector<vector<int> > fourSum(vector<int> &arr, int k) {
			// Your code goes here

			/*

			BRUTE FORCE : O(N^4) ... USING 4 FOR LOOPS

			BETTER: O(N^3) + LOG(N). USING 3 FOR LOOPS AND THEN A BINARY SEARCH TO FIND THE LAST ELEMENT

			OPTIMISED: O(N^3) + LOG(N). USING 2 LOOPS AND USING TWO POINTER TECHNIQUE TO FIND THE REMAINING SUM

			*/

			vector<vector<int>> ans;

			int n = arr.size();

			sort(arr.begin(), arr.end());

			for (int i = 0 ; i < n - 3; i++) {

				if (i > 0 and arr[i] == arr[i - 1]) continue;

				for (int j = i + 1 ; j < n - 2 ; j++) {

					if (j > i + 1 and arr[j] == arr[j - 1]) continue;

					int low = j + 1; int high = n - 1;


					while (low < high) {

						int x = arr[i] + arr[j] + arr[low] + arr[high];

						if (x > k) {
							high--;
						}

						else if (x < k) {
							low++;
						}

						else if (x == k) {
							ans.push_back({arr[i] , arr[j] , arr[low] , arr[high]});
							low++; high--; // to see if more such left
							// to avoid duplicate numbers

							while (low < high and arr[low] == arr[low - 1]) {
								low++;
							}
							while (low < high and arr[high] == arr[high + 1]) {
								high--;
							}

						}

					}


				}


			}

			return ans;
		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}