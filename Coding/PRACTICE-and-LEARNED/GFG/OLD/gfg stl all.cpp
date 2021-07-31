/*
///////////////////////////////////////////



///////////////////////////////////////////
*/

#include <bits/stdc++.h>
#define int long long int
#define setbits(x) __builtin_popcount(x)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ct(x) cout<<x<<endl;
#define ct2(x,y) cout<<x<<" "<<y<<endl;
#define forn(i, n) for (int i = 0; i < (int)(n); i++)
#define forx(i, x, n) for (int i = x ; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

//typedef long long int lli;
typedef long double ld;
//typedef pair<int, int> pii;
//typedef vector<int> vi;
//typedef vector<pii> vii;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

using namespace std;


void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}



void showpq(priority_queue<int> gq)
{
	priority_queue<int> g = gq;
	while (!g.empty()) {
		cout << '\t' << g.top();
		g.pop();
	}
	cout << '\n';
}


int32_t main() {

///////////
	c_p_c();
///////////

	// code



	//function for printing the elements in a list
	void showlist(list <int> g)
	{
		list <int> :: iterator it;
		for (it = g.begin(); it != g.end(); ++it)
			cout << '\t' << *it;
		cout << '\n';
	}

	int main()
	{

		list <int> gqlist1, gqlist2;


		for (int i = 0; i < 10; ++i)
		{
			gqlist1.push_back(i * 2);
			gqlist2.push_front(i * 3);
		}
		cout << "\nList 1 (gqlist1) is : ";
		showlist(gqlist1);

		cout << "\nList 2 (gqlist2) is : ";
		showlist(gqlist2);

		cout << "\ngqlist1.front() : " << gqlist1.front();
		cout << "\ngqlist1.back() : " << gqlist1.back();

		cout << "\ngqlist1.pop_front() : ";
		gqlist1.pop_front();
		showlist(gqlist1);

		cout << "\ngqlist2.pop_back() : ";
		gqlist2.pop_back();
		showlist(gqlist2);

		cout << "\ngqlist1.reverse() : ";
		gqlist1.reverse();
		showlist(gqlist1);

		cout << "\ngqlist2.sort(): ";
		gqlist2.sort();
		showlist(gqlist2);

		return 0;

	}


	void showdq(deque <int> g)
	{
		deque <int> :: iterator it;
		for (it = g.begin(); it != g.end(); ++it)
			cout << '\t' << *it;
		cout << '\n';
	}

	int main()
	{
		deque <int> gquiz;
		gquiz.push_back(10);
		gquiz.push_front(20);
		gquiz.push_back(30);
		gquiz.push_front(15);
		cout << "The deque gquiz is : ";
		showdq(gquiz);

		cout << "\ngquiz.size() : " << gquiz.size();
		cout << "\ngquiz.max_size() : " << gquiz.max_size();

		cout << "\ngquiz.at(2) : " << gquiz.at(2);
		cout << "\ngquiz.front() : " << gquiz.front();
		cout << "\ngquiz.back() : " << gquiz.back();

		cout << "\ngquiz.pop_front() : ";
		gquiz.pop_front();
		showdq(gquiz);

		cout << "\ngquiz.pop_back() : ";
		gquiz.pop_back();
		showdq(gquiz);

		return 0;
	}

// Print the queue
	void showq(queue<int> gq)
	{
		queue<int> g = gq;
		while (!g.empty()) {
			cout << '\t' << g.front();
			g.pop();
		}
		cout << '\n';
	}

// Driver Code
	int main()
	{
		queue<int> gquiz;
		gquiz.push(10);
		gquiz.push(20);
		gquiz.push(30);

		cout << "The queue gquiz is : ";
		showq(gquiz);

		cout << "\ngquiz.size() : " << gquiz.size();
		cout << "\ngquiz.front() : " << gquiz.front();
		cout << "\ngquiz.back() : " << gquiz.back();

		cout << "\ngquiz.pop() : ";
		gquiz.pop();
		showq(gquiz);

		// We can also use front and back as
		// iterators to traverse through the queue
		cout << "Using iterators : ";
		for (auto i = gquiz.front(); i != gquiz.back(); i++) {
			cout << i << " ";
		}
		return 0;
	}


	void showpq(priority_queue<int> gq)
	{
		priority_queue<int> g = gq;
		while (!g.empty()) {
			cout << '\t' << g.top();
			g.pop();
		}
		cout << '\n';
	}

	int main()
	{
		priority_queue<int> gquiz;
		gquiz.push(10);
		gquiz.push(30);
		gquiz.push(20);
		gquiz.push(5);
		gquiz.push(1);

		cout << "The priority queue gquiz is : ";
		showpq(gquiz);

		cout << "\ngquiz.size() : " << gquiz.size();
		cout << "\ngquiz.top() : " << gquiz.top();

		cout << "\ngquiz.pop() : ";
		gquiz.pop();
		showpq(gquiz);

		return 0;
	}

// empty set container
	set<int, greater<int> > s1;

	// insert elements in random order
	s1.insert(40);
	s1.insert(30);
	s1.insert(60);
	s1.insert(20);
	s1.insert(50);

	// only one 50 will be added to the set
	s1.insert(50);
	s1.insert(10);

	// printing set s1
	set<int, greater<int> >::iterator itr;
	cout << "\nThe set s1 is : \n";
	for (itr = s1.begin();
	        itr != s1.end(); ++itr)
	{
		cout << ',' << *itr;
	}
	cout << endl;

	// assigning the elements from s1 to s2
	set<int> s2(s1.begin(), s1.end());

	// print all elements of the set s2
	cout << "\nThe set s2 after assign from s1 is : \n";
	for (itr = s2.begin();
	        itr != s2.end(); ++itr)
	{
		cout << ',' << *itr;
	}
	cout << endl;

	// remove all elements up to 30 in s2
	cout
	        << "\ns2 after removal of elements less than 30 :\n";
	s2.erase(s2.begin(), s2.find(30));
	for (itr = s2.begin();
	        itr != s2.end(); ++itr) {
		cout << ',' << *itr;
	}

	// remove element with value 50 in s2
	int num;
	num = s2.erase(50);
	cout << "\ns2.erase(50) : ";
	cout << num << " removed\n";
	for (itr = s2.begin();
	        itr != s2.end(); ++itr)
	{
		cout << ',' << *itr;
	}

	cout << endl;

	// lower bound and upper bound for set s1
	cout << "s1.lower_bound(40) : \n"
	     << *s1.lower_bound(40)
	     << endl;
	cout << "s1.upper_bound(40) : \n"
	     << *s1.upper_bound(40)
	     << endl;

	// lower bound and upper bound for set s2
	cout << "s2.lower_bound(40) :\n"
	     << *s2.lower_bound(40)
	     << endl;
	cout << "s2.upper_bound(40) : \n"
	     << *s2.upper_bound(40)
	     << endl;

	return 0;
}




