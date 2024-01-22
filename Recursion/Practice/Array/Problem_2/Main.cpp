#include <iostream>
using namespace std;

void solution(int n)
{
	if (n == 0)
		return;
	cout << n << " ";
	solution(n - 1);
}

int main()
{
	int n = 5;
	cout << "Given number is: " << n << endl;
	cout << "Numbers from " << n << " to 1 is: ";
	solution(5);
	return 0;
}