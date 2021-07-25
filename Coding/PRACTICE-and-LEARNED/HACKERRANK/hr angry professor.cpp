/////////////////////////////////////////////////////////
/*

angry professor
*/
////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
#define int long long int
#define setbits(x) __builtin_popcount(x)
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


//////
	c_p_c();
///////


	int t ;
	cin >> t ; // number of cycles

	for (int i = 0; i < t; ++i)
	{

		int n , k ; // number of students and cancellation threshold

		cin >> n >> k ;

		int arr[n] ;
		int count = 0 ;

		for (int j = 0; j < n; ++j)
		{

			cin >> arr[i] ;
			if (arr[i] <= 0 ) {
				count++ ;
			}
		}
		if (count >= k) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}




	}







	return 0;

}



