// reverse an array, linear time and no extra space 

#include<iostream>
using namespace std;

void reverseArray(int [], int);
void printArray(int [], int);

int main()
{
	int arr[] = {1,8,6,7,9,2,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	printArray(arr, n);
	reverseArray(arr, n);
	printArray(arr, n);	
	return 0;
}

// efficient approach, reverse an array inplace 
void reverseArray(int arr[], int n)
{
	int low = 0, high = n-1;
	while(low < high)
	{
		swap(arr[low], arr[high]);
		low++;
		high--;
	}
}


void printArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}