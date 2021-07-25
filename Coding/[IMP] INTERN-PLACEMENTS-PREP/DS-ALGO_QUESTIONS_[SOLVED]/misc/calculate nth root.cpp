/*
//////////////////////////////////////////////////////
//Question/Info

Given two number x and n, find n-th root of x.

Examples:

Input : 5 2
Output : 2.2360679768025875

Input :  x = 5, n = 3
Output : 1.70997594668

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


	void findNthRoot(double x, int n)
	{

		// Initialize boundary values
		double low, high;
		if (x >= 0 and x <= 1)
		{
			low = x;
			high = 1;
		}
		else
		{
			low = 1;
			high = x;
		}

		// Used for taking approximations
		// of the answer
		double epsilon = 0.00000001;

		// Do binary search
		double guess = (low + high) / 2;
		while (abs((pow(guess, n)) - x) >= epsilon)
		{
			if (pow(guess, n) > x)
			{
				high = guess;
			}
			else
			{
				low = guess;
			}
			guess = (low + high) / 2;
		}

		cout << fixed << setprecision(16) << guess;
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////