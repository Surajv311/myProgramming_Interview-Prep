/*
//////////////////////////////////////////////////////
//Info-Que.

Tower Of Hanoi
Medium Accuracy: 47.35% Submissions: 45026 Points: 4
The tower of Hanoi is a famous puzzle where we have three rods and N disks. The objective of the puzzle is to move the entire stack to another rod. You are given the number of discs N. Initially, these discs are in the rod 1. You need to print all the steps of discs movement so that all the discs reach the 3rd rod. Also, you need to find the total moves.
Note: The discs are arranged such that the top disc is numbered 1 and the bottom-most disc is numbered N. Also, all the discs have different sizes and a bigger disc cannot be put on the top of a smaller disc. Refer the provided link to get a better clarity about the puzzle.

Example 1:

Input:
N = 2
Output:
move disk 1 from rod 1 to rod 2
move disk 2 from rod 1 to rod 3
move disk 1 from rod 2 to rod 3
3
Explanation: For N=2 , steps will be
as follows in the example and total
3 steps will be taken.
Example 2:

Input:
N = 3
Output:
move disk 1 from rod 1 to rod 3
move disk 2 from rod 1 to rod 2
move disk 1 from rod 3 to rod 2
move disk 3 from rod 1 to rod 3
move disk 1 from rod 2 to rod 1
move disk 2 from rod 2 to rod 3
move disk 1 from rod 1 to rod 3
7
Explanation: For N=3 , steps will be
as follows in the example and total
7 steps will be taken.
Your Task:
You don't need to read input or print anything. You only need to complete the function toh() that takes following parameters: N (number of discs), from (The rod number from which we move the disc), to (The rod number to which we move the disc), aux (The rod that is used as an auxiliary rod) and prints the required moves inside function body (See the example for the format of the output) as well as return the count of total moves made. The total number of moves are printed by the driver code.
Please take care of the case of the letters.

Expected Time Complexity: O(2N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= N <= 16

Company Tags
 Microsoft

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


	void ans (int N, int s, int e, int m, int &res) {

		if (N == 1) {
			cout << "move disk 1 from rod " << s << " to rod " << e << endl;
			res++; return;
		}

		ans(N - 1, s , m, e , res); res++;
		cout << "move disk " << N << " from rod " << s << " to rod " << e << endl;

		ans(N - 1, m, e, s, res);


	}

	long long toh(int N, int from, int to, int aux) {
		// Your code here

		// toh(N-1, from , aux,to );

		// cout << "move disk " << N << " " << "from" << " " << "rod" << " " << from << " " << "to rod" << to << "\n";
		// toh(N-1,aux,to,from);

		int res = 0 ;

		ans(N, from, to, aux, res);

		return res;

	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////


/*
// code by: srj_v //
*/


