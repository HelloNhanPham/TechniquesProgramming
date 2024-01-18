#include <iostream>
using namespace std;

string MinValueBySwap(string str)
{
	int len = str.length();
	for (int i = 1; i < len; ++i)
	{
		int temp = i;
		while (str[temp] < str[temp - 1] && temp > 0)
		{
			swap(str[temp], str[temp - 1]);
			temp--;
		}
	}
	return str;
}

int main()
{
	string str = "246432";
	cout << "Given number is: " << str << endl;
	cout << "Min number after swap is: " << MinValueBySwap(str);
	return 0;
}