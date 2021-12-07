/*


Length of the longest substring
Medium Accuracy: 50.99% Submissions: 26975 Points: 4
Given a string S, find the length of the longest substring without repeating characters.


Example 1:

Input:
S = "geeksforgeeks"
Output:
7
Explanation:
Longest substring is
"eksforg".
Example 2:

Input:
S = "abdefgabef"
Output:
6
Explanation:
Longest substring are
"abdefg" , "bdefga" and "defgab".


Your Task:
You don't need to take input or print anything. Your task is to complete the function longestUniqueSubsttr() which takes a string S as and returns the length of the longest substring.



Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(K) where K is constant.


Constraints:
1 ≤ |S| ≤ 105
It is guaranteed that all characters of the String S will be lowercase letters from 'a' to 'z'
View Bookmarked Problems
Company Tags
 Amazon Morgan Stanley Synopsys Microsoft Google

*/




int longestUniqueSubsttr(string s) {
	//code

	vector<int> v(256, -1);

	int i = 0 , left = 0, mlen = INT_MIN;

	while (i < s.length()) {

		if (v[s[i]] != -1) left = max(left, v[s[i]] + 1);

		v[s[i]] = i ;

		mlen = max(mlen, i - left + 1);

		i++;

	}

	return mlen;



}











