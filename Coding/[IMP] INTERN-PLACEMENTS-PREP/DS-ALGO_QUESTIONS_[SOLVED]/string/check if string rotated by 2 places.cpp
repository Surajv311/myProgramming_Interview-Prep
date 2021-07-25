/*
//////////////////////////////////////////////////////
//Question/Info

Check if string is rotated by two places
Basic Accuracy: 41.08% Submissions: 40879 Points: 1
Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating another string 'a' by exactly 2 places.

Example 1:

Input:
a = amazon
b = azonam
Output: 1
Explanation: amazon can be rotated anti
clockwise by two places, which will make
it as azonam.
Example 2:

Input:
a = geeksforgeeks
b = geeksgeeksfor
Output: 0
Explanation: If we rotate geeksforgeeks by
two place in any direction , we won't get
geeksgeeksfor.
Your Task:
The task is to complete the function isRotated() which takes two strings as input parameters and checks if given strings can be formed by rotations. The function returns true if string 1 can be obtained by rotating string 2 by two places, else it returns false.

Expected Time Complexity: O(N).
Expected Auxilary Complexity: O(N).
Challenge: Try doing it in O(1) space complexity.

Constraints:
1 <= length of a, b < 100



Company Tags
 Accolite Amazon

author: srj_v
//////////////////////////////////////////////////////
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

//////////////////////////////////////////////////////


int32_t main() {
///////////
//	c_p_c();
///////////
	_IOS
//////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/


	bool isRotated(string str1, string str2)
	{
		// Your code here
		if (str1.length() != str2.length())
			return false;
		if (str1.length() < 2) {
			return str1.compare(str2) == 0;
		}
		string clock_rot = "";
		string anticlock_rot = "";
		int len = str2.length();

		// Initialize string as anti-clockwise rotation
		anticlock_rot = anticlock_rot +
		                str2.substr(len - 2, 2) +
		                str2.substr(0, len - 2) ;

		// Initialize string as clock wise rotation
		clock_rot = clock_rot +
		            str2.substr(2) +
		            str2.substr(0, 2) ;

		// check if any of them is equal to string1
		return (str1.compare(clock_rot) == 0 ||
		        str1.compare(anticlock_rot) == 0);
	}




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////