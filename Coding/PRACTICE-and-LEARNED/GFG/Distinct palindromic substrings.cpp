/*

Distinct palindromic substrings
Hard Accuracy: 71.87% Submissions: 3248 Points: 8
Given a string str of lowercase ASCII characters, Count the number of distinct continuous palindromic sub-strings which are present in the string str.

Example 1:

Input:
str = "abaaa"
Output:
5
Explanation : These are included in answer:
"a","aa","aaa","aba","b"
Example 2:

Input
str = "geek"
Output:
4
Explanation : Below are 4 palindrome sub-strings
"e","ee","g","k"
Your Task:
You don't need to read input or print anything. Your task is to complete the function palindromeSubStrs() which takes the string str as input parameter and returns the total number of distinct continuous palindromic sub-strings in str.

Expected Time Complexity : O(N2logN)
Expected Auxilliary Space : O(N2)

Constraints:
1 ≤ N ≤ 2*103, where N is the length of the string str.

View Bookmarked Problems
Company Tags
 Linkedin MakeMyTrip Ola Cabs SAP Labs

*/


void check(int i, int j, set<string> &se, string s) {
	int n = s.length();
	while (i >= 0 and j < n and s[i] == s[j])
	{
		se.insert(s.substr(i, j - i + 1));
		i--; j++;
		// expanding outwards & checking ...
	}
}

int palindromeSubStrs(string s) {
	// code here

	set<string> se;

	for (int i = 0 ; i < s.length(); i++) {
		check(i, i, se, s); // for odd length string case..., though calls would for both....
		check(i, i + 1, se, s); // even lenght, but calls would be for both odd/even... since see how the iterator is expanding outwards & checking..
	}

	return se.size();
}










































