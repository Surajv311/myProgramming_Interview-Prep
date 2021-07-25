/*
///////////////////////////////////////////

getline function

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

	int t ;
	cin >> t;

// cin.ignore(); //or t++;
	// For input only 1 and a string, it won't display unless cin.ignore() or t++...
	// since it also considers line break

	while (t--) {

		string str;
		getline(cin, str);

		cout << str << endl;


		/*
		 getline(cin,<argument string>) takes a string "ewfwfw cnvms"
		 that would be having spaces " "...
		 since otherwise it would break...
		*********************************** IMP **********************************
		 Also:
		 while running while loop to use getline multiple times, it actually counts
		 the spacing after "\n" hence our 't' would increment once, so for that
		 we use cin.ignore(){or we may even increase the value of t beforehand...}


		*/
	}







	return 0;
}