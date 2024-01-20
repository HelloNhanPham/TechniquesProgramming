#include <iostream>
using namespace std;

int sumDigits(long long n)
{
	if (n < 10)
		return n;
	return n % 10 + sumDigits(n / 10);
}

int main()
{
	cout << "The given number is: " << 123456789 << endl;
	cout << "Sum all digits of all given number is: " << sumDigits(123456789);
	return 0;
}