/*
///////////////////////////////////////////

Function Description

Complete the twoArrays function
in the editor below. It should return a string, either YES or NO.

twoArrays has the following parameter(s):

k: an integer
A: an array of integers
B: an array of integers

Output Format

For each query, print YES on a new line if valid permutations exist. Otherwise, print NO.

Sample Input
2
3 10
2 1 3
7 8 9
4 5
1 2 2 1
3 3 3 4

Sample Output
YES
NO

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


bool comparator(int a , int b) {

	return a < b ;
}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

// 	int t ;

// 	cin >> t ;


// 	forn(i, t) {
// 		int s ; // size
// 		cin >> s ;
// 		int a[s];
// 		int b[s] ;

// 		int k ; // number

// 		cin >> k ;
// 		forn(i, s) {
// 			cin >> a[i];
// 		}

// // sort in ascending order

// 		sort(a , a + s);
// 		forn(i, s) {
// 			cin >> b[i];
// 		}
// 		sort(b, b + s, comparator);

// 		bool flag = false ;

// 		forn(i, s) {
// 			if (a[i] + b[i] >= k) {
// 				flag = true ;
// 			}

// 		}

// 		if (flag) {
// 			ct("YES");
// 		}
// 		else {
// 			ct("NO");
// 		}

// 	} // check..


	/*
	Soln :

	// Complete the twoArrays function below.
	string twoArrays(int k, vector<int> A, vector<int> B) {

	    sort(A.begin(),A.end());
	    sort(B.begin(),B.end(),greater<int>());

	    for(int i=0,j=0;i<(int)A.size();i++,j++){
	        if(A[i]+B[j]<k)
	        return "NO";
	    }

	    return "YES";
	}
	*/


	return 0;
}