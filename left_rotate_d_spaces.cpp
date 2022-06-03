/* 
	left rotate the array by 'd' spaces 
	i. call rotate by one 'd' times | time: O(nd)
	ii. store the first 'd' elements in a temp array and shift the rest of the elements 
		to the left by one place, copy back the 'd' elements to the end | time: O(n) space: O(d)
	iii. use reversal algorithm | time: O(n) space: O(1)
*/

#include<iostream>
using namespace std;

void reverse(int [], int, int);
void reversalAlgorithm(int [], int, int);
void printArray(int [], int);

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	printArray(arr, n);
	reversalAlgorithm(arr, n, 3);
	printArray(arr, n);
	return 0;
}


void reverse(int arr[], int low, int high)
{
	while(low < high)
	{
		swap(arr[low], arr[high]);
		low++;
		high--;
	}
}


// efficient way of rotating an array
void reversalAlgorithm(int arr[], int n, int d)
{
	reverse(arr, 0, d-1);
	reverse(arr, d, n-1);
	reverse(arr, 0, n-1);
}

void printArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "\n";
}