/*
///////////////////////////////////////////
//Question/Info

josephus problem

In computer science and mathematics, the Josephus Problem (or Josephus permutation) is a theoretical problem. Following is the problem statement:
There are n people standing in a circle waiting to be executed. The counting out begins at some point in the circle and proceeds around the circle in a fixed direction. In each step, a certain number of people are skipped and the next person is executed. The elimination proceeds around the circle (which is becoming smaller and smaller as the executed people are removed), until only the last person remains, who is given freedom. Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle. The task is to choose the place in the initial circle so that you are the last one remaining and so survive.
For example, if n = 5 and k = 2, then the safe position is 3. Firstly, the person at position 2 is killed, then person at position 4 is killed, then person at position 1 is killed. Finally, the person at position 5 is killed. So the person at position 3 survives.
If n = 7 and k = 3, then the safe position is 4. The persons at positions 3, 6, 2, 7, 5, 1 are killed in order, and person at position 4 survives.

The problem has following recursive structure.

  josephus(n, k) = (josephus(n - 1, k) + k-1) % n + 1
  josephus(1, k) = 1
After the first person (kth from beginning) is killed, n-1 persons are left. So we call josephus(n – 1, k) to get the position with n-1 persons. But the position returned by josephus(n – 1, k) will consider the position starting from k%n + 1. So, we must make adjustments to the position returned by josephus(n – 1, k).
Following is simple recursive implementation of the Josephus problem. The implementation simply follows the recursive structure mentioned above.


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


void jos(vi v, int k, int index, int &ans) {

	if (v.size() == 1) {
		//  as eith this only one person would remain standing.
		ans = v[0];
		return ;
	}

	index = (index + k) % (v.size());
// so that when we are in the last index, and the gun has to
// be passed then , rather than overflow it must return to
// start index... since going circular, so we use %...

	v.erase(v.begin() + index);
// erasing the index of person eliminated

	jos(v, k, index, ans);

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



	int n = 40;
	int k = 7;

	vi v(n);

	forn(i, n) {
		v[i] = i + 1;
		// NOTE: PUTTING IN 1 IN THE OTH POSITION
		// Since implying that person 1 in 0th position
	}

	k--; // since we are counting the person having the gun as well...

// index would be the starting index or the index from where
// the game would start.
	int index = 0;

	int ans = 0;

	jos(v, k, index, ans);

	ct(ans);

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}
