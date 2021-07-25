/*
//////////////////////////////////////////////////////
//Question/Info

Implement strstr
Basic Accuracy: 50.08% Submissions: 64929 Points: 1
Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and  locates the occurrence of the string x in the string s. The function returns and integer denoting the first occurrence of the string x in s (0 based indexing).

Note: You are not allowed to use inbuilt function.

Example 1:

Input:
s = GeeksForGeeks, x = Fr
Output: -1
Explanation: Fr is not present in the
string GeeksForGeeks as substring.

Example 2:

Input:
s = GeeksForGeeks, x = For
Output: 5
Explanation: For is present as substring
in GeeksForGeeks from index 5 (0 based
indexing).

Your Task:
You don't have to take any input. Just complete the strstr() function which takes two strings str, target as an input parameter. The function returns -1 if no match if found else it returns an integer denoting the first occurrence of the x in the string s.

Expected Time Complexity: O(|s|*|x|)
Expected Auxiliary Space: O(1)

Note : Try to solve the question in constant space complexity.

Constraints:
1 <= |s|,|x| <= 100

Company Tags
 Amazon Facebook Microsoft Qualcomm

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


	int strstr(string s, string x)
	{
		//Your code here

		return s.find(x);
	}
	/*
	///////////////////////////////////////////////////////////////////
	rabin carp rolling hash algo to find substr...


	#include <bits/stdc++.h>
	using namespace std;

	// d is the number of characters in the input alphabet
	#define d 256

	//pat -> pattern
	//	txt -> text
	//	q -> A prime number

	void search(char pat[], char txt[], int q)
	{
	int M = strlen(pat);
	int N = strlen(txt);
	int i, j;
	int p = 0; // hash value for pattern
	int t = 0; // hash value for txt
	int h = 1;

	// The value of h would be "pow(d, M-1)%q"
	for (i = 0; i < M - 1; i++)
		h = (h * d) % q;

	// Calculate the hash value of pattern and first
	// window of text
	for (i = 0; i < M; i++)
	{
		p = (d * p + pat[i]) % q;
		t = (d * t + txt[i]) % q;
	}

	// Slide the pattern over text one by one
	for (i = 0; i <= N - M; i++)
	{

		// Check the hash values of current window of text
		// and pattern. If the hash values match then only
		// check for characters on by one
		if ( p == t )
		{
		//Check for characters one by one
			for (j = 0; j < M; j++)
			{
				if (txt[i+j] != pat[j])
					break;
			}

			// if p == t and pat[0...M-1] = txt[i, i+1, ...i+M-1]
			if (j == M)
				cout<<"Pattern found at index "<< i<<endl;
		}

		// Calculate hash value for next window of text: Remove
		// leading digit, add trailing digit
		if ( i < N-M )
		{
			t = (d*(t - txt[i]*h) + txt[i+M])%q;

			// We might get negative value of t, converting it
			// to positive
			if (t < 0)
			t = (t + q);
		}
	}
	}

	int main()
	{
	char txt[] = "GEEKS FOR GEEKS";
	char pat[] = "GEEK";
	int q = 101; // A prime number
	search(pat, txt, q);
	return 0;
	}

	------------------------------

	My method.... (BUGGY)

	Rabin Karp ~ Rolling Hash Algo...
	NOT WORKING...BUGS... To be fixed...
	string s, x;
	cin >> s >> x;
	int MOD = 1e9 + 7;
	int xhash = 0;
	int shash = 0;
	int lows = x.size();
	int k = x.size() - 1;

	for (int i = 0 ; i < lows; i++) {
		xhash += ((1 + (x[i] - 'A')) * pow(26, k));
		xhash %= MOD;
		k--;
	}

	k = x.size() - 1; // reinitializing...

	for (int i = 0 ; i < lows; i++) {
		shash += ((1 + (s[i] - 'A')) * pow(26, k));
		shash %= MOD;
		k--;
	}

	// now iterate for whole bigger string...

	vector<pair<int, int>> ans;

	bool flag = false;
	if (xhash == shash) {
		int size = x.size() - 1;
		ans.push_back(make_pair(0, size));
		flag = true;
	}

	int it = 0;
	k = x.size() - 1;

	for (int i = 1; i < s.size(); i++)
	{
	// now window sliding our shash...
		shash -= ((1 + (s[it] - 'A')) * pow(26, k));
		shash %= MOD;
		it++; // for next iteration...
		// so removed first element
		// now sliding the window, but first left shifting the value...
		shash *= 26; // left shift...
		shash %= MOD;

	// now adding the forward element ...

		shash += ((1 + (s[i] - 'A'))); // our : pow(26, 0)
		shash %= MOD;

		if (xhash == shash) {
	// substring indexes...
			int size = x.size() - 1;
			ans.push_back(make_pair(i - size + 1, i + 1));
	// current and current - 'size' indexes back...
			flag = true;
		}
	}


	if (flag) for (auto it : ans) cout << it.first << " " << it.second << endl;
	else cout << -1;

	-----------------------------------------------------------------------

	   ///////////////////////////////////////////////////////////////////
	       ///////////////////////////////////////////////////////////////////

	    kmp algo to find substr...

	    - shared in Q: longest prefix suffix...(check there)...
	    https://practice.geeksforgeeks.org/problems/longest-prefix-suffix2527/1

	        ///////////////////////////////////////////////////////////////////
	            ///////////////////////////////////////////////////////////////////
	   //  z algo - couldn't do... XXXXXX

	        ///////////////////////////////////////////////////////////////////
	            ///////////////////////////////////////////////////////////////////

	            */





// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////