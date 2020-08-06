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

bool sortedRotatedArrayFun(int arr[] , int size , int sum) {
	int i ;
	for (i = 0 ; i < size ; i++)
		if (arr[i] > arr[i + 1])
		{
			break ;
		}

	int lower = (i + 1) % size ; // this would give the lower index
	int upper = i ; // since after looping index of i would be last
	while (lower != upper) {

		if (arr[lower] + arr[upper] == sum)
			return true;

		if (arr[lower] + arr[upper] < sum) // since lesser than sum so lower index must be incremented to near the sum
			lower = (lower + 1) % size ;
		else  // sum more so the upper index must be decremented back
			upper = (upper + size - 1) % size ;
	}

	return false;
}


int32_t main() {

//////
	c_p_c();
///////

// max pair sum presence in rotated sorted array

	int arr[5] = {1, 2, 3, 4, 5};
	int count = 0 ;
	int size = sizeof(arr) / sizeof(int);
	int sum = 8 ;
	if (sortedRotatedArrayFun(arr , size , sum)) // if returns true
		cout << "pair present" << endl;
	else
		cout << "pair not present" << endl ;


	return 0;

}