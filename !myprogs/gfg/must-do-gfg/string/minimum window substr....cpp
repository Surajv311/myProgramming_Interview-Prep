/*
//////////////////////////////////////////////////////
//Question/Info

Smallest window in a string containing all the characters of another string

Medium - GFG
HARD - LEETCODE...

Accuracy: 42.59% Submissions: 28295 Points: 4
Given two strings S and P. Find the smallest window in the string S consisting of all the characters(including duplicates) of the string P.  Return "-1" in case there is no such window present.

Example 1:

Input:
S = "timetopractice"
P = "toc"
Output:
toprac
Explanation: "toprac" is the smallest
substring in which "toc" can be found.
Example 2:

Input:
S = "zoomlazapzo"
P = "oza"
Output:
apzo
Explanation: "apzo" is the smallest
substring in which "oza" can be found.
Your Task:
You don't need to read input or print anything. Your task is to complete the function smallestWindow() which takes two string S and P as input paramters and returns the smallest window in string S having all the characters of the string P. In case there are multiple such windows of same length, return the one with the least starting index.

Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ |S|, |P| ≤ 105

Company Tags
 Amazon Google MakeMyTrip Streamoid Technologies Microsoft Media.net

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


	string smallestWindow (string s, string p)
	{
		// Your code here
		vector<int> hsh(256, 0);
		int words = 0;

		for (int i = 0; i < p.length(); i++)
		{
			if (hsh[p[i]] == 0) words++;
			// hence for repeated chars, our words won't ++ ...

			hsh[p[i]]++;
		}

		int end = INT_MAX;
		int start = 0;

		int i = 0, j = 0;

		while (j < s.length())
		{
			hsh[s[j]]--;

			if (hsh[s[j]] == 0) words--;

			if (words == 0)
			{
				while (words == 0)
				{
					if (end > j - i + 1)
					{
						end = min(end, j - i + 1);

						start = i;
					}

					hsh[s[i]]++;

					if (hsh[s[i]] > 0) words++;

					i++;
				}
			}

			j++;
		}


		if (end == INT_MAX) return "-1";

		return (s.substr(start, end));


		/*

		leetcode discuss...

		By: zjh08177
		The code of solving this problem is below. It might be the shortest among all solutions provided in Discuss.

		string minWindow(string s, string t) {
		vector<int> map(128,0);
		for(auto c: t) map[c]++;
		int counter=t.size(), begin=0, end=0, d=INT_MAX, head=0;
		while(end<s.size()){
		    if(map[s[end++]]-->0) counter--; //in t
		    while(counter==0){ //valid
		        if(end-begin<d)  d=end-(head=begin);
		        if(map[s[begin++]]++==0) counter++;  //make it invalid
		    }
		}
		return d==INT_MAX? "":s.substr(head, d);
		}
		Here comes the template.

		For most substring problem, we are given a string and need to find a substring of it which satisfy some restrictions. A general way is to use a hashmap assisted with two pointers. The template is given below.

		int findSubstring(string s){
		vector<int> map(128,0);
		int counter; // check whether the substring is valid
		int begin=0, end=0; //two pointers, one point to tail and one  head
		int d; //the length of substring

		for() { // initialize the hash map here  }

		while(end<s.size()){

		    if(map[s[end++]]-- ?){  // modify counter here // }

		    while(/// counter condition /){

		         // update d here if finding minimum//

		        //increase begin to make it invalid/valid again

		        if(map[s[begin++]]++ ?){ //modify counter here// }
		    }

		    //update d here if finding maximum//
		}
		return d;
		}
		One thing needs to be mentioned is that when asked to find maximum substring, we should update maximum after the inner while loop to guarantee that the substring is valid. On the other hand, when asked to find minimum substring, we should update minimum inside the inner while loop.

		The code of solving Longest Substring with At Most Two Distinct Characters is below:

		int lengthOfLongestSubstringTwoDistinct(string s) {
		vector<int> map(128, 0);
		int counter=0, begin=0, end=0, d=0;
		while(end<s.size()){
		    if(map[s[end++]]++==0) counter++;
		    while(counter>2) if(map[s[begin++]]--==1) counter--;
		    d=max(d, end-begin);
		}
		return d;
		}
		The code of solving Longest Substring Without Repeating Characters is below:

		Update 01.04.2016, thanks @weiyi3 for advise.

		int lengthOfLongestSubstring(string s) {
		vector<int> map(128,0);
		int counter=0, begin=0, end=0, d=0;
		while(end<s.size()){
		    if(map[s[end++]]++>0) counter++;
		    while(counter>0) if(map[s[begin++]]-->1) counter--;
		    d=max(d, end-begin); //while valid, update d
		}
		return d;
		}

		*/
	}



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////