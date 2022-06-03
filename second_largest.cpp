// find the second largest element in an array in one traversal 

#include<iostream>
using namespace std;

int secondLargest(int arr[], int n);

int main()
{
	int arr[] = {5,7,82,18,92};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << secondLargest(arr, n);
	return 0;
}


// efficient approach, using single traversal 
int secondLargest(int arr[], int n)
{
	int res = -1, largest = 0;
	for(int i = 1; i < n; i++)
	{
		if(arr[i] > arr[largest])
		{
			res = largest;
			largest = i;
		}
		else if(arr[i] < arr[largest])
		{
			if(res == -1 || arr[i] > arr[res])
			{
				res = i;
			}
		}
	}
	return arr[res];
}