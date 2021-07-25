/*
//////////////////////////////////////////////////////
//Question/Info

134. Gas Station [OR CIRCULAR TOUR QUESTION ON GFG...]
Medium

3416

455

Add to List

Share
There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].

You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations.

Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique



Example 1:

Input: gas = [1,2,3,4,5], cost = [3,4,5,1,2]
Output: 3
Explanation:
Start at station 3 (index 3) and fill up with 4 unit of gas. Your tank = 0 + 4 = 4
Travel to station 4. Your tank = 4 - 1 + 5 = 8
Travel to station 0. Your tank = 8 - 2 + 1 = 7
Travel to station 1. Your tank = 7 - 3 + 2 = 6
Travel to station 2. Your tank = 6 - 4 + 3 = 5
Travel to station 3. The cost is 5. Your gas is just enough to travel back to station 3.
Therefore, return 3 as the starting index.
Example 2:

Input: gas = [2,3,4], cost = [3,4,3]
Output: -1
Explanation:
You can't start at station 0 or 1, as there is not enough gas to travel to the next station.
Let's start at station 2 and fill up with 4 unit of gas. Your tank = 0 + 4 = 4
Travel to station 0. Your tank = 4 - 3 + 2 = 3
Travel to station 1. Your tank = 3 - 3 + 3 = 3
You cannot travel back to station 2, as it requires 4 unit of gas but you only have 3.
Therefore, you can't travel around the circuit once no matter where you start.


Constraints:

gas.length == n
cost.length == n
1 <= n <= 104
0 <= gas[i], cost[i] <= 104


 Amazon FactSet Microsoft Morgan Stanley Zoho Google

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


	int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

//         o(n) soln...
		int tot = 0 ;
		int sum = 0 ;
		int ind = 0;
		int sz = gas.size(); // or cost.size()...

		for (int i = 0 ; i < sz ; i++ )
		{

			sum += gas[i] - cost[i];

			if (sum < 0) {

				tot += sum;
				sum = 0 ;
				ind = i + 1;
			}
		}
//so my total positive sum must exceed total negative sums.. to complete a loop

		tot += sum ;

		return tot < 0 ? -1 : ind;

		/*

		///////////////////////////////////////////////////////////

		other approach...

		  int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {

		int start = gas.size()-1;
		int end = 0;
		int sum = gas[start] - cost[start];
		while (start > end) {
		  if (sum >= 0) {
		     sum += gas[end] - cost[end];
		     ++end;
		  }
		  else {
		     --start;
		     sum += gas[start] - cost[start];
		  }
		}
		return sum >= 0 ? start : -1;
		}

		///////////////////////////////////////////////////////////

		int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
		int i, j, n = gas.size();

		// If start from i, stop before station x -> no station k from i + 1 to x - 1 can //reach x.
		// Bcoz if so, i can reach k and k can reach x, then i reaches x. Contradiction.
		//Thus i can jump directly to x instead of i + 1, bringing complexity from O(n^2) to //O(n).

		// start from station i

		for (i = 0; i < n; i += j) {
		    int gas_left = 0;
		    // forward j stations
		    for (j = 1; j <= n; j++) {
		        int k = (i + j - 1) % n;
		        gas_left += gas[k] - cost[k];
		        if (gas_left < 0)
		            break;
		    }
		    if (j > n)
		        return i;
		}

		return -1;
		}

		///////////////////////////////////////////////////////////

		*/

	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////