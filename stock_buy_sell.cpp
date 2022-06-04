/* Stock buy and sell problem 
   -> buy and sell any number of times 
   -> O(n) time algorithm
*/

#include<iostream>
using namespace std;

int stockProfit(int [], int);

int main()
{
	int arr[] = {100, 180, 260, 310, 40, 535, 695};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Profit: " << stockProfit(arr, n);
	return 0;
}

// buy at every dip and sell as soon as price is higher 
int stockProfit(int arr[], int n)
{
	int profit = 0;
	for(int i = 1; i < n; i++)
	{
		if(arr[i] > arr[i-1])
		{
			profit += arr[i] - arr[i-1];
		}
	}
	return profit;
}