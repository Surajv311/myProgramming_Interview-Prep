/*
///////////////////////////////////////////
//Question/Info


Permutations of a given string
Basic Accuracy: 45.49% Submissions: 6211 Points: 1
Given a string S. The task is to print all permutations of a given string.



Example 1:

Input: ABC
Output:
ABC ACB BAC BCA CAB CBA
Explanation:
Given string ABC has permutations in 6
forms as ABC, ACB, BAC, BCA, CAB and CBA .
Example 2:

Input: ABSG
Output:
ABGS ABSG AGBS AGSB ASBG ASGB BAGS
BASG BGAS BGSA BSAG BSGA GABS GASB
GBAS GBSA GSAB GSBA SABG SAGB SBAG
SBGA SGAB SGBA
Explanation:
Given string ABSG has 24 permutations.


Your Task:
You don't need to read input or print anything. Your task is to complete the function find_permutaion() which takes the string S as input parameter and returns a vector of string in lexicographical order.



Expected Time Complexity: O(n! * n)

Expected Space Complexity: O(n)



Constraints:
1 <= length of string <= 5




Company Tags
 Accolite Amazon Cisco Citrix MAQ Software OYO Rooms Samsung Snapdeal Walmart Zoho Microsoft

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
		vector<string>find_permutation(string S)
		{
			// Code here there

			sort(S.begin(), S.end());

			vector<string> v;

			do {
				v.push_back(S);
			}
			while (next_permutation(S.begin(), S.end()));

			return v;
		}
	};

	/*

	void permute(string a, int l, int r)
	{
	    // Base case
	    if (l == r)
	        cout<<a<<endl;
	    else
	    {
	        // Permutations made
	        for (int i = l; i <= r; i++)
	        {

	            // Swapping done
	            swap(a[l], a[i]);

	            // Recursion called
	            permute(a, l+1, r);

	            //backtrack
	            swap(a[l], a[i]);
	        }
	    }
	}

	*/


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}