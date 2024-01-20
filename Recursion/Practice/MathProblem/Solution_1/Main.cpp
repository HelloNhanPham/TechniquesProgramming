#include <iostream>
using namespace std;

void solution(int n)
{
	if (n < 2)
	{
		cout << n;
		return;
	}
	solution(n / 2);
	cout << n % 2;
}

int main()
{
	int n = 13;
	cout << "Given number is: " << n << endl;
	cout << "The presentation in binary of given number is: ";
	solution(n);
	n = 15;
	cout << "Given number is: " << n << endl;
	cout << "The presentation in binary of given number is: ";
	solution(n);
	return 0;
}