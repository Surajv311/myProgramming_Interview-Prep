#include <bits/stdc++.h>
#include <algorithm>
#include <list>
#include <queue>
#include <stack>
#include <map>
#include <deque>
#include <iterator>
#include <memory>
#include <set>
#include <utility>
#include <vector>
#define int long long int
#define setbits(x) __builtin_popcount(x)
using namespace std;

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main() {
	c_p_c();

	// code
	int inputs;
	cin >> inputs;
	string s;
	while (inputs--)
	{
		cin >> s;
		sort(s.begin(), s.end());
		cout << s << endl;
	}
	return 0;

}