/*

Wildcard Pattern Matching
Medium Accuracy: 43.9% Submissions: 28619 Points: 4
Given two strings 'str' and a wildcard pattern 'pattern' of length N and M respectively,  You have to print '1' if the wildcard pattern is matched with str else print '0' .

The wildcard pattern can include the characters ‘?’ and ‘*’
‘?’ – matches any single character
‘*’ – Matches any sequence of characters (including the empty sequence)

Note: The matching should cover the entire str (not partial str).



Example 1:

Input:
pattern = "ba*a?"
str = "baaabab"
Output: 1
Explanation: replace '*' with "aab" and
'?' with 'b'.
Example 2:

Input:
pattern = "a*ab"
str = "baaabab"
Output: 0
Explanation: Because of'a' at first position,
pattern and str can't be matched.

Your Task:
You don't need to read input or print anything. Your task is to complete the function wildCard() which takes the two strings 'pattern' and 'str' as input parameters and returns the answer.



Expected Time Complexity: O(N*M)
Expected Auxiliary Space: O(N*M)

Constraints:
1 <= length of(str,pat) <= 200

View Bookmarked Problems
Company Tags
 Amazon InMobi Ola Cabs United Health Group Walmart Zoho Microsoft Google

*/





bool fun(string s, string p, int i , int j , int dp[209][209]) {

	// MEMOIZATION....

	if (dp[i][j] != -1) return dp[i][j];


//         if our p string ends, then s string must have also ended... else wrong

	if (j == p.length()) return i == s.length();

// if s string ends, then p string must only be having '*'... to have a sequence...
//             and keep iterating pointer ahead...

	if (i == s.length()) return p[j] == '*' and fun(s, p, i, j + 1, dp);

//         if none of the strings ended, & if p has '*'.. then, just keep incrementing, ... we can have 2 cases, either we keep incrementing i or, only j... the code to check if s[i]==p[j], would be in else case...:

	if (i != s.length() and j != p.length() and p[j] == '*')
		return dp[i][j] = fun(s, p, i, j + 1, dp) or fun(s, p, i + 1, j, dp);

	else {
// when our p[j]=='?' or the case when the lengths haven't reached the end...
//             we must ensure i<s.length() & j<p.length...
//             also our s[i] could equal p[j] or our p[j] could be '?'...

		bool check = i < s.length() and j < p.length() and (s[i] == p[j] or p[j] == '?');
		return dp[i][j] = check and fun(s, p, i + 1, j + 1, dp);
	}

	return dp[s.length()][p.length()];
}


int wildCard(string pattern, string str)
{


	int m = str.length(); int n = pattern.length();

	/*

	2D VECTOR IS GIVING TLE....
	        CONCLUSION: 2D array faster than > 2D vector...
	        vector<vector<int>> dp(m+1,vector<int>(n+1,-1))

	 int dp[2009][2009] >>>> vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
	considering long long dp[10007][10007]... giving error...,
	 note the limits of the question...

	 */

	int dp[209][209];

	// memset(dp,-1, sizeof(dp));
	for (int i = 0; i < m + 1; i++) {
		for (int j = 0; j < n + 1; j++) {
			dp[i][j] = -1;
		}
	}

	return fun(str, pattern, 0, 0, dp);


}






