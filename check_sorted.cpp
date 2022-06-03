// check if the given array is sorted, using single traversal 

#include<iostream>
using namespace std;

bool checkSorted(int [], int);

int main()
{
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << boolalpha  << checkSorted(arr, n);
	return 0;
}


// efficient approach using single traversal 
bool checkSorted(int arr[], int n)
{
	for(int i = 0; i < n-1; i++)
		if(arr[i] > arr[i+1])
			return false;
	return true;
}