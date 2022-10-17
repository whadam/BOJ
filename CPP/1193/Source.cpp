#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int X, i(1), j(1), cnt(1);
	bool bSwitch(true);
	cin >> X;

	while (true)
	{
		if (cnt == X)
			break;

		if (bSwitch)
		{
			j++;
			if (i != 1)
				i--;
			else
				bSwitch = false;
		}
		else
		{
			i++;
			if (j != 1)
				j--;
			else
				bSwitch = true;
		}

		cnt++;
	}

	cout << i << "/" << j;

	return 0;
}