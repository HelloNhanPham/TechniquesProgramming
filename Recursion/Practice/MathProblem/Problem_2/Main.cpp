#include <iostream>
using namespace std;

int solution(int n, int count)
{
	if (n == 0)
		return count;
	int currentBit = n & 1;
	return solution(n >> 1, count + currentBit);
}

int main()
{
	cout << "Given number is: 21" << endl;
	cout << "Number of bits 1 of given number is: " << solution(21, 0);
	return 0;
}