#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int cnt(0);
	string str;

	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		cnt++;

		if (str[i] == '-')
			cnt--;
		else if (str[i] == 'j')
		{
			if (i > 0 && (str[i - 1] == 'l' || str[i - 1] == 'n'))
				cnt--;
		}
		else if (str[i] == '=')
		{
			cnt--;

			if (i > 1 && str[i - 1] == 'z' && str[i - 2] == 'd')
				cnt--;
		}
	}

	cout << cnt;

	return 0;
}