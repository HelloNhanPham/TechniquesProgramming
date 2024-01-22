#include <iostream>
using namespace std;

int lengthString(string str, int length)
{
	if (str[length] == '\0')
		return length;
	return lengthString(str, length + 1);
}

int main()
{
	string str = "aaaabbbbcccc";
	cout << "Given string is: " << str << endl;
	cout << "Length of given string is: " << lengthString(str,0);
	return 0;
}