/*
///////////////////////////////////////////
//Question/Info

Queue using two Stacks
Easy Accuracy: 47.29% Submissions: 60396 Points: 2
Implement a Queue using 2 stacks s1 and s2 .
A Query Q is of 2 Types
(i) 1 x (a query of this type means  pushing 'x' into the queue)
(ii) 2   (a query of this type means to pop element from queue and print the poped element)

Example 1:

Input:
5
1 2 1 3 2 1 4 2

Output:
2 3

Explanation:
In the first testcase
1 2 the queue will be {2}
1 3 the queue will be {2 3}
2   poped element will be 2 the queue
    will be {3}
1 4 the queue will be {3 4}
2   poped element will be 3.
Example 2:

Input:
4
1 2 2 2 1 4

Output:
2 -1

Explanation:
In the second testcase
1 2 the queue will be {2}
2   poped element will be 2 and
    then the queue will be empty
2   the queue is empty and hence -1
1 4 the queue will be {4}.
Your Task:
You are required to complete the two methods push which take one argument an integer 'x' to be pushed into the queue and pop which returns a integer poped out from other queue(-1 if the queue is empty). The printing is done automatically by the driver code.

Expected Time Complexity : O(1) for push() and O(N) for pop() or O(N) for push() and O(1) for pop()
Expected Auxilliary Space : O(1).

Constraints:
1 <= Q <= 100
1 <= x <= 100

Note:The Input/Ouput format and Example given are used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.

Company Tags
 Accolite Adobe Amazon D-E-Shaw Flipkart Goldman Sachs Hike InfoEdge InMobi MakeMyTrip MAQ Software Microsoft Morgan Stanley Oracle Walmart


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



	/* The structure of the class is
	class StackQueue{
	private:
	    // These are STL stacks ( http://goo.gl/LxlRZQ )
	    stack<int> s1;
	    stack<int> s2;
	public:
	    void push(int);
	    int pop();
	}; */

//Function to push an element in queue by using 2 stacks.
	void StackQueue :: push(int x)
	{
		// Your Code

		// we directly push into the stack

		s1.push(x);

	}

//Function to pop an element from queue by using 2 stacks.
	int StackQueue :: pop()
	{
		// Your Code
		// here we get two cases

		// if stack 2 is empty

		if (s2.empty()) {
			if (s1.empty()) {
				return -1;
			}

			else {

				while (!s1.empty())
				{
					int x = s1.top();
					s1.pop();
					s2.push(x);
				}

				int x = s2.top();
				s2.pop();
				return x;
			}

		}
		else {

			int x = s2.top();
			s2.pop();
			return x;
		}

	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}