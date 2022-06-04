/* 
	Trapping Rain water problem 
	-> precompute the lmax and rmax
	-> take the min of lmax and rmax 
	-> answer += min(lmax, rmax) - arr[i]
*/

#include<iostream>
using namespace std;

int trappingWater(int [], int);

int main()
{
	int arr[] = {3, 0, 2, 0, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << trappingWater(arr, n);
	return 0;
}


// Efficient approach, O(n) time 
int trappingWater(int arr[], int n)
{
	int answer = 0;
	int lmax[n], rmax[n];
	
	lmax[0] = arr[0];
	for(int i = 1; i < n; i++)
		lmax[i] = max(lmax[i-1], arr[i]);
	
	rmax[n-1] = arr[n-1];
	for(int i = n-2; i >= 0; i--)
		rmax[i] = max(rmax[i+1], arr[i]);
	
	for(int i = 1; i < n-1; i++)
		answer += min(lmax[i], rmax[i]) - arr[i];
	
	return answer;
}