/*


Reverse each word in a given string
Medium Accuracy: 59.38% Submissions: 8396 Points: 4
Given a String. Reverse each word in it where the words are separated by dots.

Example 1:

Input:
S = "i.like.this.program.very.much"
Output: i.ekil.siht.margorp.yrev.hcum
Explanation: The words "i", "like",
"this", "program", "very", "much"
are all reversed.
â€‹Example 2:

Input:
S = "pqr.mno"
Output: rqp.onm
Explanation: Both "pqr" and "mno" are
reversed.

Your Task:
You don't need to read input or print anything. Your task is to complete the function reverseWords() which takes the string S as input and returns the resultant string by reversing all the words separated by dots.


Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(|S|).


Constraints:
1<=|S|<=105



View Bookmarked Problems
Company Tags
 Adobe Amazon Flipkart MAQ Software Microsoft Paytm Payu Zoho


*/




string reverseWords (string s)
{
	//code here.

	stack<char> st;

	string temp = "";
	string ans = "";
	int i = 0 ;

	while (i < s.length()) {

		if (s[i] == '.') {
			// reverse(temp.begin(),temp.end());

			while (!st.empty()) {
				temp += st.top(); st.pop();

			}
			ans += temp + '.';
			temp = "";
		}

		else {
			st.push(s[i]);
		}
		i++;
	}

	// running loop again to empty stack & input the last reverse word...
	// ****************************************** IMPORTANT...STEP...
	while (!st.empty()) {
		ans += st.top(); st.pop();

	}


	return ans;

}


























