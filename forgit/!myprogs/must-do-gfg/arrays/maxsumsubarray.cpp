/////////////////////////////////////////////////////////
/*
Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= Ai <= 1010

Example:
Input:
2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
Output:
2 4
1 5

Explanation :
Testcase1: sum of elements from 2nd position to 4th position is 12
Testcase2: sum of elements from 1st position to 5th position is 15
*/
////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
#define int long long int
#define setbits(x) __builtin_popcount(x)
using namespace std;

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int32_t main() {


//////
	c_p_c();
///////

	int t  ;
	cin >> t ; // number of times



	for (int i = 0; i < t; ++i)
	{


		int n; // array size
		cin >> n ;

		int arr[n]; // array

		int sum ; // sum
		cin >> sum ;

		for (int i = 0; i < n; ++i)
		{

			cin >> arr[i];

		}

		bool flag = false ;
		int f = 0 , l = 0  ;
		int currSum = 0 ;

		for (int i = 0; i < n; ++i)
		{

			currSum += arr[i] ;


			if (currSum >= sum)
			{
				l = i ;
				while (currSum > sum && f < l ) {

					currSum = currSum - arr[f] ;
					++f ;

				}

				if (currSum == sum)
				{
					cout << f + 1 << " " << l + 1 << endl;
					flag = true;
					break;

				}

			}
		}

		if (flag == false) {
			cout << -1 << endl ;
		}
	}






	return 0 ;
}

