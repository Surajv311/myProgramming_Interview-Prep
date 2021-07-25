/////////////////////////////////////////////////////////
/*

The first line of the input contains an integer N.
The next line contains N space separated integers(1-based index).
The third line contains a single integer x,
denoting the position of an element that should be removed from the vector.
The fourth line contains two integers a and b denoting the range that
should be erased from the vector inclusive of a and exclusive of b.

Output Format

Print the size of the vector in the first line and the elements of the vector after the two erase operations in the second line separated by space.

Sample Input
6
1 4 6 2 8 9
2
2 4

Sample Output
3
1 8 9

Explanation

The first query is to erase the 2nd element in the vector,
which is 4. Then, modifed vector is {1 6 2 8 9},
we want to remove the range of 2~4, which means the
2nd and 3rd elements should be removed.
Then 6 and 2 in the modified vector are removed and we finally get {1 8 9}

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

	vector <int> v ;

	int n ;
	cin >> n ;

	int m  ;
	for (int i = 0 ; i < n ; i++) {
		cin >> m ;
		v.push_back(m);
	}
	int e ; // position to erase
	cin >> e ;

	v.erase(v.begin() + e - 1);

	int r1 , r2 ; // range
	cin >> r1 >> r2 ;

	v.erase(v.begin() + r1 - 1 , v.begin() + r2 - 1);

	cout << v.size() << endl ;

	for (int i = 0 ; i < v.size() ; i++) {
		cout << v[i] << " " ;
	}

	return 0;

}



