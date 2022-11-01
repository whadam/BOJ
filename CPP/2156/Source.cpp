#include <iostream>
using namespace std;

int wine[10001], dp[10001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> wine[i];

	dp[1] = wine[1];
	dp[2] = wine[1] + wine[2];

	for (int i = 3; i <= n; i++)
		dp[i] = max(dp[i - 1], max(dp[i - 2], dp[i - 3] + wine[i - 1]) + wine[i]);

	cout << dp[n];

	return 0;
}