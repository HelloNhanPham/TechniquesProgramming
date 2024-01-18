#include <iostream>
using namespace std;

bool compareTwoString(string str1, string str2)
{
	int i = 0, j = 0;
	while (str1[i] == str2[j])
	{
		if (str1[i] == '\0' && str2[j] == '\0')
			return true;
		i++;
		j++;
	}
	return false;
}

int main()
{
	string str1 = "heelo";
	string str2 = "heelo";
	string str3 = "hello";
	cout << "Compare " << str1 << " and " << str2 << ": " << compareTwoString(str1, str2) << endl;
	cout << "Compare " << str2 << " and " << str3 << ": " << compareTwoString(str2, str3);
	return 0;
}