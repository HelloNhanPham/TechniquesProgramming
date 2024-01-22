#include <iostream>
using namespace std;

long long F_Nth_Term(int n, int start, int value)
{
	if (n == 0 || start > n || start == 0)
		return 0;
	long long product = 1;
	for (int i = 1; i <= start; ++i)
	{
		value++;
		product *= value;
	}
	return product + F_Nth_Term(n, start + 1, value);
}

int main()
{
	int n = 5;
	cout << "Given number is: " << n << endl;
	cout << "F(" << n << ") = " << F_Nth_Term(n, 1, 0);

	return 0;
}