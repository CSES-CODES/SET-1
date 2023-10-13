//You are given an array of  n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.On each move, you may increase the value of any element by one. What is the minimum number of moves required?
 
#include <iostream>
using namespace std;
 
int main()
{
	long long n;
	cin >> n;
	long long arr[n];
	for (long long i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	long long int count = 0;
	for (long long i = 0; i < n - 1; i++)
	{
		if (arr[i] > arr[i + 1]){
			count += arr[i] - arr[i + 1];
		arr[i+1]=arr[i];// updating is key coz value change when updating and operations do changes 
		}
	}
 
	cout << count;
 
	return 0;
}