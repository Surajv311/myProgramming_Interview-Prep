/*
//////////////////////////////////////////////////////
//Question/Info

Weighted Job Scheduling
Difficulty Level : Medium
Last Updated : 16 Dec, 2020
Given N jobs where every job is represented by following three elements of it.

Start Time
Finish Time
Profit or Value Associated (>= 0)
Find the maximum profit subset of jobs such that no two jobs in the subset overlap.

Example:

Input: Number of Jobs n = 4
       Job Details {Start Time, Finish Time, Profit}
       Job 1:  {1, 2, 50}
       Job 2:  {3, 5, 20}
       Job 3:  {6, 19, 100}
       Job 4:  {2, 100, 200}
Output: The maximum profit is 250.
We can get the maximum profit by scheduling jobs 1 and 4.
Note that there is longer schedules possible Jobs 1, 2 and 3
but the profit with this schedule is 20+50+100 which is less than 250.

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

// recursive

	struct Job
	{
		int start, finish, profit;
	};

	bool jobComparataor(Job s1, Job s2)
	{
		return (s1.finish < s2.finish);
	}

// Find the latest job (in sorted array) that doesn't
// conflict with the job[i]. If there is no compatible job,
// then it returns -1.
	int latestNonConflict(Job arr[], int i)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (arr[j].finish <= arr[i - 1].start)
				return j;
		}
		return -1;
	}

// A recursive function that returns the maximum possible
// profit from given array of jobs.  The array of jobs must
// be sorted according to finish time.
	int findMaxProfitRec(Job arr[], int n)
	{
		// Base case
		if (n == 1) return arr[n - 1].profit;

		// Find profit when current job is included
		int inclProf = arr[n - 1].profit;
		int i = latestNonConflict(arr, n);
		if (i != -1)
			inclProf += findMaxProfitRec(arr, i + 1);

		// Find profit when current job is excluded
		int exclProf = findMaxProfitRec(arr, n - 1);

		return max(inclProf,  exclProf);
	}

	/* ABOVE IS RECURSIVE... */

	/*

	//USING DP :

	 int findMaxProfit(Job arr[], int n)
	{
	    sort(arr, arr+n, jobComparataor);

	    int *table = new int[n];
	    table[0] = arr[0].profit;

	    for (int i=1; i<n; i++)
	    {
	        // Find profit including the current job
	        int inclProf = arr[i].profit;
	        int l = latestNonConflict(arr, i);
	        if (l != -1)
	            inclProf += table[l];

	        // Store maximum of including and excluding
	        table[i] = max(inclProf, table[i-1]);
	    }

	    int result = table[n-1];
	    delete[] table;

	    return result;
	}

	 */


	int findMaxProfit(Job arr[], int n)
	{
		sort(arr, arr + n, jobComparataor);

		return findMaxProfitRec(arr, n);
	}

// Driver program
	int main()
	{
		Job arr[] = {{3, 10, 20}, {1, 2, 50}, {6, 19, 100}, {2, 100, 200}};
		int n = sizeof(arr) / sizeof(arr[0]);
		cout << "The optimal profit is " << findMaxProfit(arr, n);
		return 0;
	}



	/*

	//to optimise further to o(nlogn) we could use binary search

	int binarySearch(Job jobs[], int index)
	{
	    int lo = 0, hi = index - 1;

	    while (lo <= hi)
	    {
	        int mid = (lo + hi) / 2;
	        if (jobs[mid].finish <= jobs[index].start)
	        {
	            if (jobs[mid + 1].finish <= jobs[index].start)
	                lo = mid + 1;
	            else
	                return mid;
	        }
	        else
	            hi = mid - 1;
	    }

	    return -1;
	}

	int findMaxProfit(Job arr[], int n)
	{
	    sort(arr, arr+n, myfunction);

	     int *table = new int[n];
	    table[0] = arr[0].profit;

	    for (int i=1; i<n; i++)
	    {
	        // Find profit including the current job
	        int inclProf = arr[i].profit;
	        int l = binarySearch(arr, i);
	        if (l != -1)
	            inclProf += table[l];

	        table[i] = max(inclProf, table[i-1]);
	    }

	    int result = table[n-1];
	    delete[] table;

	    return result;
	}

	*/


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////