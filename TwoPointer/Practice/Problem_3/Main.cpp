#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void solution(int a[], int n)
{
	sort(a, a + n);
	bool found = false;
	for (int i = 0; i < n - 2; ++i)
	{
		int l = i + 1, r = n - 1, k = (-1) * a[i];
		while (l < r)
		{
			int currentSum = a[l] + a[r];
			if (currentSum == k)
			{
				cout << "(" << a[i] << "," << a[l] << "," << a[r] << ") ";
				l++;
				r--;
				found = true;
			}
			if (currentSum > k)
				r--;
			else if (currentSum > k)
				r--;
			else
				l++;

		}
	}
	if (!found)
		cout << "There is no triplet with sum equal to 0!";
}

int main()
{
	int arr[] = { 0, -1, 2, -3, 1 }, n = sizeof(arr) / sizeof(int);
	printArray(arr, n);
	solution(arr, n);
	return 0;
}