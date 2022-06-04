// maximum subsarray sum (Kadanes Algorithm) 

#include<iostream>
using namespace std;

int maxSubarraySum(int [], int);

int main()
{
	int arr[] = {-2,-3,4,-1,-2,1,5,-3};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << maxSubarraySum(arr, n);
	return 0;
}


// Kadanes algorithm, O(n) time 
int maxSubarraySum(int arr[], int n)
{
	int res = arr[0];
	int curr = arr[0];
	for(int i = 1; i < n; i++)
	{
		curr = max(curr + arr[i], arr[i]);
		res = max(res, curr);
	}
	return res;
}