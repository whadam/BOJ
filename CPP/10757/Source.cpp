#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	bool bCarry(false);
	string str1, str2;
	
	cin >> str1 >> str2;

	if (str1.length() < str2.length())
	{
		string tmp = str2;
		str2 = str1;
		str1 = tmp;
	}

	for (int i = 0; i < str2.length(); i++)
	{
		
	}
	
	if (bCarry)
	{
		for (int i = str2.length(); i < str1.length(); i++)
		{
			
		}
	}

	return 0;
}