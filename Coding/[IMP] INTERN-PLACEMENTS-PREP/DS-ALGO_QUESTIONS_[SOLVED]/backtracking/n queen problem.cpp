/*
///////////////////////////////////////////
//Question/Info

N-Queen Problem
Hard Accuracy: 65.66% Submissions: 2195 Points: 8
The n-queens puzzle is the problem of placing n queens on a (n×n) chessboard such that no two queens can attack each other.
Given an integer n, find all distinct solutions to the n-queens puzzle. Each solution contains distinct board configurations of the n-queens’ placement, where the solutions are a permutation of [1,2,3..n] in increasing order, here the number in the ith place denotes that the ith-column queen is placed in the row with that number. For eg below figure represents a chessboard [3 1 4 2].

Example 1:

Input:
1
Output:
[1]
Explaination:
Only one queen can be placed
in the single cell available.
Example 2:

Input:
4
Output:
[2 4 1 3 ] [3 1 4 2 ]
Explaination:
These are the 2 possible solutions.


Your Task:
You do not need to read input or print anything. Your task is to complete the function nQueen() which takes n as input parameter and returns a list containing all the possible chessboard configurations. Return an empty list if no solution exists.



Expected Time Complexity: O(n!)
Expected Auxiliary Space: O(n2)



Constraints:
1 ≤ n ≤ 10

Company Tags
 Accolite Amazon Amdocs D-E-Shaw MAQ Software Twitter Visa Microsoft

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


	class Solution {
	public:

		unordered_map<int, int> diag1, diag2;

		void solve(vector<vector<int>> &ans, int i, int n, vector<bool> cols, vector<int> vec) {
			if (i == n) {
				ans.push_back(vec);
				return;
			}

			for (int j = 0; j < n; j++) {
				if (cols[j] || diag1[i + j] || diag2[i - j]) {
					continue;
				}
				cols[j] = true;
				diag1[i + j] = 1;
				diag2[i - j] = 1;
				vec.push_back(j + 1);
				solve(ans, i + 1, n, cols, vec);

				vec.pop_back();
				cols[j] = false;
				diag1[i + j] = 0;
				diag2[i - j] = 0;
			}
		}

		vector<vector<int>> nQueen(int n) {
			vector<bool> cols(n, false);
			vector<vector<int>> ans;
			solve(ans, 0, n, cols, {});
			return ans;
		}

		/*

		bool safe(int arr[][n], int row , int col){

		   // checking vertical direction

		   for(int i = 0 ; i < row ; i++){
		       if(arr[i][col]==1){
		           // means a queen present
		           return false;
		       }
		   }


		   // diagonal checking -1

		   int i = row; int j = col ;

		   while(i and j){

		       if(arr[i][j]==1){
		           return false;
		       }

		       i--;j--;

		   }


		   // digonal checking -2

		        i = row; j = col ;

		   while(i and j){

		       if(arr[i][j]==1){
		           return false;
		       }

		       i--;j++;

		   }

		   // if none false then return true

		   return true;

		}


		int solve(int arr[][n],int row, int n ){

		   if(row>=n){
		       return true;
		   }


		   for(int col = 0 ; col<n;col++){

		       if(safe(arr,row,col)){
		          arr[row][col] = 1;

		       if(solve(arr,row+1,col)){
		           return true;
		       }

		       arr[row][col] = 0;
		   }

		   }

		return false;

		}


		   vector<vector<int>> nQueen(int n) {
		       // code here

		       int arr[n][n] = {0};

		       solve(arr,0,n);

		       vector<vector<int>> v;

		       for(int i = 0 ; i < n ; i++){
		           for(int j = 0 ; j < n ; j++){
		               v[i][j] = arr[i][j];
		           }
		       }

		       return v;
		   }

		   */


	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}