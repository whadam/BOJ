#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t, n;
	long long dp[101] = { 0, };

	cin >> t;
	dp[1] = dp[2] = 1;

	for (int i = 3; i < 101; i++)
		dp[i] = dp[i - 2] + dp[i - 3];

	while (t-- > 0)
	{
		cin >> n;
		cout << dp[n] << '\n';
	}

	return 0;
}