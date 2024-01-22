#include <iostream>
using namespace std;

int solution(int a[], int n, int target)
{
	if (n == 0 || target < 0)
		return 0;
	if (target == 0)
		return 1;
	return solution(a, n, target - a[n - 1]) + solution(a, n - 1, target);
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
	int a[] = { 2,5,3,6 };
	int size = sizeof(a) / sizeof(int);
	printArray(a, size);
	cout << "Target: " << 10 << endl;
	cout << "Number of solutions is: " << solution(a, size, 10);
	return 0;
}