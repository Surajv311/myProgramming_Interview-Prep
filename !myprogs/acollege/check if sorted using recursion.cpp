/*
///////////////////////////////////////////

check if array is sorted or not using recursion

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
//typedef std::vector<int> vi;
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


bool checkSort(int arr[], int n) {

	if (n == 1 or n == 0) {
		return true;
	}

	if (arr[0] > arr[1]) {
		return false;
	}

	bool x = checkSort(arr + 1, n - 1);
// arr+1 goes to next element
// & then we have to reduce its size as we are trimming our array
// and calling recursively until till it can reach the last value.
// if last value reached means its sorted & we return true but if
// 	in any case arr[0] > arr[1] then return false.
	return x ;
}

int32_t main() {

///////////
	c_p_c();
///////////

	// code


	int arr[] = {1, 2, 3, 4, 5, 6, 5, 1, 6};

	int size = sizeof(arr) / sizeof(int);

	if (checkSort(arr, size)) {
		ct("sorted");
	}

	else {
		ct("not sorted");
	}

}
