/*
///////////////////////////////////////////
//Question/Info

Spirally traversing a matrix
Medium Accuracy: 48.39% Submissions: 33089 Points: 4
Given a matrix of size r*c. Traverse the matrix in spiral form.

Example 1:

Input:
r = 4, c = 4
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}}
Output:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
Explanation:

Example 2:

Input:
r = 3, c = 4
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12}}
Output:
1 2 3 4 8 12 11 10 9 5 6 7
Explanation:
Applying same technique as shown above,
output for the 2nd testcase will be
1 2 3 4 8 12 11 10 9 5 6 7.

Your Task:
You dont need to read input or print anything. Complete the function spirallyTraverse() that takes matrix, r and c as input parameters and returns a list of integers denoting the spiral traversal of matrix.

Expected Time Complexity: O(r*c)
Expected Auxiliary Space: O(r*c), for returning the answer only.

Constraints:
1 <= r, c <= 100
0 <= matrixi <= 100

Company Tags
 BrowserStack D-E-Shaw MakeMyTrip MAQ Software Microsoft Morgan Stanley Nagarro Nearbuy Oracle OYO Rooms Paytm Salesforce Snapdeal

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


	class Solution
	{
	public:
		//Function to return a list of integers denoting spiral traversal of matrix.
		vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c)
		{
			// code here

			int k = 0;
			int l = 0 ;
			int m = r ;
			int n = c ;

			vector<int> v;

			while (k < m and l < n) {

				for (int i = l ; i < n ; i++) {
					int x = matrix[k][i];
					v.push_back(x);
				}
				k++;

				for (int i = k ; i < m; i++) {
					int x = matrix[i][n - 1];
					v.push_back(x);
				}
				n--;

				if (k < m) {
					for (int i = n - 1; i >= l; i--) {
						int x = matrix[m - 1][i];
						v.push_back(x);
					}
					m--;
				}

				if (l < n) {
					for (int i = m - 1; i >= k; i--) {
						int x = matrix[i][l];
						v.push_back(x);
					}
					l++;
				}



			}

			return v;


		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}