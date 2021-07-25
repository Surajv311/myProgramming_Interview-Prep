/*
///////////////////////////////////////////
//Question/Info

Next Greater Element
Medium Accuracy: 48.92% Submissions: 31664 Points: 4
Given an array arr[ ] of size N having distinct elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.

Example 1:

Input:
N = 4, arr[] = [1 3 2 4]
Output:
3 4 4 -1
Explanation:
In the array, the next larger element
to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ?
since it doesn't exist, it is -1.
Example 2:

Input:
N = 5, arr[] [6 8 0 1 3]
Output:
8 -1 1 3 -1
Explanation:
In the array, the next larger element to
6 is 8, for 8 there is no larger elements
hence it is -1, for 0 it is 1 , for 1 it
is 3 and then for 3 there is no larger
element on right and hence -1.
Your Task:
This is a function problem. You only need to complete the function nextLargerElement() that takes list of integers arr[ ] and N as input parameters and returns list of integers of length N denoting the next greater elements for all the corresponding elements in the input array.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)

Constraints:
1 ≤ N ≤ 106
1 ≤ Ai ≤ 1018

Company Tags
 Flipkart Amazon Microsoft

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


#define vi vector<long long>
#define nfor(i,n)      for(long long i = n-1; i >= 0; --i)
#define forn(i,n) 	   for(long long i = 0; i < (long long)(n); ++i)
#define pb(x) 		   push_back(x)
#define all(v) 		   v.begin(),v.end()
// #define int 		   long long int

	class Solution
	{
	public:
		//Function to find the next greater element for each element of the array.
		vector<long long> nextLargerElement(vector<long long> arr, int n) {
			// Your code here

			stack<long long> ss;

			vi v;

			nfor(i, n) { // i = n-1 to i>=0 ; --i

				if (ss.size() == 0) {
					v.pb(-1);
				}

				else if (ss.size() > 0 and ss.top() > arr[i]) {
					v.pb(ss.top());
				}

				else if (ss.size() > 0 and ss.top() <= arr[i])

				{

					while (ss.size() > 0 and ss.top() <= arr[i]) {

						ss.pop();
					}

					if (ss.size() == 0) {
						v.pb(-1);
					}

					else {
						v.pb(ss.top());
					}

				}

				ss.push(arr[i]);

			}
			reverse(all(v));

			return v;

		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}