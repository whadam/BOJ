#include <iostream>
using namespace std;

int dp[500][500];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j <= i; j++)
			cin >> dp[i][j];

	for (int i = n - 1; i >= 1; i--)
		for (int j = 0; j < i; j++)
			dp[i - 1][j] += max(dp[i][j], dp[i][j + 1]);

	cout << dp[0][0];

	return 0;
}