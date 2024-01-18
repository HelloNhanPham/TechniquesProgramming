#include <iostream>
#include <math.h>
using namespace std;

void closetPair(int a[], int b[], int n, int x)
{
	int i = 0, j = n - 1, first = 0, second = n - 1, diff = abs(a[i]+b[j]-x);
	while (i < n && j >= 0)
	{
		int sum = a[i] + b[j];
		if (abs(sum - x) < diff)
		{
			diff = abs(sum-x);
			first = i;
			second = j;
		}
		if (sum > x)
			j--;
		else
			i++;
	}
	cout << "The closet pair is: a[" << first << "] and b[" << second << "], the minimum closet value is: " << a[first] + b[second];
}

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	int arr1[] = { 1, 4, 5, 7 }, arr2[] = { 10, 20, 30, 40 }, x = 32;
	int n = sizeof(arr1) / sizeof(int);
	printArray(arr1, n);
	printArray(arr2, n);
	closetPair(arr1, arr2, n, 31);
	return 0;
}