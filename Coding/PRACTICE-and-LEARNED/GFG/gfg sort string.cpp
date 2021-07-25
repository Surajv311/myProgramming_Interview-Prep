// Given a string of lowercase characters from ‘a’ – ‘z’. We need to write a program to print the characters of this string in sorted order.

// Input:
// The first line contains an integer T, denoting number of test cases. Then T test case follows. First line of each test case contains a string S each.

// Output:
// For each test case, print the string S in sorted order.

// Constraints:
// 1<=T<=100
// 1<=|S|<=4*10^4
// String S will contains lowercase character from 'a'-'z

// Example:
// Input:
// 2
// bbccdefbbaa
// geeksforgeeks
// Output :
// aabbbbccdef
// eeeefggkkorss

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
	c_p_c();

	// code
	int inputs;
	cin >> inputs;
	string s;
	while (inputs--)
	{
		cin >> s;
		sort(s.begin(), s.end());
		cout << s << endl;
	}
	return 0;

}