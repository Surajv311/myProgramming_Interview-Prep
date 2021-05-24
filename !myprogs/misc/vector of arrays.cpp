/*
///////////////////////////////////////////
//Question/Info


 VECTOR OF ARRAYS...

author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define _IOS   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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


	vector<int> v[5];

	void insertionInArrayOfVectors()
	{

		for (int i = 0; i < 5; i++) {

			for (int j = i + 1; j < 5; j++) {
				v[i].push_back(j);
			}
		}
	}

	void printElements()
	{

		for (int i = 0; i < 5; i++) {

			cout << "Elements at index "
			     << i << ": ";

			for (auto it = v[i].begin();
			        it != v[i].end(); it++) {
				cout << *it << ' ';
			}
			cout << endl;
		}
	}


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}