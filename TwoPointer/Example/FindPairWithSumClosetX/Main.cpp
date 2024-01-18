#include <iostream>
using namespace std;

void findPairSumClosetX(int a[], int n, int x)
{
	int l = 0, r = n - 1, first = l, second = r, closetSum = a[l] + a[r];
	while (l < r)
	{
		int currentSum = a[l] + a[r];
		if (abs(currentSum - x) < abs(closetSum - x))
			closetSum = currentSum;
		if (currentSum > x)
			r--;
		else
			l++;
	}
	cout << "Pair with sum closet to x is: (" << a[first] << " and " << a[second] << "), their sum = " << closetSum << endl;
}

int main()
{
	int a[] = { 10,22,28,29,30,40 }, x = 54, n = sizeof(a) / sizeof(int);
	findPairSumClosetX(a, n, x);
	return 0;
}