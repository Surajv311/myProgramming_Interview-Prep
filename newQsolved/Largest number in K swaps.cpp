/*


Largest number in K swaps
Medium Accuracy: 46.92% Submissions: 27417 Points: 4
Given a number K and string str of digits denoting a positive integer, build the largest number possible by performing swap operations on the digits of str at most K times.


Example 1:

Input:
K = 4
str = "1234567"
Output:
7654321
Explanation:
Three swaps can make the
input 1234567 to 7654321, swapping 1
with 7, 2 with 6 and finally 3 with 5
Example 2:

Input:
K = 3
str = "3435335"
Output:
5543333
Explanation:
Three swaps can make the input
3435335 to 5543333, swapping 3
with 5, 4 with 5 and finally 3 with 4

Your task:
You don't have to read input or print anything. Your task is to complete the function findMaximumNum() which takes the string and an integer as input and returns a string containing the largest number formed by perfoming the swap operation at most k times.


Expected Time Complexity: O(n!/(n-k)!) , where n = length of input string
Expected Auxiliary Space: O(n)


Constraints:
1 ≤ |str| ≤ 30
1 ≤ K ≤ 10

View Bookmarked Problems
Company Tags
 Amazon MakeMyTrip Walmart Microsoft Google Intuit


*/



void fun(string s, string &ans, int k, int pos) {

	if (k == 0) return ;

	char x = s[pos];

	for (int i = pos + 1 ; i < s.length() ; i++) {
		/*
		since like say 0th pos or then the 1st pos..
		    all would have already been set...
		    with the greatest digits... hence we need not repeat
		    the process.. hence skip the positions...
		    */
		if (x < s[i]) x = s[i];

	}

	if (x != s[pos]) k--;

	for (int i = s.length() - 1; i >= pos; i--) {

		if (s[i] == x) {

			swap(s[i], s[pos]); // swapping s[pos], absically with x... since currently x == s[i]...
			ans = max(ans, s);
			fun(s, ans, k, pos + 1);
			swap(s[i], s[pos]); // backtrack

		}

	}



}

string findMaximumNum(string str, int k)
{
	// code here.

	string ans = "";
	fun(str, ans, k, 0);

	return ans;

}


























