/*
//////////////////////////////////////////////////////
//Info-Que.

Stock buy and sell
Medium Accuracy: 34.51% Submissions: 18513 Points: 4
The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.

Example 1:

Input:
N = 7
A[] = { 100, 180, 260, 310, 40, 535, 695 }

Output:
(0 3) (4 6)

Explanation 1:
We can buy stock on day 0,
and sell it on 3rd day,
which will give us maximum profit.
Example 2:

Input:
N = 10
A[] = {23, 13, 25, 29, 33, 19, 34, 45, 65, 67}

Output:
(1 4) (5 9)
User Task:
Complete stockBuySell()  function and print all the days with profit in a single line. And if there is no profit then print "No Profit". You do not require to return since the function is void.

Constraints:
1 <= T <= 100
2 <= N <= 104
0 <= Ai <= 104

Note: Output format is as follows - (buy_day sell_day) (buy_day sell_day)
For each input, the output should be in a single line.


Company Tags
 Accolite Amazon D-E-Shaw Directi Facebook Flipkart Goldman Sachs Hike Intuit MakeMyTrip Microsoft Morgan Stanley Ola Cabs Oracle Paytm Pubmatic Quikr Salesforce Samsung SAP Labs Sapient Swiggy Walmart

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


	void stockBuySell(int price[], int n) {
		// code here

		bool flag = false;

		for (int i = 0 ; i < n ; i++) {

			int buy, sell;

			buy = sell = i;

			while (i + 1<n and price[i] >= price[i + 1]) i++;

			buy = i; // so we are actually finding a min point to buy... hence price[i] > price[i+1]

			while (i + 1 < n and price[i] <= price[i + 1]) i++;

			sell = i;

			if (sell - buy > 0) {
				cout << "(" << buy << " " << sell << ") ";
				flag = true;
			}

		}

		if (flag == false)
		{
			cout << "No Profit" ;
		}

		cout << "\n";

	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////


/*
// code by: srj_v //
*/


