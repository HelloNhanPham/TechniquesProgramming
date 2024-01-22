#include <iostream>
#include <string>
using namespace std;

long long convertStringToInteger(string str, int index)
{
	if (index < 0)
		return 0;
	return long long(str[index] - '0') + convertStringToInteger(str, index - 1) * 10;
}

int main()
{
	string str = "123456789";
	cout << "Given string is: " << str << endl;
	cout << "Convert string to integer: " << convertStringToInteger(str, str.length() - 1);
	return 0;
}