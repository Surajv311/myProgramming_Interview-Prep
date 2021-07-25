/*
//////////////////////////////////////////////////////
//Question/Info

Median in a row-wise sorted Matrix
Medium Accuracy: 53.5% Submissions: 13951 Points: 4
Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.

Example 1:

Input:
R = 3, C = 3
M = [[1, 3, 5],
     [2, 6, 9],
     [3, 6, 9]]

Output: 5

Explanation:
Sorting matrix elements gives us
{1,2,3,3,5,6,6,9,9}. Hence, 5 is median.


Example 2:

Input:
R = 3, C = 1
M = [[1], [2], [3]]
Output: 2

Your Task:
You don't need to read input or print anything. Your task is to complete the function median() which takes the integers R and C along with the 2D matrix as input parameters and returns the median of the matrix.

Expected Time Complexity: O(32 * R * log(C))
Expected Auxiliary Space: O(1)


Constraints:
1<= R,C <=150
1<= matrix[i][j] <=2000

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


	int median(vector<vector<int>> &matrix, int r, int c) {
		// code here

		int med = (r * c  + 1) / 2;
		// to get a desired median position... total/2 should be the position...

		int low = 0;
		int high = 5000;

		int ans = 0 ;
		/* for an element to be the median,
		say n+1 where (n = even..) elements then our median
		element must be in the middle and it must have n/2 elements
		behind... so logic is we keep compare the mid element
		index which is (low+high)/2 which would keep on changing
		with the count of the elements that are lower that it ,
		since it is a sorted matrix, we can use
		upper bound on each and every row and take the count...
		since sorted so we can take the bounds and subtract to get the
		count... then just compare with the 'med'...*/

		while (low < high) {

			int count = 0 ;
			int mid = (low + high) / 2;

			for (int i = 0 ; i < r ; i++) {
				count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
				// to find the upper_bound(start iterator,end iterator, element...)
			}

			// if(count> med) high = mid;

			// else low = mid+1;

			if (count < med) low = mid + 1;
			else high = mid;

		}

		return low;

	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////