#include <iostream>
using namespace std;
// 9223372036854775807 9223372036854775808
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	bool bCarry;
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

	char sum;
	for (int i = 0; i < len1; i++)
	{
		bCarry = false;
		sum = str1[i] + str2[i];

		if (sum > 57) // sum > 9
		{
			
			bCarry = true;
		}
		else
		{
			str += sum;
			bCarry = false;
		}

		if (bCarry)
		{

		}
	}
	
	return 0;
}