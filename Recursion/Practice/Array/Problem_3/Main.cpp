#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

float meanArray(int a[], int n)
{
	if (n == 1)
		return a[n - 1];
	if (n == 0)
		return 0;
	return (meanArray(a, n - 1) * (n - 1) + a[n-1])/n;
}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	int size = sizeof(arr) / sizeof(int);
	printArray(arr, size);
	cout << "Mean of the array is: " << meanArray(arr, size);
	return 0;
}