/*
///////////////////////////////////////////
//Question/Info

N meetings in one room
Easy Accuracy: 43.1% Submissions: 17866 Points: 2
There is one meeting room in a firm. There are N meetings in the form of (S[i], F[i]) where S[i] is start time of meeting i and F[i] is finish time of meeting i.
What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time? Also note start time of one chosen meeting can't be equal to the end time of the other chosen meeting.


Example 1:

Input:
N = 6
S[] = {1,3,0,5,8,5}
F[] = {2,4,6,7,9,9}
Output:
4
Explanation:
Four meetings can be held with
given start and end timings.
Example 2:

Input:
N = 8
S[] = {75250, 50074, 43659, 8931, 11273,
27545, 50879, 77924}
F[] = {112960, 114515, 81825, 93424, 54316,
35533, 73383, 160252}
Output:
3
Explanation:
Only three meetings can be held
with given start and end timings.

Your Task :
You don't need to read inputs or print anything. Complete the function maxMeetings() that recieves array S[ ] and F[ ] along with their size N as input parameters and returns the maximum number of meetings that can be held in the meeting room.


Expected Time Complexity : O(N*LogN)
Expected Auxilliary Space : O(N)


Constraints:
1 ≤ N ≤ 105
0 ≤ S[i] < F[i] ≤ 105

Company Tags
 Amazon Flipkart MakeMyTrip Microsoft

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
		//Function to find the maximum number of meetings that can
		//be performed in a meeting room.



		/*

		We can sort the activities according to their finishing time so that we always consider the next activity as minimum finishing time activity.

		so we basically sort based on the end[], and then
		compare the end[] value of previous to the current start[] value...
		and the overall count is returned (we add +1 since , beginning one is initially ignored...)

		*/
		int maxMeetings(int start[], int end[], int n)
		{
			// Your code here
			// since assuming already sorted

			vector<pair<int, int>> v;

			for (int i = 0 ; i < n ; ++i) {
				v.push_back(make_pair(end[i], start[i]));
			}

			sort(v.begin(), v.end());

			int count = 0;

			int j = 0;

			for (int i = 1; i < n; ++i) {

				if (v[i].second > v[j].first) {
					++count;
					j = i;
				}

			}
			return count + 1;
		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}