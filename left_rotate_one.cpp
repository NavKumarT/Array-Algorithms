// left rotate an array by 1

#include<iostream>
using namespace std;

void leftRotate(int [], int);
void printArray(int [], int);

int main()
{
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	printArray(arr, n);
	leftRotate(arr, n);
	printArray(arr, n);
	return 0;
}


void printArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

// left rotate by one, store first element and shift the rest
void leftRotate(int arr[], int n)
{
	int temp = arr[0];
	for(int i = 0; i < n-1; i++)
		arr[i] = arr[i+1];
	arr[n-1] = temp;
}