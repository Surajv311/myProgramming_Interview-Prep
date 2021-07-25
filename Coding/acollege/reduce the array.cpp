/*
///////////////////////////////////////////


// Q. Reduce the Array/ Print the Array in reduced form....
	// i/p = 10,16,7,14,5,3,12,9
	// o/p = 4,7,2,6,1,0,5,3
	// Actually puts the index of the array when sorted in the given array.


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
#define for1(i,n) for (int i = 1; i <= (int)(n); i++)
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

bool comparator(pair<int, int> x, pair<int, int> y) {

	return (x.first < y.first) ; // return by sorting the first component of pair that is arr[i]
}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	int arr[] = {1, 7, 3, 2, 4, 6, 8};
// making a vector of pairs

	int n = (sizeof(arr) / sizeof(int));

	vector <pair<int, int>> vp ;

	forn(i, n) {
// now to make pair of the arr[i] & i , we can access via :
		// pair<int, int> p ;
		// p.first = arr[i];
		// p.second = i ;
		//	vp.pb(p);

		//OR

		vp.pb(mp(arr[i], i)); // make_pair(,)

	}


// now sorting vector based on array elements

	sort(all(vp), comparator); // comparator used since pair is passed, to specify sort using which component of pair

// now updating the array with our answer

	forn(i, vp.size()) { // size of arr == vector vp
		arr[vp[i].second] = i ;
	}

	for (auto i : arr) {
		cout << arr[i] << " ";
	}

	return 0;
}