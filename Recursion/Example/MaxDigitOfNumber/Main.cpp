#include <iostream>
#include <algorithm>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int sumEvenDigits(long long n)
{
	if (n < 10)
		return n;
	return max(n % 10, sumEvenDigits(n / 10));
}

int main()
{
	cout << "The given number is: " << 123456789 << endl;
	cout << "Sum all digits of all given number is: " << sumEvenDigits(123456789);
	return 0;
}