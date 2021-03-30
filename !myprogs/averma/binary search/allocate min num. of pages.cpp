/*
///////////////////////////////////////////
//Question/Info

Allocate minimum number of pages

Given number of pages in n different books and m students.
The books are arranged in ascending order of number of pages.
Every student is assigned to read some consecutive books.
The task is to assign books in such a way that the maximum
number of pages assigned to a student is minimum.

Example :

Input : pages[] = {12, 34, 67, 90}
        m = 2
Output : 113
Explanation:
There are 2 number of students. Books can be distributed
in following fashion :
  1) [12] and [34, 67, 90]
      Max number of pages is allocated to student
      2 with 34 + 67 + 90 = 191 pages
  2) [12, 34] and [67, 90]
      Max number of pages is allocated to student
      2 with 67 + 90 = 157 pages
  3) [12, 34, 67] and [90]
      Max number of pages is allocated to student
      1 with 12 + 34 + 67 = 113 pages

Of the 3 cases, Option 3 has the minimum pages = 113.

The idea is to use Binary Search. We fix a value for
the number of pages as mid of current minimum and maximum.
We initialize minimum and maximum as 0 and sum-of-all-pages
respectively. If a current mid can be a solution, then we
search on the lower half, else we search in higher half.

Now the question arises, how to check if a mid value is
feasible or not? Basically, we need to check if we can assign
pages to all students in a way that the maximum number doesn’t
exceed current value. To do this, we sequentially assign pages
to every student while the current number of assigned pages
doesn’t exceed the value. In this process, if the number of
students becomes more than m, then the solution is not feasible.
Else feasible.


author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

#define int 		   long long int
#define setbits(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout << x << "\n";
#define ct2(x,y) 	   cout << x << " " << y << "\n";
#define forn(i,n) 	   for(int i = 0; i < (int)(n); ++i)
#define forx(i,x,n)    for(int i = x; i < (int)(n); ++i)
#define nfor(i,n)      for(int i = n-1; i >= 0; --i)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed << setprecision(y) << x;
#define PI 			   3.1415926535897932384626433832795
#define MOD 		   1000000007 // (1e9+7)
#define pii 		   pair<int,int>
#define pis 		   pair<int,string>
#define vi  		   vector<int>
#define vii 		   vector<pii>
#define mii 		   map<int,int>
#define p_q            priority_queue // priority_queue<int> (&) priority_queue< int,vi,greater<int> >
#define _IOS      	   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long double ld;

#pragma GCC optimize("Ofast")

void c_p_c()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

bool check(int arr[], int n, int m, int mid)
{
	int stu = 1; // student ...
	int temp = 0;

	// iterate over all books
	for (int i = 0; i < n; i++)
	{
		// check if current number of pages are greater
		// than curr_min that means we will get the result
		// after mid no. of pages
		if (arr[i] > mid) {
			return false;
		}

		// count how many students are required
		// to distribute curr_min pages

		temp += arr[i];

		if (temp > mid)
		{
			// increment student count
			stu++;

			// update curr_sum back to the the index of arr we are in
			// so to find if other student can accomodate the pages in books
			// we start with current index.....
			// since we must note that our allocation of book pages
			// is continuous in the array...
			temp = arr[i];

			//  now we start again incrementing ...
			//  since we must move continuously...

			// if students required becomes greater
			// than given no. of students,return false
			if (stu > m) {
				return false;
			}
		}
	}
	return true;
}

// function to find minimum pages
int bsc(int arr[], int n, int k)
{
	int sum = 0;

	// return -1 if no. of books is less than
	// no. of students
	if (n < k) {
		return -1;
	}

	// Count total number of pages
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	// initialize start as 0 pages and end as
	// total pages
	int s = 0, e = sum;
	int res = INT_MAX;

	// traverse until start <= end
	while (s <= e)
	{
		// check if it is possible to distribute
		// books by using mid as current minimum
		int mid = (s + e) / 2;

		if (check(arr, n, k, mid))
		{
			// if yes then find the minimum distribution
			res = min(res, mid);

			// as we are finding minimum and books
			// are sorted so reduce end = mid -1
			// that means
			e = mid - 1;
		}

		else {
			// if not possible means pages should be
			// increased so update start = mid + 1
			s = mid + 1;
		}
	}

	// at-last return minimum no. of  pages
	return res;
}

int32_t main() {
///////////
	c_p_c();
///////////
	_IOS
//////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	int arr[] = {10, 20, 30, 40};
	int n = sizeof arr / sizeof arr[0];
	int k = 2; //No. of students

	ct(bsc(arr, n, k)) // min. number of pages


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}