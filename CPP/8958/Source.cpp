#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, score, cnt;
	string str;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cnt = 0;
		score = 0;
		cin >> str;

		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == 'O')
			{
				cnt++;
				score += cnt;
			}
			else
				cnt = 0;
		}

		cout << score << '\n';
	}

	
	return 0;
}