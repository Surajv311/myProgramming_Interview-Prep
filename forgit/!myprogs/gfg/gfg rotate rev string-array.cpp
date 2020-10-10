// Given a string of lowercase characters from ‘a’ – ‘z’. We need to write a program to print the characters of this string in sorted order.

// Examples:

// Input : bbccdefbbaa
// Output : aabbbbccdef

// Input : geeksforgeeks
// Output : eeeefggkkorss






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
// to rotate array of int or strings

	int arr[5] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(int);
	int n = 4 ;
	rotate(arr , arr + n , arr + size);

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	reverse(arr, arr + size);

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	string str = "geeksforgeeks";

	// Reverse str[begin..end]
	reverse(str.begin(), str.end());

	cout << str;
	return 0;

}