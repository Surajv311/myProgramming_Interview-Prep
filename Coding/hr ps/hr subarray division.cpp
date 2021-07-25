/*
///////////////////////////////////////////

Function Description

Complete the birthday function in the editor below. It should return an integer denoting the number of ways Lily can divide the chocolate bar.

birthday has the following parameter(s):

s: an array of integers, the numbers on each of the squares of chocolate
d: an integer, Ron's birth day
m: an integer, Ron's birth month

Sample Input 0
5
1 2 1 3 2
3 2

Sample Output 0
2

Sample Input 1
6
1 1 1 1 1 1
3 2

Sample Output 1
0


Given sum subarray ...
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
#define int long long int
#define setbits(x) __builtin_popcount(x)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ct(x) cout<<x<<endl;
#define ct2(x,y) cout<<x<<" "<<y<<endl;
//typedef long long int lli;
typedef long double ld;

using namespace std;

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int fsum(vector<int> v, int d, int consnum) {
	int num = 0, sum = 0;
	int n = v.size();
	for (int i = 0; i < (n - consnum + 1); i++)
	{
		for (int j = i; j < consnum + i; j++)
		{
			sum += v[j];
		}
		if (sum == d)
			num++;
		sum = 0;
	}
	return num;
}

int32_t main() {

///////////
	c_p_c();
///////////

	// code
	vector <int> v ;
	int n ;
	cin >> n ; // size
	for (int i = 0; i < n; ++i)
	{
		int data ;
		cin >> data ;
		v.pb(data) ;
	}
	int sum ;
	cin >> sum ;

	int consnum ;
	cin >> consnum ; // consecutive num
// its total integers you can take at a time to equal given sum

	ct(fsum(v , sum , consnum));

	return 0;
}