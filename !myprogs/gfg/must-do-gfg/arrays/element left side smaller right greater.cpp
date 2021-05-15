/*
///////////////////////////////////////////
//Question/Info

Element with left side smaller and right side greater
Easy Accuracy: 32.41% Submissions: 6290 Points: 2
Given an unsorted array of size N. Find the first element in array such that all of its left elements are smaller and all right elements to it are greater than it.

Note: Left and right side elements can be equal to required element. And extreme elements cannot be required element.



Example 1:

Input:
N = 4
A[] = {4, 2, 5, 7}
Output:
5
Explanation:
Elements on left of 5 are smaller than 5
and on right of it are greater than 5.


Example 2:

Input:
N = 3
A[] = {11, 9, 12}
Output:
-1


Your Task:
You don't need to read input or print anything. Your task is to complete the function findElement() which takes the array A[] and its size N as inputs and returns the required element. If no such element present in array then return -1.



Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)



Constraints:
3 <= N <= 106
1 <= A[i] <= 106

Company Tags
 Amazon Intuit OYO Rooms Zoho

author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

// #define int 		   long long int
#define sbit(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout << x << "\n";
#define ct2(x,y) 	   cout << x << " " << y << "\n";
#define tc(x) 		   cout << x << " ";
#define tc2(x,y) 	   cout << x << " " << y << " ";
#define forn(i,n) 	   for(int i = 0; i < (int)(n); ++i)
#define forx(i,x,n)    for(int i = x; i < (int)(n); ++i)
#define nfor(i,n)      for(int i = n-1; i >= 0; --i)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed << setprecision(y) << x
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



	int findElement(int arr[], int n) {

		/* similar question I have already solved....*/

		/*
		NOT SOLVING AGAIN
		*/

		/*

		An Efficient Solution can solve this problem in O(n) time
		using O(n) extra space. Below is detailed solution.

		Create two arrays leftMax[] and rightMin[].
		Traverse input array from left to right and fill leftMax[]
		such that leftMax[i] contains maximum element from 0 to i-1 in input array.

		Traverse input array from right to left and fill rightMin[] such
		that rightMin[i] contains minimum element from to n-1 to i+1 in input array.
		Traverse input array. For every element arr[i], check if arr[i] is
		greater than leftMax[i] and smaller than rightMin[i]. If yes, return i.

		*/

	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}