int main()
{
	// declaring set for storing string data-type
	unordered_set <string> stringSet ;

	// inserting various string, same string will be stored
	// once in set

	stringSet.insert("code") ;
	stringSet.insert("in") ;
	stringSet.insert("c++") ;
	stringSet.insert("is") ;
	stringSet.insert("fast") ;

	string key = "slow" ;

	//  find returns end iterator if key is not found,
	//  else it returns iterator to that key

	if (stringSet.find(key) == stringSet.end())
		cout << key << " not found" << endl << endl ;
	else
		cout << "Found " << key << endl << endl ;

	key = "c++";
	if (stringSet.find(key) == stringSet.end())
		cout << key << " not found\n" ;
	else
		cout << "Found " << key << endl ;

	// now iterating over whole set and printing its
	// content
	cout << "\nAll elements : ";
	unordered_set<string> :: iterator itr;
	for (itr = stringSet.begin(); itr != stringSet.end(); itr++)
		cout << (*itr) << endl;
}



int main()
{
	// empty multiset container
	multiset <int, greater <int> > gquiz1;

	// insert elements in random order
	gquiz1.insert(40);
	gquiz1.insert(30);
	gquiz1.insert(60);
	gquiz1.insert(20);
	gquiz1.insert(50);

	// 50 will be added again to
	// the multiset unlike set
	gquiz1.insert(50);
	gquiz1.insert(10);

	// printing multiset gquiz1
	multiset <int, greater <int> > :: iterator itr;
	cout << "\nThe multiset gquiz1 is : \n";
	for (itr = gquiz1.begin(); itr
	        != gquiz1.end(); ++itr)
	{
		cout << *itr << " ";
	}
	cout << endl;

	// assigning the elements from gquiz1 to gquiz2
	multiset <int> gquiz2(gquiz1.begin()
	                      , gquiz1.end());

	// print all elements of the multiset gquiz2
	cout << "\nThe multiset gquiz2 \n"
	     "after assign from gquiz1 is : \n";
	for (itr = gquiz2.begin(); itr
	        != gquiz2.end(); ++itr)
	{
		cout << *itr << " ";
	}
	cout << endl;

	// remove all elements up to element
	// with value 30 in gquiz2
	cout << "\ngquiz2 after removal \n"
	     "of elements less than 30 : \n";
	gquiz2.erase(gquiz2.begin()
	             , gquiz2.find(30));
	for (itr = gquiz2.begin(); itr
	        != gquiz2.end(); ++itr)
	{
		cout << *itr << " " ;
	}

	// remove all elements with value 50 in gquiz2
	int num;
	num = gquiz2.erase(50);
	cout << "\ngquiz2.erase(50) : \n";
	cout << num << " removed \n" ;
	for (itr = gquiz2.begin(); itr
	        != gquiz2.end(); ++itr)
	{
		cout  << *itr << " ";
	}

	cout << endl;

	//lower bound and upper bound for multiset gquiz1
	cout << "\ngquiz1.lower_bound(40) : \n"
	     << *gquiz1.lower_bound(40) << endl;
	cout << "gquiz1.upper_bound(40) : \n"
	     << *gquiz1.upper_bound(40) << endl;

	//lower bound and upper bound for multiset gquiz2
	cout << "gquiz2.lower_bound(40) : \n"
	     << *gquiz2.lower_bound(40) << endl;
	cout << "gquiz2.upper_bound(40) : \n"
	     << *gquiz2.upper_bound(40) << endl;

	return 0;

}





