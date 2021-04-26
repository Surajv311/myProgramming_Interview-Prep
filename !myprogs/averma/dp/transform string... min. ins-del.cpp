/*
///////////////////////////////////////////
//Question/Info

Minimum number of deletions and insertions to transform
one string into another

Given two strings ‘str1’ and ‘str2’ of size m and n respectively.
The task is to remove/delete and insert
the minimum number of characters from/in
str1 to transform it into str2. It could
be possible that the same character needs
to be removed/deleted from one point of str1
and inserted to some another point.

Example 1:

Input :
str1 = "heap", str2 = "pea"
Output :
Minimum Deletion = 2 and
Minimum Insertion = 1
Explanation:
p and h deleted from heap
Then, p is inserted at the beginning
One thing to note, though p was required yet
it was removed/deleted first from its position and
then it is inserted to some other position.
Thus, p contributes one to the deletion_count
and one to the insertion_count.

///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define int 		   long long int
#define setbits(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout<<x<<endl;
#define ct2(x,y) 	   cout<<x<<" "<<y<<endl;
#define forn(i,n) 	   for(int i = 0; i < (int)(n); i++)
#define forx(i,x,n)    for(int i = x; i < (int)(n); i++)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed<<setprecision(y)<<x;
#define PI 			   3.1415926535897932384626433832795
#define MOD 		   1000000007 // (1e9+7)
#define pii 		   pair<int,int>
#define pis 		   pair<int,string>
#define vi  		   vector<int>
#define vii 		   vector<pii>
#define mii 		   map<int,int>

// typedef long long int lli;
typedef long double ld;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

// using bottom up dp
int nid(string a, string b, int la, int lb) {


	int dp[la + 1][lb + 1];
	forn(i, la + 1) {
		forn(j, lb + 1) {
			// base case
			if (i == 0 or j == 0) {
				dp[i][j] = 0;
			}

			else {
				if (a[i - 1] == b[j - 1]) {
					dp[i][j] = 1 + dp[i - 1][j - 1];
				}

				else {
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}

			}
		}
	}

	/*

	So now we can get the dp length...
	So now considering the strings: "heap" & "pea".
	Now to convert heap to pea:
	The algo is simple, we must convert "heap" to "ea".
	And then this "ea" should be converted to "pea".
	We know longest common substring is "ea".
	Since we have to find the number of insertions or deletions,
	To convert "heap" to "ea" : 2 deletions.
	Now to convert "ea" to "pea": 1 insertion.

	So now the minimum number of insertion or deletion to convert
	one string to another is:

	String1 length - (subsequence length) + String2 length - (Subseq. length)
	which equals: la+lb - 2*(dp[la][lb]).

	Hence we would get the length.

	*/

	int kk = la + lb - 2 * (dp[la][lb]);

	return kk;
}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	string a = "heap";
	string b = "pea";

	int la = a.length();
	int lb = b.length();


	// dp bottom up
	ct(nid(a , b , la, lb));


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}