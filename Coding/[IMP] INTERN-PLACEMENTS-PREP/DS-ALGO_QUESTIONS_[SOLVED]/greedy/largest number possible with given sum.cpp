/*
///////////////////////////////////////////
//Question/Info

Largest number with given sum
Easy Accuracy: 56.68% Submissions: 7612 Points: 2
Geek lost the password of his super locker. He remembers the number of digits N as well as the sum S of all the digits of his password. He know that his password is the largest number of N digits that can be made with given sum S. As he is busy doing his homework, help him retrieving his password.

Example 1:

Input:
N = 5, S = 12
Output:
93000
Explanation:
Sum of elements is 12. Largest possible
5 digit number is 93000 with sum 12.
Example 2:

Input:
N = 3, S = 29
Output:
-1
Explanation:
There is no such three digit number
whose sum is 29.
Your Task :
You don't need to read input or print anything. Your task is to complete the function largestNumber() which takes 2 integers N and S as input parameters and returns the password in the form of string, else return "-1" in the form of string.

Constraints:
1 ≤ N ≤ 104
0 ≤ S ≤ 106

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)

Company Tags
 Microsoft

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


	/*

	Logic:

	There is a Greedy approach to solve the problem.
	The idea is to one by one fill all digits from leftmost
	to rightmost (or from most significant digit to least significant).
	We compare the remaining sum with 9 if
	the remaining sum is more than 9,
	we put 9 at the current position,
	else we put the remaining sum. Since we fill digits
	from left to right, we put the highest digits on the left side,
	hence get the largest number.

	*/

	string largestNumber(int n, int sum)
	{
		// Your code here

		string res = "";

		if (9 * n < sum) {
			return res += to_string(-1);
		}

		else if (sum == 0 and n == 1) {
			return res += to_string(0);
		}

		// else if(sum==0 and n>1){
		//        return res+=to_string(-1);
		//     }

		else {
			for (int i = 0 ; i < n ; ++i) {

				if (sum > 9) {
					res += to_string(9);
					sum -= 9;
				}

				else {
					res += to_string(sum);
					sum = 0; // appending all zeroes next...
				}
			}

		}

		return res;
	}

	/*
	NOTE:

		string str = "";

		int arr[4] = {1, 2, 3, 4};

		for (auto x : arr) {
			str.push_back(char(x));
		}

		// STRING PUSH BACK CAN ONLY BE USED IN CASE OF
		// OUR ARRAY IS CHARACTER ARRAY, IF ARRAY IS INT,
		// THEN WE CANT PUSH BACK IN A STRING IT WOULD THROW ERROR...
		// CANT TYPECAST CHAR ALSO...

		// str.push_back(arr[0]);
		cout << str;

	*/

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}