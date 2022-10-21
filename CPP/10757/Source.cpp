#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int len1, len2;
	string str1, str2, str = "";
	
	cin >> str1 >> str2;

	if (str1.length() < str2.length())
		str1.swap(str2);
	len1 = str1.length();
	len2 = str2.length();

	// str2, str zero padding
	for (int i = 0; i < len1 - len2; i++)
		str2 = "0" + str2;
	for (auto c : str1)
		str += "0";
	str += "0";

	char sum;
	for (int i = len1 - 1; i >= 0; i--)
	{
		sum = str1[i] + str2[i] + str[i + 1] - 48 * 3;

		if (sum > 9)
		{
			str[i + 1] = sum + 38;
			str[i] = '1';
		}
		else
		{
			str[i + 1] = sum + 48;
		}
	}

	if (str[0] == '0')
		str = str.substr(1, str.length());

	cout << str;
	
	return 0;
}