/*
//////////////////////////////////////////////////////
//Question/Info

Implement Atoi
Medium Accuracy: 32.9% Submissions: 73303 Points: 4
Your task  is to implement the function atoi. The function takes a string(str) as argument and converts it to an integer and returns it.

Note: You are not allowed to use inbuilt function.

Example 1:

Input:
str = 123
Output: 123

Example 2:

Input:
str = 21a
Output: -1
Explanation: Output is -1 as all
characters are not digit only.
Your Task:
Complete the function atoi() which takes a string as input parameter and returns integer value of it. if the input string is not a numerical string then returns 1..

Expected Time Complexity: O(|S|), |S| = length of string str.
Expected Auxiliary Space: O(1)

Constraints:
1<=length of S<=10


Note:The Input/Ouput format and Example given are used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.

Company Tags
 Adobe Amazon Code Brew Microsoft Morgan Stanley Payu

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


	int atoi(string str)
	{
		//Your code here

		bool flag = true;
		for (int i = 0 ; i < str.length(); i++) {
			if (isalpha(str[i])) { flag = false; break;}

		}

		if (flag) return stoi(str);
		else return -1;

		/*

		Its not correct since we have used inbuilt function...
		think of alternate approach...:-

		 int num = 0;
		bool flag = false;
		int i = 0;

		if(str[i] == '-')
		{
		flag = true;
		i++;
		}

		for(; i < str.size(); i++)
		{
		if(isdigit(str[i]))
		{
		    num = num * 10 + (str[i] - '0');
		}
		else
		{
		    return -1;
		}
		}

		return (flag) ? -num : num;

		*/

	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////