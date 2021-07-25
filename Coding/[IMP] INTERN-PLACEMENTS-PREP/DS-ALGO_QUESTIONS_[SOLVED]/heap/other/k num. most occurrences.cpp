/*
///////////////////////////////////////////
//Question/Info

Find k numbers with most occurrences in the given array

Given an array of n numbers and a positive integer k. The problem is to find k numbers with most occurrences, i.e., the top k numbers having the maximum frequency. If two numbers have the same frequency then the larger number should be given preference. The numbers should be displayed in decreasing order of their frequencies. It is assumed that the array consists of k numbers with most occurrences.

Examples:

Input:
arr[] = {3, 1, 4, 4, 5, 2, 6, 1},
k = 2
Output: 4 1
Explanation:
Frequency of 4 = 2
Frequency of 1 = 2
These two have the maximum frequency and
4 is larger than 1.

Input :
arr[] = {7, 10, 11, 5, 2, 5, 5, 7, 11, 8, 9},
k = 4
Output: 5 11 7 10
Explanation:
Frequency of 5 = 3
Frequency of 11 = 2
Frequency of 7 = 2
Frequency of 10 = 1
These four have the maximum frequency and
5 is largest among rest.

author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define int 		   long long int
#define setbits(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout << x << "\n";
#define ct2(x,y) 	   cout << x << " " << y << "\n";
#define forn(i,n) 	   for(int i = 0; i < (int)(n); ++i)
#define forx(i,x,n)    for(int i = x; i < (int)(n); ++i)
#define nfor(i,n)      for(int i = n-1; i >= 0; --i)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed << setprecision(y) << x;
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

#pragma GCC optimize("Ofast")

void c_p_c()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


void kno(int arr[], int n, int k)
{

	unordered_map<int, int> ump;

	forn(i, n) {
		ump[arr[i]]++;
	}

	p_q<pii, vii, greater<pii>> minh; // min heap

	for (auto i : ump) {
		minh.push({i.second, i.first});
// pushing elements based on its freq. of occurence ~ i.second...
		if (minh.size() > k) {
			minh.pop();
		}
	}

// Print contents of heap.
	while (!minh.empty()) {
		cout << minh.top().second << " ";
		minh.pop();
	}

	return;
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

	int arr[] = {1, 1, 1, 3, 2, 2, 4};
	// so o/p to be : 2,1 as 1's freq. = 3 & 2's freq. = 2 in arr.
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 2;
	kno(arr, n, k);

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}