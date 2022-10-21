#include <iostream>
using namespace std;

int sum(0), nMin(10001);

void IsPrime(int n)
{
	if (n < 2)
		return;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return;
	}
	sum += n;
	nMin = min(n, nMin);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;

	cin >> m >> n;
	
	for (int i = m; i <= n; i++)
		IsPrime(i);

	if (nMin == 10001)
		cout << -1;
	else
		cout << sum << '\n' << nMin;

	return 0;
}