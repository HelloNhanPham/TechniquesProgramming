#include <iostream>
using namespace std;

bool checkPalindromeNumber(string str, int begin, int end)
{
	if (end - begin < 2)
		return true;
	if (str[begin] != str[end])
		return false;
	return checkPalindromeNumber(str, begin + 1, end - 1);
}

int main()
{
	string str = "1234321";
	cout << "The given number is: " << str << endl;
	cout << "Check number is palindrome: " << (checkPalindromeNumber(str, 0, str.length() - 1) ? "YES" : "NO") << endl;
	str = "1234521";
	cout << "The given number is: " << str << endl;
	cout << "Check number is palindrome: " << (checkPalindromeNumber(str, 0, str.length() - 1) ? "YES" : "NO") << endl;
	return 0;
}