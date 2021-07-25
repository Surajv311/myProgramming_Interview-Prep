/////////////////////////////////////////////////////////
/*
counting sort 2
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


	int arr[1000000] , size;
	cin >> size ;
	for (int i = 0 ; i < size ; i++) {
		cin >> arr[i];
		if (arr[i] >= 100 || arr[i] < 0) {
			break;
		}

	}
// to sort the function
	sort(arr , arr + size);

	for (int i = 0 ; i < size ; i++)
		cout << arr[i] << " ";


	return 0;

}














