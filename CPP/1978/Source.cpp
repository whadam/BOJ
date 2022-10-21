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

	int n, p, cnt(0);
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> p;
		
		if (IsPrime(p))
			cnt++;
	}

	cout << cnt;

	return 0;
}