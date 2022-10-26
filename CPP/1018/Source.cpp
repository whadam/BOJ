#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m, r(2500);
	char s[51][51];

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> s[i];

	for (int i = 0; i < n - 7; ++i)
		for (int j = 0; j < m - 7; ++j)
		{
			int a(0), b(0);

			for (int x = 0; x < 8; ++x)
				for (int y = 0; y < 8; ++y)
				{
					if ((x + y) % 2)
						a += s[i + x][j + y] == 'B';
					else
						b += s[i + x][j + y] == 'B';
				}

			a = 32 - abs(a - b);

			if (r > a)
				r = a;
		}

	cout << r;
		

	return 0;
}