#include <iostream>
using namespace std;

long long product(int x, int y)
{
	if (y == 1)
		return x;
	if (y == 0 || x == 0)
		return 0;
	return x + product(x, y - 1);
}

int main()
{
	int x = 5, y = 2;
	cout << "X = " << x << ", Y = " << y << endl;
	cout << "Product(" << x << "," << y << ") = " << product(x, y);
	return 0;
}