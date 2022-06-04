// Maximum consecutive ones in a boolean array 
// O(n) time 

#include<iostream>
using namespace std;

int maxOnes(int [], int);
int maxOnesShorter(int [], int);


int main()
{
	int arr[] = {0,0,1,1,0,1,1,1,0,1,0,1,1,1,1,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << maxOnes(arr, n);
	cout << "\n" << maxOnesShorter(arr, n);
	return 0;
}

// efficient approach, O(n) time 
int maxOnes(int arr[], int n)
{
	int res = 0, i = 0;
	int count = 0;
	while(i < n)
	{
		count = 0;
		while(i < n && arr[i] == 1)
		{
			count += 1;
			i++;
		}
		res = max(res, count);
		i++;
	}
	res = max(res, count);
	return res;
}

// Shorter code 
int maxOnesShorter(int arr[], int n)
{
	int res = 0, count = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == 0)
			count = 0;
		else
		{
			count++;
			res = max(res, count);
		}
	}
	return res;
}