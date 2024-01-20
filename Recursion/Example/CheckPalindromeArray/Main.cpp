#include <iostream>
using namespace std;

void printArray(int a[], int n, int index)
{
	if (index == n)
		return;
	cout << a[index] << " ";
	printArray(a, n, index+1);
}

bool checkPalindromeArray(int a[], int left, int right)
{
	if (left >= right)
		return true;
	if (a[left] != a[right])
		return false;
	return checkPalindromeArray(a, left + 1, right - 1);
}

int main()
{
	int a[] = { 1,2,3,4,4,5,6,7,8,9 };
	cout << "Given array = ";
	printArray(a, sizeof(a) / sizeof(int), 0);
	cout << endl;
	cout << "Checking palindrome array: " << (checkPalindromeArray(a, 0, sizeof(a) / sizeof(int) - 1) ? "YES" : "NO") << endl;
	int b[] = { 1,2,3,4,5,4,3,2,1 };
	cout << "Given array = ";
	printArray(b, sizeof(b) / sizeof(int), 0);
	cout << endl;
	cout << "Checking palindrome array: " << (checkPalindromeArray(b, 0, sizeof(b) / sizeof(int) - 1) ? "YES" : "NO") << endl;
	int c[] = { 1,2,3,4,4,3,2,1 };
	cout << "Given array = ";
	printArray(c, sizeof(c) / sizeof(int), 0);
	cout << endl;
	cout << "Checking palindrome array: " << (checkPalindromeArray(c, 0, sizeof(c) / sizeof(int) - 1) ? "YES" : "NO") << endl;
	return 0;
}