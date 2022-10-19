#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, h, w, n;
	cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		cin >> h >> w >> n;

		if (n % h == 0)
		{
			cout << h;
			cout.width(2);
			cout.fill('0');
			cout << n / h << '\n';
		}
		else
		{
			cout << n % h;
			cout.width(2);
			cout.fill('0');
			cout << n / h + 1 << '\n';
		}
	}

	return 0;
}