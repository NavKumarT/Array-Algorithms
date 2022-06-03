// move zeroes to the end of an array in O(n) time 

#include<iostream>
using namespace std;

void printArray(int [], int);
void moveZeroes(int [], int);

int main()
{
	int arr[] = {1,0,2,4,0,0,0,5,2,0,4,2,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	printArray(arr, n);
	moveZeroes(arr, n);
	printArray(arr, n);
	return 0;
}

void printArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

// move the non zero elements to the start, instead of moving the zeroes to the end
// we might not know if the last element is not 0
// efficient approach 
void moveZeroes(int arr[], int n)
{
	int count  = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] != 0)
		{
			swap(arr[i], arr[count]);
			count++;
		}
	}
}