// Find leaders in a array 
// If an element is larger than the all the elements to the right of it 

#include<iostream>
using namespace std;

int* leaders(int [], int);
void printArray(int [], int);


int main()
{
	int arr[] = {1,4,8,5,2,3,7,6,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	printArray(arr, n);
	int* p = leaders(arr, n);
	printArray(p, n);
	return 0;
}


// efficient approach, O(n) time
int* leaders(int arr[], int n)
{
	int* ans = new int[n];
	ans[n-1] = arr[n-1];
	int largest = arr[n-1];
	for(int i = n-2; i >= 0; i--)
	{
		if(arr[i] > largest)
		{
			largest = arr[i];
			ans[i] = arr[i];
		}
		else
			ans[i] = largest;
	}
	return ans;
}

void printArray(int arr[], int n)
{
	for(int i = 0; i < n ; i++)
		cout << arr[i] << " ";
	cout << "\n";
}