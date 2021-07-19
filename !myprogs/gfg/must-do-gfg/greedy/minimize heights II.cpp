/*
//////////////////////////////////////////////////////
//Question/Info

Minimize the Heights II
Medium Accuracy: 28.62% Submissions: 100k+ Points: 4
Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer.
Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.

A slight modification of the problem can be found here.


Example 1:

Input:
K = 2, N = 4
Arr[] = {1, 5, 8, 10}
Output:
5
Explanation:
The array can be modified as
{3, 3, 6, 8}. The difference between
the largest and the smallest is 8-3 = 5.
Example 2:

Input:
K = 3, N = 5
Arr[] = {3, 9, 12, 16, 20}
Output:
11
Explanation:
The array can be modified as
{6, 12, 9, 13, 17}. The difference between
the largest and the smallest is 17-6 = 11.

Your Task:
You don't need to read input or print anything. Your task is to complete the function getMinDiff() which takes the arr[], n and k as input parameters and returns an integer denoting the minimum difference.


Expected Time Complexity: O(N*logN)
Expected Auxiliary Space: O(N)

Constraints
1 ≤ K ≤ 104
1 ≤ N ≤ 105
1 ≤ Arr[i] ≤ 105

Company Tags
 Adobe Microsoft

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



	int getMinDiff(int arr[], int n, int k) {
		// code here

		sort(arr, arr + n);


		int mini, maxi;

		/*
		now observe...
		[1,2,.....n] be sorted arr., now we know
		i can add or subtract 'k', so if i want to find min. diff. :

		say our expected min ele. was 'x' and expected max was 'y'
		and that y-x gave us the min. difference possible...so:

		case 1: adding 'k':
		y + k - (x + k) = y-x ~ remains same no difference so this case - FFF // false

		case 2: subtract...

		y-k - (x-k) = ~ y-x ~ remains same... - FFF

		case 3: add and subtract

		y+k - (x-k) = ~y - x + (2k) ~ our diff is increasing if
		i add 'k' to a set of elements and the subtract k... - FFF

		case 4 : subtract and add

		y-k - (x+k) = ~ y - x - (2k) ~ here our diff. has decreased ...
		so this is the right case... so basically you decrease your min
		and increase your max and iterate...to find optimal 'x' & 'y' IN GENERAL..
		.. since in case you don't find any then our sorted array just
		increase the min val and decrease the max val, so that our diff.
		reaches an optimal minimum (which is like sort of opposite
		to what we did for other elements... though the gist is
		the same..)...[imagine as two pointers moving
		towards the center for the case of min & max val in arr and for
		other vals to get 'x' 'y' imagine as two pointers moving
		away from each other...] ...- TTT

		*/

		int ans = arr[n - 1] - arr[0]; // intial ans...

		for (int i = 1 ; i < n ; i++) {

			// iterating from 1...
			if (arr[i] >= k) {
				// to ensure that our sum is not '-ve'... as asked in q..

				// finding optimal mini & maxi to implement case 4 ...

				// since sorted arr. so our mini could be arr[0] and maxi as arr[n-1]
				// initially... then we iterate

				mini = min(arr[0] + k, arr[i] - k);

				maxi = max(arr[n - 1] - k, arr[i - 1] + k);
				/* taking - arr[i-1]+k ~'i-1' since if its 'i' then when
				iterator reach n-1 then arr[n-1] + k would error..
				hence only run till arr[n-2] + k ~ i-1...*/

				ans  = min(ans, maxi - mini);

			}

		}

		return ans;


// <minimize heights 1> qn. is similar... just remove the if condition..
	}


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////