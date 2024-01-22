#include <iostream>
using namespace std;

int solution(float arr[], int size, int count)
{
	if (size == 0)
		return count;
	int temp = arr[size - 1] > 0 ? 1 : 0;
	return solution(arr, size - 1, count + temp);
}

void printArray(float arr[], int size)
{
	cout << "Array = ";
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	float arr[] = { 1.2, 2.3, -1, -2.4, 5, 10.1, -4 };
	int size = sizeof(arr) / sizeof(int);
	printArray(arr, size);
	cout << "Number of positive number in the array is: " << solution(arr, size, 0);
	return 0;
}