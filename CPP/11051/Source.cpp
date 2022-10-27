#include <iostream>
using namespace std;

int dp[1001][1001] = { 0, };

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k, i, j;
	cin >> n >> k;

	dp[1][0] = dp[1][1] = 1;
	
	for (i = 2; i <= n; i++)
	{
		for (j = 0; j <= k; j++)
		{
			if (j == 0 || i == j)
				dp[i][j] = 1;
			else
				dp[i][j] = dp[i - 1][j - 1] % 10007 + dp[i - 1][j] % 10007;
		}
	}

	cout << (dp[n][k] % 10007);

	return 0;
}