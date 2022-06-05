// Maximum length even odd subarray 
// Similiar to finding largest consecutive ones

#include<iostream>
using namespace std;

int maxEvenOdd(int [], int);

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 7, 9};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << maxEvenOdd(arr, n);
	return 0;
}


// Efficient approach
int maxEvenOdd(int arr[], int n)
{
	int res = 1, curr = 1;
	for(int i = 1; i < n; i++)
	{
		if((arr[i]%2 == 0 && arr[i-1]%2 != 0) || (arr[i]%2 != 0 && arr[i-1]%2 == 0))
		{
			curr++;
			res = max(res, curr);
		}
		else
			curr = 1;
	}
	return res;
}