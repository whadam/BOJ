#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, two(0), five(0), temp;
	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		temp = i;

		while (temp % 2 == 0)
		{
			temp /= 2;
			two++;
		}
		while (temp % 5 == 0)
		{
			temp /= 5;
			five++;
		}
	}

	cout << min(two, five);

	return 0;
}