#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n, r(0), i, j;
	bool p[10001] = {};
	
	for (i = 2; i < 5001; i++)
	{
		if (!p[i])
		{
			for (j = i * 2; j < 10001; j += i)
			{
				p[j] = true;
			}
		}
	}
	
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> n;
		for (j = n / 2; j < n; j++)
		{
			if (!p[j] && !p[n - j])
			{
				r = j;
				break;
			}
		}
		cout << n - r << " " << r << '\n';
	}
	
	return 0;
}