#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T, R, i, j;
	string str;

	cin >> T;

	for (i = 0; i < T; i++)
	{
		cin >> R >> str;

		for (char c : str)
		{
			for (j = 0; j < R; j++)
				cout << c;
		}
		cout << '\n';
	}

	return 0;
}