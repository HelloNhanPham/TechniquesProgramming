#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void solution(int a[], int n, int k)
{
	int first = 0, second = n - 1;
	bool flag = false;
	while (first <= second)
	{
		if (a[first] + a[second] == k)
		{
			flag = true;
			break;
		}
		else if (a[first] + a[second] > k)
			second--;
		else
			first++;
	}
	if (flag)
		cout << first + 1 << " " << second + 1 << endl;
	else
		cout << "-1 -1" << endl;
}

int main()
{
	int a[] = { 1,1,2,4,7,8,11 }, n = 7;
	printArray(a, n);
	solution(a, n, 10);
	solution(a, n, 4);
	return 0;
}