#include <iostream>
#include <vector>
using namespace std;
#define MAX 100
#define M 3
#define N 3

void printPath(vector<int>& v)
{
	for (int i : v)
		cout << i << " ";
	cout << endl;
}

void printAllPath(int arr[MAX/2][MAX/2], int row, int column, vector<int> &v)
{
	if (row == M - 1 && column == N - 1)
	{
		v.push_back(arr[row][column]);
		printPath(v);
		v.pop_back();
		return;
	}

	v.push_back(arr[row][column]);

	if (row < M - 1)
	{
		printAllPath(arr, row + 1, column, v);
	}

	if (column < N - 1)
	{
		printAllPath(arr, row, column + 1, v);
	}

	v.pop_back();
}

int main()
{
	int arr[MAX/2][MAX/2] = {
			{1, 2, 3},
			{4, 5, 6},
			{7, 8, 9}
	};
	int column = 3, row = 3;
	vector<int> path;
	printAllPath(arr, 0, 0, path);
	return 0;
}