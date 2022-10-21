#include <iostream>
using namespace std;

bool IsPrime(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, cnt;

	while (true)
	{
		cin >> n;
		if (n == 0)
			break;
		cnt = 0;

		for (int i = n + 1; i <= n * 2; i++)
		{
			if (IsPrime(i))
				cnt++;
		}
		cout << cnt << '\n';
	}

	return 0;
}