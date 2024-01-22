#include <iostream>
#include <stack>
using namespace std;

int findMin(int a[], int n)
{
	if (n == 1)
		return a[0];
	return min(a[n - 1], findMin(a, n - 1));
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
	int A[] = { 1, 4, 45, 6, -50, 10, 2 };
	int n = sizeof(A) / sizeof(int);
	printArray(A, n);
	cout << "Minimum value in the array is: " << findMin(A, n);
	return 0;
}