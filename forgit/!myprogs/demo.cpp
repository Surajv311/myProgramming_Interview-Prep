#include <bits/stdc++.h>
#include <algorithm>
#include <list>
using namespace std;


int main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

// list is doubly linked list

	list<int>l{1, 2, 6, 3};

	for (auto x : l) {
		cout << x << "->";
	}

}