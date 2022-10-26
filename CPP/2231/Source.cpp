#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, i, j, sum(0);
	string str;

	cin >> n;

	for (i = 1; i < n; i++)
	{
		sum = i;
		str = to_string(i);

		for (j = 0; j < str.length(); j++)
			sum += (str[j] - 48);

		if (sum == n)
			break;
	}

	if (n == i)
		i = 0;

	cout << i;

	return 0;
}