#include <iostream>
using namespace std;

long long sumArray(int a[], int n)
{
	if (n == -1)
		return 0;
	int temp = a[n] % 2 == 0 ? a[n] : 0;
	return temp + sumArray(a, n - 1);
}

void printArray(int a[], int n, int index)
{
	if (index == n)
		return;
	cout << a[index] << " ";
	printArray(a, n, index+1);
}

int main()
{
	int a[] = { 1,2,3,4,4,5,6,7,8,9 };
	cout << "Given array = ";
	printArray(a, sizeof(a) / sizeof(int), 0);
	cout << endl;
	cout << "Sum of all even values is: " << sumArray(a, sizeof(a) / sizeof(int) - 1);
	return 0;
}