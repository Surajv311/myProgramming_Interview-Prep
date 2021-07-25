/*
//////////////////////////////////////////////////////
//Question/Info

Find all pairs with a given sum
Easy Accuracy: 41.14% Submissions: 5402 Points: 2
Given two unsorted arrays A of size N and B of size M of distinct elements, the task is to find all pairs from both arrays whose sum is equal to X.

Example 1:

Input:
A[] = {1, 2, 4, 5, 7}
B[] = {5, 6, 3, 4, 8}
X = 9
Output:
1 8
4 5
5 4
Explanation:
(1, 8), (4, 5), (5, 4) are the
pairs which sum to 9.
Example 2:
Input:
A[] = {-1, -2, 4, -6, 5, 7}
B[] = {6, 3, 4, 0}
X = 8
Output:
4 4
5 3

Your Task:
You don't need to read input or print anything. Your task is to complete the function allPairs() which takes the array A[], B[], its size N and M respectively and an integer X as inputs and returns the sorted vector pair values of all the pairs u,v where u belongs to array A and v belongs to array B. If no such pair exist return empty vector pair.


Expected Time Complexity: O(NLog(N))
Expected Auxiliary Space: O(N)


Constraints:
1 ≤ N, M ≤ 106
-106 ≤ X, A[i], B[i] ≤ 106

Company Tags
 Amazon Facebook United Health Group MakeMyTrip

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


	vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
	{
		// Your code goes here

		vector<pair<int, int>> v;

		set<int> s(A, A + N);

		for (int i = 0 ; i < M ; i++ ) {

			if (s.find(X - B[i]) != s.end()) v.push_back({X - B[i], B[i]});

		}

		sort(v.begin(), v.end());
		return v;
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////