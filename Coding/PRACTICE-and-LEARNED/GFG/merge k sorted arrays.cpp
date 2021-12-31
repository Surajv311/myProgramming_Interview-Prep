/*

Merge k Sorted Arrays
Medium Accuracy: 51.19% Submissions: 42191 Points: 4
Given K sorted arrays arranged in the form of a matrix of size K*K. The task is to merge them into one sorted array.
Example 1:

Input:
K = 3
arr[][] = {{1,2,3},{4,5,6},{7,8,9}}
Output: 1 2 3 4 5 6 7 8 9
Explanation:Above test case has 3 sorted
arrays of size 3, 3, 3
arr[][] = [[1, 2, 3],[4, 5, 6],
[7, 8, 9]]
The merged list will be
[1, 2, 3, 4, 5, 6, 7, 8, 9].
Example 2:

Input:
K = 4
arr[][]={{1,2,3,4}{2,2,3,4},
         {5,5,6,6},{7,8,9,9}}
Output:
1 2 2 2 3 3 4 4 5 5 6 6 7 8 9 9
Explanation: Above test case has 4 sorted
arrays of size 4, 4, 4, 4
arr[][] = [[1, 2, 2, 2], [3, 3, 4, 4],
[5, 5, 6, 6]  [7, 8, 9, 9 ]]
The merged list will be
[1, 2, 2, 2, 3, 3, 4, 4, 5, 5,
6, 6, 7, 8, 9, 9 ].
Your Task:
You do not need to read input or print anything. Your task is to complete mergeKArrays() function which takes 2 arguments, an arr[K][K] 2D Matrix containing K sorted arrays and an integer K denoting the number of sorted arrays, as input and returns the merged sorted array ( as a pointer to the merged sorted arrays in cpp, as an ArrayList in java, and list in python)

Expected Time Complexity: O(K2*Log(K))
Expected Auxiliary Space: O(K)

Constraints:
1 <= K <= 100

View Bookmarked Problems
Company Tags
 Amazon Citrix Flipkart Microsoft VMWare

*/



vector<int> mergeKArrays(vector<vector<int>> arr, int K)
{
	//code here

	vector<int> v;//(K*K);

	for (int i = 0 ; i < K; i++) {
		for (int j = 0 ; j < K; j++) {
			v.push_back(arr[i][j]);
		}
	}

	sort(v.begin(), v.end());

	return v;

}





