#include <iostream>
using namespace std;

int i, arr[1000], dp[1000] = { 0, };

int calc(int idx)
{
	if (dp[idx] == 0)
	{
		dp[idx] = 1;
		
		for (i = idx - 1; i >= 0; i--)
		{
			if (arr[i] < arr[idx])
				dp[idx] = max(dp[idx], calc(i) + 1);
		}
	}

	return dp[idx];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, nMax;
	cin >> n;

	for (i = 0; i < n; i++)
		cin >> arr[i];

	for (i = 0; i < n; i++)
		calc(i);

	nMax = dp[0];
	for (i = 1; i < n; i++)
		nMax = max(nMax, dp[i]);

	cout << nMax;

	return 0;
}