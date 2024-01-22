#include <iostream>
#include <string>
using namespace std;

void removeDuplicated(string& str, int index)
{
	if (str.length() < 2 || index > str.length())
		return;
	if (str[index] == str[index - 1])
	{
		str.erase(str.begin() + index);
		str.erase(str.begin() + index - 1);
		removeDuplicated(str, index - 1);
	}
	else
		removeDuplicated(str, index + 1);
}

int main()
{
	string str = "azxxzy";
	cout << "Given string is: " << str << endl;
	removeDuplicated(str, 1);
	cout << "String after remove duplicated adjacent: " << str;
	return 0;
}