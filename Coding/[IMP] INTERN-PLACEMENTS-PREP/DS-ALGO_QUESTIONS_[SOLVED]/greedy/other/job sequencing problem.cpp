/*
//////////////////////////////////////////////////////
//Question/Info

Job Sequencing Problem
Medium Accuracy: 48.94% Submissions: 31016 Points: 4
Given a set of N jobs where each jobi has a deadline and profit associated with it. Each job takes 1 unit of time to complete and only one job can be scheduled at a time. We earn the profit if and only if the job is completed by its deadline. The task is to find the number of jobs done and the maximum profit.

Note: Jobs will be given in the form (Jobid, Deadline, Profit) associated with that Job.


Example 1:

Input:
N = 4
Jobs = {(1,4,20),(2,1,10),(3,1,40),(4,1,30)}
Output:
2 60
Explanation:
Job1 and Job3 can be done with
maximum profit of 60 (20+40).
Example 2:

Input:
N = 5
Jobs = {(1,2,100),(2,1,19),(3,2,27),
        (4,1,25),(5,1,15)}
Output:
2 127
Explanation:
2 jobs can be done with
maximum profit of 127 (100+27).

Your Task :
You don't need to read input or print anything. Your task is to complete the function JobScheduling() which takes an integer N and an array of Jobs(Job id, Deadline, Profit) as input and returns the count of jobs and maximum profit.


Expected Time Complexity: O(NlogN)
Expected Auxilliary Space: O(N)


Constraints:
1 <= N <= 105
1 <= Deadline <= 100
1 <= Profit <= 500

Company Tags
 Accolite Microsoft

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



	/*
	struct Job
	{
	    int id;	 // Job Id
	    int dead; // Deadline of job
	    int profit; // Profit if job is over before or on deadline
	};
	*/

	class Solution
	{
	public:
		//Function to find the maximum profit and the number of jobs done.


		vector<int> JobScheduling(Job arr[], int n)
		{
			// your code here

			int me = 0;
			for (int i = 0 ; i < n ; i++) {
				me = max(me, arr[i].dead);
			}

			vector<int> vis(me, 0);

			sort(arr, arr + n , [](Job & x, Job & y) {
				return x.profit > y.profit;
			}); // sorting based on profit...

			int jobs = 0 ;
			int prof = 0 ;

			for (int i = 0 ; i < n ; i++) {
				for (int j = arr[i].dead - 1 ; j >= 0 ; j--) {
					// iterating through each job 'i' deadline 'j'...

					if (vis[j] == 0) {
						// mark visited in the array...
						vis[j] = 1;
						prof += arr[i].profit;
						jobs++;
						break;
					}
				}
			}

			vector<int> ans;
			ans.push_back(jobs);
			ans.push_back(prof);

			return ans;
		}

	};


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////