/*
///////////////////////////////////////////
//Question/Info

Sort a K Sorted Array | Sort Nearly Sorted Array

Given an array of n elements, where each element is at most k away from its target position, devise an algorithm that sorts in O(n log k) time. For example, let us consider k is 2, an element at index 7 in the sorted array, can be at indexes 5, 6, 7, 8, 9 in the given array.
Examples:

Input : arr[] = {6, 5, 3, 2, 8, 10, 9}
            k = 3
Output : arr[] = {2, 3, 5, 6, 8, 9, 10}

Input : arr[] = {10, 9, 8, 7, 4, 70, 60, 50}
         k = 4
Output : arr[] = {4, 7, 8, 9, 10, 50, 60, 70}

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

int ksa(int arr[], int size , int k) {

	p_q < int, vi, greater<int>> minh ; // min heap

	int j = 0;

	forn(i, size) {

		minh.push(arr[i]);

		if (minh.size() > k)
		{
			arr[j] = minh.top();
			j++;
			minh.pop();
		}
	}

	while (minh.size() > 0)
	{
		arr[j] = minh.top();
		j++;
		minh.pop();
	}

	return 0;

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

	int arr[] = {6, 5, 3, 2, 8, 10, 9};
	int k = 3; // means the sorted position of the element would be in the range of k from its current index

	int size = sizeof arr / sizeof arr[0];

	(ksa(arr, size, k));

	for (auto i : arr) {
		ct(i);
	}

// complexity would be O(nlogk)

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}