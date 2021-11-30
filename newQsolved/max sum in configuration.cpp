/*


Max sum in the configuration
Medium Accuracy: 49.48% Submissions: 44068 Points: 4
Given an array(0-based indexing), you have to find the max sum of i*A[i] where A[i] is the element at index i in the array. The only operation allowed is to rotate(clock-wise or counter clock-wise) the array any number of times.

Example 1:

Input:
N = 4
A[] = {8,3,1,2}
Output: 29
Explanation: Above the configuration
possible by rotating elements are
3 1 2 8 here sum is 3*0+1*1+2*2+8*3 = 29
1 2 8 3 here sum is 1*0+2*1+8*2+3*3 = 27
2 8 3 1 here sum is 2*0+8*1+3*2+1*3 = 17
8 3 1 2 here sum is 8*0+3*1+1*2+2*3 = 11
Here the max sum is 29
Your Task:
Your task is to complete the function max_sum which takes two arguments which is the array A [ ] and its size and returns an integer value denoting the required max sum.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1<=N<=104
1<=A[]<1000

View Bookmarked Problems
Company Tags
 Amazon

*/


int max_sum(int A[], int N)
{
//Your code here

	int sum = accumulate(A, A + N, 0);
	int p = 0;
	for (int i = 0 ; i < N ; i++) p += (A[i] * i);

	/*
	     use pen/paper & see how it is changing
	    when we add sum & subtract A[i]*n, in every iteration,
	    we get the desired equation
	    A[n-4] + A[n-3] + A[n-2] + A[n-1] + sum (which is basically A1+A2+A3+A4),
	    that would make it ~ A[n-3] + A[n-2] + A[n-1] + A[n] - A*n (which we include..)

	    */

	int temp = INT_MIN;

	for (int i = 0 ; i < N ; i++) {
		p = p + sum - N * (A[N - 1 - i]);
		temp = max(temp, p);
	}

	return temp;

}


