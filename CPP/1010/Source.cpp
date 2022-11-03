#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T, n, m;
	long long cnt;

	cin >> T;

	for (int t = 0; t < T; t++)
	{
		cin >> n >> m;
		cnt = 1;

		for (int i = 0; i < n; i++)
		{
			cnt *= (m - i);
			cnt /= (1 + i);
		}

		cout << cnt << '\n';
	}

	return 0;
}