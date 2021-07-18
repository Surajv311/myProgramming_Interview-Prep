/*
//////////////////////////////////////////////////////
//Question/Info

First non-repeating character in a stream
Medium Accuracy: 51.34% Submissions: 19437 Points: 4
Given an input stream of A of n characters consisting only of lower case alphabets. The task is to find the first non repeating character, each time a character is inserted to the stream. If there is no such character then append '#' to the answer.


Example 1:

Input: A = "aabc"
Output: "a#bb"
Explanation: For every character first non
repeating character is as follow-
"a" - first non-repeating character is 'a'
"aa" - no non-repeating character so '#'
"aab" - first non-repeating character is 'b'
"aabc" - first non-repeating character is 'b'
Example 2:

Input: A = "zz"
Output: "z#"
Explanation: For every character first non
repeating character is as follow-
"z" - first non-repeating character is 'z'
"zz" - no non-repeating character so '#'


Your Task:
You don't need to read or print anything. Your task is to complete the function FirstNonRepeating() which takes A as input parameter and returns a string after processing the input stream.


Expected Time Complexity: O(26 * n)
Expected Space Complexity: O(26)


Constraints:
1 <= n <= 105

Company Tags
 Adobe Amazon FactSet Flipkart Microsoft Payu Yahoo

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


	string FirstNonRepeating(string A) {
		// Code here

		vector<int> alp(26, 0);

		queue<char> q;
		string ans = "";

		for (int i = 0 ; i < A.length() ; i++) {

			q.push(A[i]);

			alp[A[i] - 'a']++;

			while (!q.empty())
			{

				if (alp[q.front() - 'a'] > 1) q.pop();
				// if the letter is repeated... then we find the next non repeating char.. by popping... we have noted the frequency and also the running stream of chars is stored in queue..to determine next non repeating char...

				else break;

			}

			if (!q.empty()) ans += q.front();

			else ans += '#';

		}

		return ans;

	}


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////