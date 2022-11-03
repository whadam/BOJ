#include <iostream>
using namespace std;

int n, k, w[101], v[101], dp[101][100001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int i, j;
	 
	cin >> n >> k;

	for (i = 1; i <= n; i++)
		cin >> w[i] >> v[i];

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= k; j++)
		{
			if (j - w[i] >= 0)
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
			else
				dp[i][j] = dp[i - 1][j];
		}
	}

	cout << dp[n][k];

	return 0;
}