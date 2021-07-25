/*
///////////////////////////////////////////
//Question/Info

Find the Duplicate Number
Medium

7562

797

Add to List

Share
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.



Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3
Example 3:

Input: nums = [1,1]
Output: 1
Example 4:

Input: nums = [1,1,2]
Output: 1


Constraints:

2 <= n <= 105
nums.length == n + 1
1 <= nums[i] <= n
All the integers in nums appear only once except for precisely one integer which appears two or more times.


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


	/*

	TO FIND DUPLICATE NUMBER:

	BRUTE FORCE:

	YOU SORT THE ARRAY AND THEN FIND THE REPEATED ELEMENTS
	////////////////////

	BETTER :

	approach 1:

	MAINTAIN A FREQUENCY ARRAY.
	RUN LOOP AND COUNT++ THE FREQUENCY OF ELEMENTS.
	IF FREQ. == 2 THEN ITS DUPLICATE.


	approach 2:

	USE FLOYD ALGO VARIATION:

	int fun(vector<int> v){

	int slow = v[0];
	int fast = v[0];

	do{
	slow = v[slow]; // moving slow pointer by 1
	fast = v[v[fast]]; // moving fast pointer by 2

	}
	while(slow!=fast);

	fast = nums[0];

	while(slow!=fast){
	slow = nums[slow];
	fast = nums[fast];
	}

	return slow;
	}


	//////////////////////////




	*/




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}