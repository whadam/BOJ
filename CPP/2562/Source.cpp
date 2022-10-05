#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, i, nMax = 0, idx;

	for (i = 1; i <= 9; i++)
	{
		cin >> n;
		if (nMax < n)
		{
			nMax = n;
			idx = i;
		}
	}

	cout << nMax << '\n' << idx;

	return 0;
}