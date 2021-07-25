/*
///////////////////////////////////////////

Given that integers are being read from a data stream.
Find the median of all the elements read so far
starting from the first integer till the last integer.
This is also called the Median of Running Integers.
The data stream can be any source of data,
for example, a file, an array of integers, input stream etc.

Input: 5 10 15
Output: 5, 7.5, 10
Explanation: Given the input stream as an array of integers [5,10,15].
Read integers one by one and print the median correspondingly.
So, after reading first element 5,median is 5.
After reading 10,median is 7.5 After reading 15 ,median is 10.

Input: 1, 2, 3, 4
Output: 1, 1.5, 2, 2.5
Explanation: Given the input stream as an array of integers [1,2,3,4].
Read integers one by one and print the median correspondingly.
So, after reading first element 1,median is 1.
After reading 2,median is 1.5 After reading 3 ,median is 2.
After reading 4 ,median is 2.5.

Approach:
The idea is to use max heap and min heap to store the
elements of higher half and lower half.
Max heap and min heap can be implemented
using priority_queue in C++ STL.

///////////////////////////////////////////
*/

#include <bits/stdc++.h>
#define int long long int
#define setbits(x) __builtin_popcount(x)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ct(x) cout<<x<<endl;
#define ct2(x,y) cout<<x<<" "<<y<<endl;
#define forn(i, n) for (int i = 0; i < (int)(n); i++)
#define forx(i, x, n) for (int i = x ; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

//typedef long long int lli;
typedef long double ld;
//typedef pair<int, int> pii;
//typedef vector<int> vi;
//typedef vector<pii> vii;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

using namespace std;


void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}



int32_t main() {

///////////
	c_p_c();
///////////

	// code


//  median of running stream of integers


	int n ;
	cin >> n ;


	priority_queue<double> q1; // max heap
//  so in the loop, whatever value you put, it would put the largest value at first or root of heap

// as heap stores value in decreasing order ... breadthfirst traversal...
	priority_queue<double, vector<double>, greater<double>> q2; // min heap syntax

// need not put greater<double>().... it's fine...

	forn(i, n) {

// finding median using heaps

		double val;
		cin >> val;

		if (q1.empty() or q1.top() > val) {
			q1.push(val);
		}
		else {
			q2.push(val);
		}


		// now if difference between the size of q1 and q2 more then ;

		if (q1.size() > q2.size() + 1) // adding 1 as initially both would be empty
		{
			q2.push(q1.top());
			q1.pop();
		}

		else if (q2.size() > q1.size() + 1)
		{
			q1.push(q2.top());
			q2.pop();
		}

		//  now we find median

		double a = q1.size();
		double b = q2.size();
		double med;
		if (a == b) { // since i start from 0
			med = (q1.top() + q2.top()) / 2;
		}

		else if (a > b) {

			med = q1.top();
		}
		else { /*if (a < b)*/

			med = q2.top();
		}


		ct(med);


	}




	return 0;
}