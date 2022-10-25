#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m, * arr, nMax(0), sum;
	
	cin >> n >> m;
	arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i1 = 0; i1 < n - 2; i1++)
	{
		for (int i2 = i1 + 1; i2 < n - 1; i2++)
		{
			for (int i3 = i2 + 1; i3 < n; i3++)
			{
				sum = arr[i1] + arr[i2] + arr[i3];
				if (sum <= m)
					nMax = max(nMax, sum);
			}
		}
	}

	cout << nMax;

	delete[] arr;
	return 0;
}