#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void solution(int a[], int n, int k)
{
	int left = 0, right = 0, currentSum = 0;
	while (right < n)
	{
		currentSum += a[right];
		if (currentSum == k)
		{
			cout << "The subarray from " << left << " to " << right << endl;
			return;
		}
		while (currentSum >= k)
		{
			currentSum -= a[left];
			left++;
		}
		right++;
	}
	cout << "There is no subarray with total is the given number!" << endl;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 }, k = 3, n = sizeof(arr) / sizeof(int);
	printArray(arr, n);
	solution(arr, n, k);
	return 0;
}