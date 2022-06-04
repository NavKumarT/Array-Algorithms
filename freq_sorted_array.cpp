// print the frequencies in a sorted array 
// O(n) time Algorithm 


#include<iostream>
using namespace std;

void freqSorted(int [], int);


int main()
{
	int arr[] = {0,1,1,2,2,3,5,6,7,8,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	freqSorted(arr, n);
	return 0;
}


void freqSorted(int arr[], int n)
{
	int freq = 1, i = 1;
	while(i < n)
	{
		while(i < n && arr[i] == arr[i-1])
		{
			freq++;
			i++;
		}
		cout << arr[i-1] << " " << freq << "\n";
		freq = 1;
		i++;
	}
	if(n == 1 || arr[n-1] != arr[n-2])
		cout << arr[n-1] << " " << freq;
}