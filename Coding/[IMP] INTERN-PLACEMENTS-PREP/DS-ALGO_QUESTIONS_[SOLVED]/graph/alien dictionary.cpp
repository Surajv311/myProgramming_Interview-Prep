/*
///////////////////////////////////////////
//Question/Info

Alien Dictionary
Hard Accuracy: 48.62% Submissions: 22056 Points: 8
Given a sorted dictionary of an alien language having N words and k starting alphabets of standard dictionary. Find the order of characters in the alien language.
Note: Many orders may be possible for a particular test case, thus you may return any valid order and output will be 1 if the order of string returned by the function is correct else 0 denoting incorrect string returned.


Example 1:

Input:
N = 5, K = 4
dict = {"baa","abcd","abca","cab","cad"}
Output:
1
Explanation:
Here order of characters is
'b', 'd', 'a', 'c' Note that words are sorted
and in the given language "baa" comes before
"abcd", therefore 'b' is before 'a' in output.
Similarly we can find other orders.
Example 2:

Input:
N = 3, K = 3
dict = {"caa","aaa","aab"}
Output:
1
Explanation:
Here order of characters is
'c', 'a', 'b' Note that words are sorted
and in the given language "caa" comes before
"aaa", therefore 'c' is before 'a' in output.
Similarly we can find other orders.


Your Task:
You don't need to read or print anything. Your task is to complete the function findOrder() which takes  the string array dict[], its size N and the integer K as input parameter and returns a string denoting the order of characters in the alien language.


Expected Time Complexity: O(N + K)
Expected Space Compelxity: O(K)


Constraints:
1 ≤ N, M ≤ 300
1 ≤ K ≤ 26
1 ≤ Length of words ≤ 50

Company Tags
 Amazon Google Microsoft OYO Rooms Walmart

author: srj_v
///////////////////////////////////////////
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

	class Solution {
	public:

		void topo(vector<int> &vis, vector<int> adj[], int src, stack<int> &st) {

			vis[src] = 1 ;

			for (auto x : adj[src])
			{
				if (!vis[x]) topo(vis, adj, x, st);
			}

			st.push(src);

		}

		string findOrder(string dict[], int N, int K) {
			//code here

			vector<int> adj[K];

			for (int i = 0 ; i < N - 1 ; i++) {

				string a = dict[i];
				string b = dict[i + 1];


				for (int j = 0 ; j < min(a.length(), b.length()); j++ )
				{
					if (a[j] != b[j]) {
						int u = a[j] - 'a';
						int v = b[j] - 'a';
						adj[u].push_back(v);

						break;
					}
				}

			}

			vector<int> vis(K, 0); stack<int> st;

			for (int i = 0 ; i < K ; i++)
			{
				if (!vis[i])  topo(vis, adj, i, st);
			}

			string ans = "";

			while (!st.empty()) {
				int node = st.top();
				st.pop();

				ans += node + 'a';

			}

			return ans;
		}
	};

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

