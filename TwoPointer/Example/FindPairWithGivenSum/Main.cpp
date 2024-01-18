#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void findPair(int a[], int n, int sum)
{
	cout << "Finding the pair with the given sum is " << sum << " ..." << endl;
	int l = 0, r = n - 1;
	while (l < r)
	{
		int currentSum = a[l] + a[r];
		if (currentSum == sum)
		{
			cout << "Pair found at indexes " << l << " and " << r << endl;
			return;
		}
		if (currentSum > sum)
			r--;
		else
			l++;
	}
	cout << "Pair not found!" << endl;
}

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	findPair(a, n, 11);
	findPair(a, n, 12);
	findPair(a, n, 15);
	return 0;
}