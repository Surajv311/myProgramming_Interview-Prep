/*
///////////////////////////////////////////

Sample Input

saveChangesInTheEditor
Sample Output

5
Explanation

String s contains five words:

save
Changes
In
The
Editor
Thus, we print 5 on a new line.

///////////////////////////////////////////
*/

#include <bits/stdc++.h>
#define int long long int
#define setbits(x) __builtin_popcount(x)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ct(x) cout<<x<<endl;
#define ct2(x,y) cout<<x<<" "<<y<<endl;
//typedef long long int lli;
typedef long double ld;

using namespace std;

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}



int32_t camelcase(string s) {

	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (isupper(s[i]))
			count++;
	}
	return count + 1;
}

int32_t main() {

///////////
	c_p_c();
///////////

	// code

	string s ;
	cin >> s ;

	ct(camelcase(s))


	return 0;
}


