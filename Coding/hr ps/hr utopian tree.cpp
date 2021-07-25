/////////////////////////////////////////////////////////
/*

The Utopian Tree goes through 2 cycles of growth every year. Each spring, it doubles in height. Each summer, its height increases by 1 meter.

A Utopian Tree sapling with a height of 1 meter is planted at the onset of spring. How tall will the tree be after n growth cycles?

For example, if the number of growth cycles is n=5 , the calculations are as follows:

Period  Height
0          1
1          2
2          3
3          6
4          7
5          14

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

// utopian tree

	int n ;
	cin >> n ; // number of cycles


	for (int i = 0; i < n; ++i)
	{
		int x ;
		int h = 1 ;

		cin >> x ;

		for (int j = 1; j <= x; ++j)
		{

			if (j % 2 != 0) {
				h = h * 2 ;
			}

			else {
				h = h + 1;
			}

		}

		cout << h << endl;


	}







	return 0;

}



