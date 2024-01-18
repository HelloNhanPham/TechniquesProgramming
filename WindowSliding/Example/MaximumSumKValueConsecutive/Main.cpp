#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

int max(int a, int b)
{
	return (a >= b) ? a : b;
}

int MaxSumKConsecutive(int a[], int n, int k)
{
	int currentSum = 0;
	for (int i = 0; i < k; ++i)
		currentSum += a[i];
	int maxSum = currentSum;
	for (int i = k; i < n; ++i)
	{
		currentSum = currentSum + a[i] - a[i - k];
		maxSum = max(currentSum, maxSum);
	}
	return maxSum;
}

int main()
{
	int a[] = { 1, 4, 2, 10, 23, 3, 1, 0, 20 }, k = 4;
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	cout << "Max sum of " << k << " elements consecutive in the array is: " << MaxSumKConsecutive(a, n, k);
	return 0;
}