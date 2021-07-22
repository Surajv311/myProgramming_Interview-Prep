/*
//////////////////////////////////////////////////////
//Question/Info

Zero Sum Subarrays
Medium Accuracy: 50.41% Submissions: 20111 Points: 4
You are given an array arr[] of size n. Find the total count of sub-arrays having their sum equal to 0.


Example 1:

Input:
n = 6
arr[] = {0,0,5,5,0,0}
Output: 6
Explanation: The 6 subarrays are
[0], [0], [0], [0], [0,0], and [0,0].

Example 2:

Input:
n = 10
arr[] = {6,-1,-3,4,-2,2,4,6,-12,-7}
Output: 4
Explanation: The 4 subarrays are [-1 -3 4]
[-2 2], [2 4 6 -12], and [-1 -3 4 -2 2]

Your Task:
You don't need to read input or print anything. Complete the function findSubarray() that takes the array arr and its size n as input parameters and returns the total number of sub-arrays with 0 sum.


Expected Time Complexity : O(n)
Expected Auxilliary Space : O(n)


Constraints:
1<= n <= 107
-1010 <= arri <= 1010



Company Tags
 Amazon Microsoft OYO Rooms

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


	ll findSubarray(vector<ll> arr, int n ) {
		//code here

		unordered_map<ll, ll> mp; mp[0] = 1;

		int sum = 0 ; int count = 0 ;

		for (int i = 0 ; i < n ; i++)
		{
			sum += arr[i];
			count += mp[sum]++; // post incrment.. so its count + 0 .. initally..
		}

		return count;
		// since in a range of numbers, we can notice the pattern...
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////