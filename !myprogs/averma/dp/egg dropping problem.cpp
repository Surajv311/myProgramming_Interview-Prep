/*
///////////////////////////////////////////
//Question/Info

egg dropping problem

The following is a description of the instance of this
famous puzzle involving n = 2 eggs and a building with k = 36 floors.
Suppose that we wish to know which stories in a 36 -
story building are safe to drop eggs from,
and which will cause the eggs to break on landing.
We make a few assumptions:

..An egg that survives a fall can be used again.
..A broken egg must be discarded.
..The effect of a fall is the same for all eggs.
..If an egg breaks when dropped, then it would
break if dropped from a higher floor.
..If an egg survives a fall then it would survive a shorter fall.
..It is not ruled out that the first - floor windows break eggs,
nor is it ruled out that the 36th -
floor do not cause an egg to break.

If only one egg is available and we wish to be
sure of obtaining the right result, the experiment
can be carried out in only one way. Drop the egg
from the first - floor window; if it survives,
drop it from the second - floor window.
Continue upward until it breaks.
In the worst case, this method may require 36 droppings.
Suppose 2 eggs are available. What is the
least number of egg - droppings that is
guaranteed to work in all cases ?
The problem is not actually to find the
critical floor, but merely to decide
floors from which eggs should be dropped
so that the total number of trials are minimized.

k == > Number of floors
n == > Number of Eggs
eggDrop(n, k) == > Minimum number of trials
needed to find the critical floor in worst case.

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
#define ct(x) 		   cout << x << endl;
#define ct2(x,y) 	   cout << x << " " << y << endl;
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

int eggr(int e , int f) {

	if (f == 0 or f == 1) {
		// 0th or 1st floor
		return f ;
	}

	if (e == 1) {
		// if only 1 egg
		return f;
	}

	int mn = INT_MAX;

	for (int k = 1; k <= f ; k++) {

		int temp = 1 + max(eggr(e - 1, k - 1), eggr(e, f - k));

//  when an egg break then e-1,k-1 as it means 1 egg less
// 	from total and also that floor is not optimal floor.
//  Also, since according to question ,
// 	we have to find minium number of
// 	attempts in our worst case so we take
// 	max of 2 functions to see which is the
// 	worst case and added 1 for every attempt
//  and now since minimum attempts so we have
// 	taken minimum of our mn and temp.

		mn = min(mn, temp);

	}

	return mn;

}

// for top down memoization

int dp[1001][1001];

int eggm(int e , int f) {

	if (f == 0 or f == 1) {
		return f ;
	}

	if (e == 1) {
		return f;
	}

	if (dp[e][f] != -1) {
		return dp[e][f];
	}

	int mn = INT_MAX;

	for (int k = 1; k <= f ; k++) {
		int temp = 1 + max(eggm(e - 1, k - 1), eggm(e, f - k));

		mn = min(mn, temp);

	}

	return dp[e][f] = mn;

}
/*
// further optimisations can be done
// in our top down by giving low/high flags.

if (dp[e - 1][k - 1] != -1) {
	int low = dp[e - 1][k - 1];

}
else {
	low = solve(e - 1, k - 1)
	      dp[e - 1][k - 1] = low;
}

if (dp[e][f - k] != -1) {
	int high = dp[e][f - k];

}
else {
	low = solve(e, f - k)
	      dp[e][f - k] = high;
}

// now
int temp = 1 + max(low, high);
......
*/

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

	int n = 2, k = 10;

	ct(eggr(n, k));

	memset(dp, -1, sizeof(dp));
	ct(eggm(n, k));


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}