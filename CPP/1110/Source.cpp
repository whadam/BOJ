#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, cnt = 0, old, units;
	cin >> n;
	old = n;

	while (true)
	{
		cnt++;

		units = n % 10;
		n = (n / 10) + units;
		if (n >= 10)
			n %= 10;
		n += units * 10;

		if (old == n)
			break;
	}

	cout << cnt;

	return 0;
}