/*
///////////////////////////////////////////
//Question/Info


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
#define _IOS      	   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// typedef long long int lli;
typedef long double ld;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

void c_p_c()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

// bool check(map<int, int> , int );
// int compute( int , int[] , int[] );


bool check(mii &track , int xx) {

	int flag = 0 ;
	for (auto it : track) {

		if (it.first < xx and it.second < track[xx]) {
			flag++;
		}

	}
	return flag == xx - 1;

}

int compute( int n  , int wt[] , int jmp[] ) {



	mii track ;
	mii stp ;

	forn(i, n) {

		track[wt[i]] = i ;

		stp[wt[i]] = jmp[i];
	}
	int res = 0;

	sort(wt, wt + n);

	forx(i, 1, n)
	{


		while (!check(track, wt[i]))
		{
			res++;
			track[wt[i]] += stp[wt[i]];

		}

	}

	return res ;

}



int ftwo(int n, int wt[], int jmp[]) {

	int count = 0 ;
	if (wt[0] > wt[1]) {

		if (jmp[0] > 1) {
			count = 1;
		}
		else {
			count = 2;
		}

	}

	else {
		count = 0;
	}

	return count;
}



int fthree(int n, int wt[], int jmp[]) {


	// int count = 0 ;

	// int curpos[n];

	// forn(i, n) {
	// 	curpos[i] = i ;
	// }


	// forx(i, 1, n) {


	// 	if (wt[i - 1] > wt[i]) {

	// 		int posdif = abs(curpos[i - 1] - curpos[i]);
	// 		int npos = posdif + jmp[i - 1];

	// 		curpos[i - 1] = npos;
	// 		count++;


	// 	}


	// }


	return compute(n, wt, jmp);
}


int ffour(int n, int wt[], int jmp[]) {

	// int count = 0 ;

	// int curpos[n];

	// forn(i, n) {
	// 	curpos[i] = i + 1 ;

	// }


	// forx(i, 1, n) {


	// 	if (wt[i - 1] > wt[i]) {

	// 		while (curpos[i - 1] < curpos[i]) {
	// 			int posdif = abs(curpos[i - 1] - curpos[i]);
	// 			int npos = posdif + jmp[i - 1];
	// 			curpos[i - 1] = npos;
	// 			count++;
	// 		}

	// 	}


	// }



	return compute(n, wt, jmp);
}

int32_t main() {
///////////
//	c_p_c();
///////////
	_IOS
//////////

	// code


	int t ; cin >> t; while (t--) {



		int n ;
		cin >> n ;

		int wt[n];
		int jmp[n];

		forn(i, n) {
			cin >> wt[i];
		}
		forn(i, n) {
			cin >> jmp[i];
		}
		if (n == 2) {

			ct(ftwo(n, wt, jmp));
		}
		else if (n == 3) {

			ct(fthree(n, wt, jmp));
		}

		else {

			ct(compute(n, wt, jmp));
		}

	}


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}
