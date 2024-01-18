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

void solution(int a[], int n, int sum)
{
	sort(a, a + n);
	bool found = false;
	for (int i = 0; i < n - 2; ++i)
	{
		int l = i + 1, r = n - 1, k = (-1) * a[i];
		while (l < r)
		{
			int currentSum = a[l] + a[r];
			if (currentSum == sum + k)
			{
				cout << "(" << a[i] << "," << a[l] << "," << a[r] << ") ";
				l++;
				r--;
				found = true;
			}
			else if (currentSum > sum + k)
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
	int arr[] = { 12, 3, 4, 1, 6, 9 }, n = sizeof(arr) / sizeof(int);
	printArray(arr, n);
	solution(arr, n, 24);
	return 0;
}