#include <iostream>
#include <string>
using namespace std;

void solution(string s, int index)
{
	if (index == -1)
		return;
	cout << s[index];
	solution(s, index - 1);
}

int main()
{
	string str = "abcdefghiklmn";
	cout << "Given string is: " << str << endl;
	cout << "Print reverse string: ";
	solution(str, str.length() - 1);
	return 0;
}