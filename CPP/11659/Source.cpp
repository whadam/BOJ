#include <iostream>
using namespace std;

int arr[100005];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m, i, j;
	cin >> n >> m;

	for (i = 1; i <= n; i++)
	{
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}

	while (m--)
	{
		cin >> i >> j;

		cout << arr[j] - arr[i - 1] << '\n';
	}

	return 0;
}