#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b;

	while (true)
	{
		cin >> a >> b;
		if (a == 0)
			break;

		if (a < b && b % a == 0)
			cout << "factor" << '\n';
		else if (a > b && a % b == 0)
			cout << "multiple" << '\n';
		else
			cout << "neither" << '\n';
	}

	return 0;
}