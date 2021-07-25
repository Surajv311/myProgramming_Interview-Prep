/*
///////////////////////////////////////////
//Question/Info

Find median in a stream
Hard Accuracy: 54.96% Submissions: 7590 Points: 8
Given an input stream of N integers. The task is to insert these numbers into a new stream and find the median of the stream formed by each insertion of X to the new stream.

Example 1:

Input:
N = 4
X[] = 5,15,1,3
Output:
5
10
5
4
Explanation:Flow in stream : 5, 15, 1, 3
5 goes to stream --> median 5 (5)
15 goes to stream --> median 10 (5,15)
1 goes to stream --> median 5 (5,15,1)
3 goes to stream --> median 4 (5,15,1 3)


Example 2:

Input:
N = 3
X[] = 5,10,15
Output:
5
7.5
10
Explanation:Flow in stream : 5, 10, 15
5 goes to stream --> median 5 (5)
10 goes to stream --> median 7.5 (5,10)
15 goes to stream --> median 10 (5,10,15)
Your Task:
You are required to complete 3 methods insertHeap() which takes x as argument, balanceHeaps() and getMedian() and returns the current median.
Expected Time Complexity : O(nlogn)
Expected Auxilliary Space : O(n)

Constraints:
1 <= N <= 106
1 <= x <= 106

Company Tags
 Adobe Amazon Apple Belzabar D-E-Shaw Facebook Flipkart Google Intuit Microsoft Morgan Stanley Ola Cabs Oracle Samsung SAP Labs Yahoo


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



	class FindMedian
	{
	public:
		void insertHeap(int &);
		double getMedian();
	private:
		double median; //Stores current median
		priority_queue<int> max; //Max heap for lower values
		priority_queue<int, vector<int>, greater<int> > min; //Min heap for greater values
		void balanceHeaps(); //Method used by insertHeap
	};


// } Driver Code Ends


// Function to insert heap
	void FindMedian::insertHeap(int &x)
	{
		// Your code here
		if (max.empty() || max.top() > x)
			max.push(x);
		else
			min.push(x);
		balanceHeaps();

	}

// Function to balance heaps
	void FindMedian::balanceHeaps()
	{
		// Your code here
		if (max.size() > min.size() + 1) // since initially the size of the heaps would be empty, we add 1
		{
			min.push(max.top());
			max.pop();
		}
		else if (min.size() > max.size() + 1)
		{
			max.push(min.top());
			min.pop();
		}
	}

// Function to return getMedian
	double FindMedian::getMedian()
	{
		// Your code here
		int a = max.size();
		int b = min.size();
		if (a == b)
			return ((max.top() + min.top()) / 2);
		else if (a < b)
			return min.top();
		else
			return max.top();
	}


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}