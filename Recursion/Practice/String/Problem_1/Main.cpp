#include <iostream>
#include <string>
using namespace std;

int atoi(string str, int index, int sum)
{
	if (index == str.length())
		return sum;
	return atoi(str, index + 1, sum * 10 + int(str[index] - '0'));
}

int main()
{
	string str = "12345";
	cout << "Given string number: " << str << endl;
	cout << "atoi(" << str << ") = " << atoi(str,0,0);
	return 0;
}