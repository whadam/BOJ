#include <iostream>
using namespace std;

bool arr[10001]{ false };

int d(int n)
{
	int ret;
	if (n < 10)
		ret = n + n;
	else if (n < 100)
		ret = n + (n / 10) + (n % 10);
	else if (n < 1000)
		ret = n + (n / 100) + ((n / 10) % 10) + (n % 10);
	else
		ret = n + (n / 1000) + ((n / 100) % 10) + ((n / 10) % 10) + (n % 10);
	
	if (ret > 10000)
		return 0;
	return ret;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	fill(arr + 1, arr + 10001, true);
	
	for (n = 1; n < 10001; n++)
		arr[d(n)] = false;

	for (n = 1; n < 10001; n++)
	{
		if (arr[n])
			cout << n << '\n';
	}
	
	return 0;
}