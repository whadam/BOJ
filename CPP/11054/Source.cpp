#include <iostream>
using namespace std;

int n, arr[1000], asc[1000], desc[1000], nMax(0);

int ASC(int idx)
{
	if (asc[idx] == -1)
	{
		asc[idx] = 1;

		for (int i = idx - 1; i >= 0; i--)
		{
			if (arr[i] < arr[idx])
				asc[idx] = max(asc[idx], ASC(i) + 1);
		}
	}

	return asc[idx];
}

int DESC(int idx)
{
	if (desc[idx] == -1)
	{
		desc[idx] = 1;

		for (int i = idx + 1; i < n; i++)
		{
			if (arr[i] < arr[idx])
				desc[idx] = max(desc[idx], DESC(i) + 1);
		}
	}

	return desc[idx];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int i;

	fill(asc, asc + 1000, -1);
	fill(desc, desc + 1000, -1);
	cin >> n;

	for (i = 0; i < n; i++)
		cin >> arr[i];

	for (i = 0; i < n; i++)
	{
		ASC(i);
		DESC(i);
	}

	for (i = 0; i < n; i++)
	{
		asc[i] += desc[i] - 1;
		nMax = max(asc[i], nMax);
	}

	cout << nMax;

	return 0;
}