#include <iostream>
using namespace std;

int countDigit(int n)
{
	if (n < 10)
		return 1;
	return 1 + countDigit(n/10);
}

int main()
{
	int n = 1234;
	cout << "Given number is: " << n;
	cout << endl << "Total digits of given number is: " << countDigit(n);
	return 0;
} 
