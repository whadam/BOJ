#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, cnt(0);
	bool bCheck[26], bAdder;
	string str;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		fill(bCheck, bCheck + 26, false);
		bCheck[str[0] - 97] = true;
		bAdder = true;

		for (int j = 1; j < str.length(); j++)
		{
			if (str[j] == str[j - 1])
				continue;
			if (bCheck[str[j] - 97])
			{
				bAdder = false;
				break;
			}
			bCheck[str[j] - 97] = true;
		}

		if (bAdder)
			cnt++;
	}

	cout << cnt;

	return 0;
}