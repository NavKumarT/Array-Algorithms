// remove duplicates from a sorted array in linear time 

#include<iostream>
using namespace std;

int removeDuplicates(int [], int);

int main()
{
	int arr[] = {1,1,5,5,8,9,10,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << removeDuplicates(arr, n);
	return 0;
}


// efficient approach, O(n) time
int removeDuplicates(int arr[], int n)
{
	int res = 1;
	for(int i = 1; i < n; i++)
	{
		if(arr[i] != arr[i-1])
		{
			arr[res] = arr[i];
			res++;
		}
	}
	return res;
}