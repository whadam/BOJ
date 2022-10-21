#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << i << '\n';
			n /= i;
			--i;
		}
	}
	if (n > 1)
		cout << n;

	return 0;
}