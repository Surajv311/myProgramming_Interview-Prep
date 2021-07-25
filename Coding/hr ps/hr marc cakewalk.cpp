/*
///////////////////////////////////////////


Print a long integer denoting the minimum
number of miles Marc must walk to maintain his weight.

Sample Input 0
3
1 3 2

Sample Output 0
11

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

	return a > b;
}
int32_t main() {

///////////
	c_p_c();
///////////

	// code


	int n ; // inputs of distance
	cin >> n;

	int arr[n];
	forn(i, n) {
		cin >> arr[i] ;
	}

	sort(arr, arr + n, comparator);

	int sum = 0 ;

	forn(i, n) {

		sum += (pow(2, i)) * (arr[i]);
	}

	ct(sum);


	return 0;
}