int main()
{

	// empty map container
	map<int, int> gquiz1;

	// insert elements in random order
	gquiz1.insert(pair<int, int>(1, 40));
	gquiz1.insert(pair<int, int>(2, 30));
	gquiz1.insert(pair<int, int>(3, 60));
	gquiz1.insert(pair<int, int>(4, 20));
	gquiz1.insert(pair<int, int>(5, 50));
	gquiz1.insert(pair<int, int>(6, 50));
	gquiz1.insert(pair<int, int>(7, 10));

	// printing map gquiz1
	map<int, int>::iterator itr;
	cout << "\nThe map gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
		cout << '\t' << itr->first
		     << '\t' << itr->second << '\n';
	}
	cout << endl;

	// assigning the elements from gquiz1 to gquiz2
	map<int, int> gquiz2(gquiz1.begin(), gquiz1.end());

	// print all elements of the map gquiz2
	cout << "\nThe map gquiz2 after"
	     << " assign from gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first
		     << '\t' << itr->second << '\n';
	}
	cout << endl;

	// remove all elements up to
	// element with key=3 in gquiz2
	cout << "\ngquiz2 after removal of"
	     " elements less than key=3 : \n";
	cout << "\tKEY\tELEMENT\n";
	gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first
		     << '\t' << itr->second << '\n';
	}

	// remove all elements with key = 4
	int num;
	num = gquiz2.erase(4);
	cout << "\ngquiz2.erase(4) : ";
	cout << num << " removed \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first
		     << '\t' << itr->second << '\n';
	}

	cout << endl;

	// lower bound and upper bound for map gquiz1 key = 5
	cout << "gquiz1.lower_bound(5) : "
	     << "\tKEY = ";
	cout << gquiz1.lower_bound(5)->first << '\t';
	cout << "\tELEMENT = "
	     << gquiz1.lower_bound(5)->second << endl;
	cout << "gquiz1.upper_bound(5) : "
	     << "\tKEY = ";
	cout << gquiz1.upper_bound(5)->first << '\t';
	cout << "\tELEMENT = "
	     << gquiz1.upper_bound(5)->second << endl;

	return 0;
}





return 0;
}