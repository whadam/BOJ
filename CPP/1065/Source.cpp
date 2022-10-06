#include <iostream>
using namespace std;

int cnt(0);

void h(int n)
{
	if (n < 100)
		cnt++;
	else
	{
		int a, b, c;
		a = n / 100;
		b = (n - a * 100) / 10;
		c = n % 10;

		if (a - b == b - c)
			cnt++;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
		h(i);

	cout << cnt;

	return 0;
}