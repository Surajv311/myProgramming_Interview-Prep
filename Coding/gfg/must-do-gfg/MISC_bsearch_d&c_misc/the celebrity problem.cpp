/*
//////////////////////////////////////////////////////
//Question/Info

The Celebrity Problem
Medium Accuracy: 39.46% Submissions: 77455 Points: 4
A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not.
A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.
Note: Follow 0 based indexing.


Example 1:

Input:
N = 3
M[][] = {{0 1 0},
         {0 0 0},
         {0 1 0}}
Output: 1
Explanation: 0th and 2nd person both
know 1. Therefore, 1 is the celebrity.

Example 2:

Input:
N = 2
M[][] = {{0 1},
         {1 0}}
Output: -1
Explanation: The two people at the party both
know each other. None of them is a celebrity.

Your Task:
You don't need to read input or print anything. Complete the function celebrity() which takes the matrix M and its size N as input parameters and returns the index of the celebrity. If no such celebrity is present, return -1.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
2 <= N <= 3000
0 <= M[][] <= 1

Company Tags
 Amazon Fab.com Flipkart Google Microsoft One97 United Health Group Zoho

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


	bool knows(int x, int y, vector<vector<int> >& M) {
		return M[x][y];
		// it itself send if celebrity know a person or not...
	}

	int celebrity(vector<vector<int> >& M, int n)
	{
		// code here

		stack<int> st;

		for (int i = 0 ; i < n ; i++) {
			st.push(i);
		}

		while (st.size() > 1) {
			int x = st.top(); st.pop();

			int y = st.top(); st.pop();

			if (knows(x, y, M)) st.push(y); // we push back y as it s a potential celebrity..
			/* means if x knows y then in now way x is the celebrity...
			as celebrity should not know anyone but people can know him...*/

			else st.push(x);
		}

		int pc = st.top(); // potential celebrity... pc...

		if (st.empty()) return -1;

		/* now to check if the element left is a celebrity for sure,
		as even if 'one' single person doesn't our celebrity then -1, since
		everyone must know our celebrity. And similarly, our celebrity must
		not know anyone, even if our celebrity knows one person, then -1...*/

		// now checking with every single person once...

		for (int i = 0 ; i < n ; i++) {

			if (i != pc and (knows(pc, i, M) or !knows(i, pc, M))) {
				// if pc knows an i or any i who doesn't know pc, then pc is -1...

				return -1;
			}

		}

		return pc;
	}

// complexity - o(n), since 3n-1 comparisons...

	/*
	brute force:
	find a row with all 0s and a col with only one 1 and all 0s...


	brute force 2 :
	graphs..

	bool knows(int a, int b)
	{
	return MATRIX[a][b];
	}

	// Returns -1 if celebrity
	// is not present. If present,
	// returns id (value from 0 to n-1).
	int findCelebrity(int n)
	{
	//the graph needs not be constructed
	//as the edges can be found by
	//using knows function

	//degree array;
	int indegree[n]={0},outdegree[n]={0};

	//query for all edges
	for(int i=0; i<n; i++)
	{
	for(int j=0; j<n; j++)
	{
	    int x = knows(i,j);

	    //set the degrees
	    outdegree[i]+=x;
	    indegree[j]+=x;
	}
	}

	//find a person with indegree n-1
	//and out degree 0
	for(int i=0; i<n; i++)
	if(indegree[i] == n-1 && outdegree[i] == 0)
	return i;

	return -1;
	}
	}

	*/



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////