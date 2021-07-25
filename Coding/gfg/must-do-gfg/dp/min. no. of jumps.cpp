/*
//////////////////////////////////////////////////////
//Question/Info

Minimum number of jumps
Medium Accuracy: 32.96% Submissions: 100k+ Points: 4
Given an array of N integers arr[] where each element represents the max number of steps that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.
Note: Return -1 if you can't reach the end of the array.


Example 1:

Input:
N = 11
arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
Output: 3
Explanation:
First jump from 1st element to 2nd
element with value 3. Now, from here
we jump to 5th element with value 9,
and from here we will jump to last.
Example 2:

Input :
N = 6
arr = {1, 4, 3, 2, 6, 7}
Output: 2
Explanation:
First we jump from the 1st to 2nd element
and then jump to the last element.

Your task:
You don't need to read input or print anything. Your task is to complete function minJumps() which takes the array arr and it's size N as input parameters and returns the minimum number of jumps. If not possible returns -1.


Expected Time Complexity: O(N)
Expected Space Complexity: O(1)


Constraints:
1 ≤ N ≤ 107
0 ≤ arri ≤ 107

Company Tags
 Adobe Amazon Housing.com Moonfrog Labs Walmart Microsoft Google

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


	class Solution {
	public:
		int minJumps(int arr[], int n) {
			// Your code here
			//  like longest increasing subseq...

			// vector<int>dp(n,INT_MAX);
			// dp[0] = 0;

			// if(arr[0]==0) return -1;

			// for(int i = 1 ; i < n ;i++){
			//     for(int j = 0 ; j < i ;j++){

			//         if(i<=j+arr[j]){
			//             dp[i] = min(dp[i],dp[j]+1);
			//         }

			//     }
			// }

			// if(dp[n-1] == INT_MAX) dp[n-1] = -1;
			// return dp[n-1];

			if (n <= 1)
				return 0;


			if (arr[0] == 0)
				return -1;

			int maxReach = arr[0];

			int step = arr[0];

			int jump = 1;
			int i = 1;
			for (i = 1; i < n; i++) {
				if (i == n - 1)
					return jump;

				maxReach = max(maxReach, i + arr[i]);

				step--;

				if (step == 0) {
					jump++;

					if (i >= maxReach)
						return -1;

					step = maxReach - i;
				}
			}

			return -1;
		}

		/*

		55. Jump Game
		Medium

		6928

		442

		Add to List

		Share
		Given an array of non-negative integers nums, you are initially positioned at the first index of the array.

		Each element in the array represents your maximum jump length at that position.

		Determine if you are able to reach the last index.



		Example 1:

		Input: nums = [2,3,1,1,4]
		Output: true
		Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
		Example 2:

		Input: nums = [3,2,1,0,4]
		Output: false
		Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.


		Constraints:

		1 <= nums.length <= 104
		0 <= nums[i] <= 105

		/////////////////////////////////////////

		class Solution {
		public:
		bool canJump(vector<int>& nums) {

		    int reach = 0;

		    for(int i = 0; i <nums.size();i++){

		        if(i>reach) return false;

		        reach = max(reach,i+nums[i]);

		    }

		    return true;
		}
		};

		*/
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////