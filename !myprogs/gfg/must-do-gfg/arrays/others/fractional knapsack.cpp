/*
///////////////////////////////////////////
//Question/Info

Fractional Knapsack
Medium Accuracy: 45.14% Submissions: 20310 Points: 4
Given weights and values of N items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
Note: Unlike 0/1 knapsack, you are allowed to break the item.



Example 1:

Input:
N = 3, W = 50
values[] = {60,100,120}
weight[] = {10,20,30}
Output:
240.00
Explanation:Total maximum value of item
we can have is 240.00 from the given
capacity of sack.
Example 2:

Input:
N = 2, W = 50
values[] = {60,100}
weight[] = {10,20}
Output:
160.00
Explanation:
Total maximum value of item
we can have is 160.00 from the given
capacity of sack.


Your Task :
Complete the function fractionalKnapsack() that receives maximum capacity , array of structure/class and size n and returns a double value representing the maximum value in knapsack.
Note: The details of structure/class is defined in the comments above the given function.


Expected Time Complexity : O(NlogN)
Expected Auxilliary Space: O(1)


Constraints:
1 <= N <= 105
1 <= W <= 105

Company Tags
 Microsoft

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
	c_p_c();
///////////
	_IOS
//////////

	// code

	/*
	int t ; cin >> t; while(t--){}
	*/

//class implemented
	/*
	struct Item{
	    int value;
	    int weight;
	};
	*/


	class Solution
	{
	public:


		/*
		 ans......

		// easy to do

		bool compare(Item A, Item B){

		    double a = (double)A.weight/(double)A.value;
		    double b = (double)B.weight/(double)B.value;

		    return a>b;
		}

		//Function to get the maximum total value in the knapsack.
		double fractionalKnapsack(int W, Item arr[], int n)
		{
		    // Your code here

		    // sorting array based on weight/value ratio
		    sort(arr,arr+n,compare);

		    double ans = 0.0;
		    int wt = 0;

		    for(int i = 0 ; i < n ; i++){

		        if(wt + arr[i].weight <=W){
		            wt += arr[i].weight;
		            ans += arr[i].value;
		        }

		     else{
		         // if our weight exceeds

		         int x = W - wt;

		         double val = (double) x * (arr[i].value)/(double) arr[i].weight;

		         ans+=val;

		     }


		    }

		return ans;

		}

		*/


		/*
		striver...

		bool comp(Item a, Item b) {
		double r1 = (double)a.value / (double)a.weight;
		double r2 = (double)b.value / (double)b.weight;
		return r1 > r2;
		}
		// function to return fractionalweights
		double fractionalKnapsack(int W, Item arr[], int n)
		{
		// Your code here

		sort(arr, arr + n, comp);

		int curWeight = 0;
		double finalvalue = 0.0;


		for (int i = 0; i < n; i++) {

		    if (curWeight + arr[i].weight <= W) {
		        curWeight += arr[i].weight;
		        finalvalue += arr[i].value;
		    }


		    else {
		        int remain = W - curWeight;
		        finalvalue += (arr[i].value / (double)arr[i].weight) * (double)remain;
		        break;
		    }
		}

		return finalvalue;

		}


		*/



		typedef pair<int, int> pii; //first - value , second-weight p/q > r/s
		struct comp {
			bool operator() (Item &x, Item &y) {
				return x.value * y.weight > y.value * x.weight;
			}
		};
// function to return fractionalweights
		double fractionalKnapsack(int W, Item arr[], int n) {
			/*multiset<pii,comp> hehe; //descending
			for(int i=0;i<n;i++) hehe.insert({arr[i].value,arr[i].weight});*/
			sort(arr, arr + n, comp());
			double res = 0;
			for (int i = 0; i < n && W; i++)
				if (arr[i].weight > W) // add fractional
					res += ((double)arr[i].value / arr[i].weight) * W, W = 0;
				else //add whole
					res += arr[i].value, W -= arr[i].weight;
			return res;

		}
	};



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}