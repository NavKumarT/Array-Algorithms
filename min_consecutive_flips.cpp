/* Minimum consecutive flips to make the boolean array either all 1s or 0s 
	-> Always the difference between the number of groups of 0s amd 1s is one 
	-> Flipping the second group gives the minimum flips 
*/

#include<iostream>
using namespace std;

void minFlips(int [], int);

int main()
{
	int arr[] = {1, 1, 0, 0, 0, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	minFlips(arr, n);
	return 0;
}


// Efficient approach
void minFlips(int arr[], int n)
{
	for(int i = 1; i < n; i++)
	{
		if(arr[i] != arr[i-1])
		{
			if(arr[i] != arr[0])
				cout << "from " << i << " to";
			else
				cout << i-1;
		}
	}
	if(n == 1 || (arr[n-1] != arr[0])
		cout << n-1;
}