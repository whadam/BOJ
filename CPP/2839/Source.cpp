#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, nMin(15001);
	cin >> n;

	for (int i = n / 5; i >= 0; i--)
	{
		if ((n - (5 * i)) % 3 == 0)
		{
			nMin = min(nMin, i + (n - (5 * i)) / 3);
		}
	}

	if (nMin == 15001)
		cout << -1;
	else
		cout << nMin;

	return 0;
}