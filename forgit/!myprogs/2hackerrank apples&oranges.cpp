#include <bits/stdc++.h>
#include <algorithm>
#include <list>
#include <queue>
#include <stack>
#include <map>
#include <deque>
#include <iterator>
#include <memory>
#include <set>
#include <utility>
#include <vector>
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
	c_p_c();

	// code

	int s , t  ;

// s & t is length of house
	cin >> s >> t ;

	int a , b ;
// location of apple & orange tree
	cin >> a >> b ;

	int m  , n ;
// number of apples & ornges
	cin >> m >> n ;
	int count_one = 0 ;
	int count_two = 0 ;

	int arr_a[m] , arr_o[n];
	for (int i = 0 ; i < m ; i++) {
		cin >> arr_a[i];
		int x = a + arr_a[i];
		if (x >= s && x <= t) {
			count_one++;
		}

	}
	for (int i = 0; i < n; i++)
	{
		cin >> arr_o[i];
		int y = b + arr_o[i];
		if (y >= s && y <= t)
		{
			count_two++;
		}
	}



	cout << count_one << endl;
	cout << count_two << endl;





	return 0;

}