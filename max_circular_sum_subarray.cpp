// Maximum circular sum subarray 

#include<iostream>
using namespace std;

int maxSubarraySum(int [], int);
int maxCircularSum(int [], int);


int main()
{
	int arr[] = {7,6,5,-11,3,-4,2,-1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << maxCircularSum(arr, n);
	return 0;
}


int maxSubarraySum(int arr[], int n)
{
	int curr = arr[0], res = arr[0];
	for(int i = 1; i < n; i++)
	{
		curr = max(curr + arr[i], arr[i]);
		res = max(res, curr);
	}
	return res;
}


int maxCircularSum(int arr[], int n)
{
	int normalSum = maxSubarraySum(arr, n);
	if(normalSum < 0) return normalSum;
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += arr[i];
		arr[i] = -arr[i];
	}
	int answer = sum + maxSubarraySum(arr, n);
	return answer;
}