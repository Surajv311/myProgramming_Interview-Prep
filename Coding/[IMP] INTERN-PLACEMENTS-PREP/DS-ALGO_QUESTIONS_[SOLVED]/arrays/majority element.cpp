/*
///////////////////////////////////////////
//Question/Info

Majority Element
Easy Accuracy: 48.6% Submissions: 59346 Points: 2
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.


Example 1:

Input:
N = 3
A[] = {1,2,3}
Output:
-1
Explanation:
Since, each element in
{1,2,3} appears only once so there
is no majority element.
Example 2:

Input:
N = 5
A[] = {3,1,3,3,2}
Output:
3
Explanation:
Since, 3 is present more
than N/2 times, so it is
the majority element.

Your Task:
The task is to complete the function majorityElement() which returns the majority element in the array. If no majority exists, return -1.


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).


Constraints:
1 <= N <= 107
0 <= Ai <= 106

Company Tags
 Accolite Amazon D-E-Shaw Microsoft Nagarro

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
		// Function to find majority element in the array
		// a: input array
		// size: size of input array
		int majorityElement(int a[], int size)
		{

			// your code here

			// Brute force would be O(n^2)...

			// Method-1 , we can use maps:

			unordered_map<int, int>mp;

			for (int i = 0 ; i < size ; i++) {
				mp[a[i]]++;
			}

			bool flag = false;

			int ans;

			for (auto i : mp) {

				if (i.second > size / 2) {
					flag = true;
					ans = i.first;
					break;
				}
			}

			if (!flag) {
				return -1;
			}

			return ans;



			/* We can use Moore Voting Algo:

			The reason it is working is because the definition
			of majority element, it is defined as an element
			with Freq > n/2 so basically the edge case is
			Freq= n/2+1 , now even in the worst case when
			our first n/2+1 elements are majority elements
			the count will always be > 0 since other n/2 - 1
			will cancel but since n/2 - 1<n/2+1 they won't be
			able to cancel it completely

			////////////////////////////////

			int findCandidate(int a[], int size)
			{
			int maj = 0, count = 1;
			for (int i = 1; i < size; i++) {
			if (a[maj] == a[i])
			count++;
			else
			count--;
			if (count == 0) {
			maj = i;
			count = 1;
			}
			}
			return a[maj];
			}

			bool isMajority(int a[], int size, int cand)
			{
			int count = 0;
			for (int i = 0; i < size; i++)

			if (a[i] == cand)
			count++;

			if (count > size / 2)
			return 1;

			else
			return 0;
			}

			void printMajority(int a[], int size)
			{

			int cand = findCandidate(a, size);

			if (isMajority(a, size, cand))
			cout << " " << cand << " ";

			else
			cout << "No Majority Element";
			}

			*/

		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}