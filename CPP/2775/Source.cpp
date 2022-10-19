#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t(0), k, n, persons[16][16], i;
	
	for (i = 0; i <= 15; i++)
		persons[0][i] = i;

	for (k = 1; k <= 15; k++)
	{
		for (n = 1; n <= 15; n++)
		{
			for (i = 1; i <= n; i++)
				t += persons[k - 1][i];
			persons[k][n] = t;
			t = 0;
		}
	}
	
	cin >> t;

	for (i = 0; i < t; i++)
	{
		cin >> k >> n;
		cout << persons[k][n] << '\n';
	}

	return 0;
}