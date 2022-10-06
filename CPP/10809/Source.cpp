#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	char comp;
	int cnt, i, j;

	cin >> str;

	for (i = 0; i < 26; i++)
	{
		comp = 'a' + i;
		cnt = 0;

		for (j = 0; j < str.length(); j++)
		{
			if (str[j] == comp)
			{
				cout << j << " ";
				break;
			}
		}
		
		if (j == str.length())
			cout << -1 << " ";
	}

	return 0;
}