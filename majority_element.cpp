/*
	Majority Element
	-> return the element that appears more than n/2 times 
	-> use moores voting algorithm: O(n) time, O(1) space 
	-> use hashmap: O(n) time,  O(n) space
*/


#include<iostream>
using namespace std;

int majorityElement(int [], int);

int main()
{
	int arr[] = {2, 2, 2, 2, 5, 5, 2, 3, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << majorityElement(arr, n);
	return 0;
}


// Efficient, moores voting algorithm 
int majorityElement(int arr[], int n)
{
	
	// step 1: find the contender 
	int res = 0, count = 1;
	for(int i = 1; i < n; i++)
	{
		if(arr[i] == arr[res])
			count++;
		else 
			count--;
		if(count == 0)
		{
			res = i;
			count = 1;
		}
	}
	
	// step 2: check if the contender was indeed majority element 
	count = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[res] == arr[i])
			count++;
	}
	if(count <= n/2)
		return -1;
	return res;
}