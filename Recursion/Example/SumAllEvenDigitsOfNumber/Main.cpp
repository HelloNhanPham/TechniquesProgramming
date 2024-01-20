#include <iostream>
using namespace std;

int sumEvenDigits(long long n)
{
	if (n < 10)
		return n % 2 == 0 ? n : 0;
	return n % 2 == 0 ? n % 10 + sumEvenDigits(n / 10) : sumEvenDigits(n / 10);
}

int main()
{
	cout << "The given number is: " << 123456789 << endl;
	cout << "Sum all digits of all given number is: " << sumEvenDigits(123456789);
	return 0;
}