// maximum difference problem with order
// max value of arr[j] - arr[i] such that j > i
// Find the solution using linear time complexity 

#include<iostream>
using namespace std;

int maxDifference(int [], int);

int main()
{
	int arr[] = {3,5,2,4,5,6,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << maxDifference(arr, n);
	return 0;
}


// efficient approach, O(n) time
int maxDifference(int arr[], int n)
{
	int minValue = arr[0];
	int answer = arr[1] - arr[0];
	for(int i = 1; i < n; i++)
	{
		answer = max(answer, arr[i] - minValue);
		minValue = min(minValue, arr[i]);
	}
	return answer;
}