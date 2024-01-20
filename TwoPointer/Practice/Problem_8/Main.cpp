#include <iostream>
using namespace std;

void moveAllZero(int a[], int n)
{
	int i = 0;
	while (a[i] != 0 && i < n)
		i++;
	int j = i + 1;
	while (j < n)
	{
		if (a[j] != 0)
		{
			swap(a[i], a[j]);
			i++;
		}
		j++;
	}
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
	int a[] = { 0,0,1,2,3 }, n = sizeof(a) / sizeof(int);
	printArray(a, n);
	moveAllZero(a, n);
	printArray(a, n);
	return 0;
}