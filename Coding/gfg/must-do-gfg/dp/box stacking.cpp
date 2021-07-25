/*
///////////////////////////////////////////
//Question/Info

Box Stacking
Medium Accuracy: 48.37% Submissions: 19366 Points: 4
You are given a set of N types of rectangular 3-D boxes, where the ith box has height h, width w and length l. You task is to create a stack of boxes which is as tall as possible, but you can only stack a box on top of another box if the dimensions of the 2-D base of the lower box are each strictly larger than those of the 2-D base of the higher box. Of course, you can rotate a box so that any side functions as its base.It is also allowable to use multiple instances of the same type of box. You task is to complete the function maxHeight which returns the height of the highest possible stack so formed.


Note:
Base of the lower box should be strictly larger than that of the new box we're going to place. This is in terms of both length and width, not just in terms of area. So, two boxes with same base cannot be placed one over the other.



Example 1:

Input:
n = 4
height[] = {4,1,4,10}
width[] = {6,2,5,12}
length[] = {7,3,6,32}
Output: 60
Explanation: One way of placing the boxes is
as follows in the bottom to top manner:
(Denoting the boxes in (l, w, h) manner)
(12, 32, 10) (10, 12, 32) (6, 7, 4)
(5, 6, 4) (4, 5, 6) (2, 3, 1) (1, 2, 3)
Hence, the total height of this stack is
10 + 32 + 4 + 4 + 6 + 1 + 3 = 60.
No other combination of boxes produces a
height greater than this.
Example 2:

Input:
n = 3
height[] = {1,4,3}
width[] = {2,5,4}
length[] = {3,6,1}
Output: 15


Your Task:
You don't need to read input or print anything. Your task is to complete the function maxHeight() which takes three arrays height[], width[], length[], and N as a number of boxes and returns the highest possible stack height which could be formed.


Expected Time Complexity : O(N*N)
Expected Auxiliary Space: O(N)


Constraints:
1<= N <=100
1<= l,w,h <=100

Company Tags
 Amazon Codenation Microsoft

author: srj_v
///////////////////////////////////////////
*/

#include <bits/stdc++.h>
using namespace std;

// #define int 		   long long int
#define sbit(x) 	   __builtin_popcount(x)
#define pb(x) 		   push_back(x)
#define mp(x,y) 	   make_pair(x,y)
#define eb(x) 		   emplace_back(x)
#define ct(x) 		   cout << x << "\n";
#define ct2(x,y) 	   cout << x << " " << y << "\n";
#define tc(x) 		   cout << x << " ";
#define tc2(x,y) 	   cout << x << " " << y << " ";
#define forn(i,n) 	   for(int i = 0; i < (int)(n); ++i)
#define forx(i,x,n)    for(int i = x; i < (int)(n); ++i)
#define nfor(i,n)      for(int i = n-1; i >= 0; --i)
#define all(v) 		   v.begin(),v.end()
#define fsp(x,y)       fixed << setprecision(y) << x
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
	c_p_c();
///////////
	_IOS
//////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

	class Solution {
	public:
		/*The function takes an array of heights, width and
		length as its 3 arguments where each index i value
		determines the height, width, length of the ith box.
		Here n is the total no of boxes.*/

		class Box {
		public:

			int l;
			int b;
			int h;
		};

		bool comparator(Box A , Box B) {
			return A.l * A.b > B.l * B.b ? true : false;
		}

		/*
		// or using struct

		    struct Box{
		    // since its always public

		    int l;
		    int b;
		    int h;
		};

		bool comparator(struct Box A , struct Box B){
		    return A.l * A.b > B.l * B.b ? true : false;
		}

		*/


		int maxHeight(int height[], int width[], int length[], int n)
		{
			//Your code here

			// we cant compare areas directly, focus on dimensions...

			int size = n * 3;

			Box arr[size];

			int j = 0;

			for (int i = 0; i < n; ++i) {

				// storing all permutations

				arr[j].l = height[i];
				arr[j].b = max (width[i], length[i]);
				arr[j].h = min (width[i], length[i]);
				++j;

				arr[j].l = width[i];
				arr[j].b = max (height[i], length[i]);
				arr[j].h = min (height[i], length[i]);
				++j;

				arr[j].l = length[i];
				arr[j].b = max (width[i], height[i]);
				arr[j].h = min (width[i], height[i]);

				++j;

			}

			// sorting based on area
			sort(arr, arr + size, comparator);


			// now contructing properly and finding height

			// since array sorted, first lets populate height in ans[]
			int ans[size];

			for (int i = 0 ; i < size ; ++i) {

				ans[i] = arr[i].h;
			}


			for (int i = 1 ; i < size ; ++i) {

				for (int j = 0 ; j < i ; ++j) {

					if (arr[i].l > arr[j].l and arr[i].b > arr[j].b and ans[i] < ans[j] + arr[i].h  ) {
						ans[i] = ans[j] + arr[i].h;
					}

				}


			}

			int x = *max_element(ans, ans + size);

			return x;

		}
	};




// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}