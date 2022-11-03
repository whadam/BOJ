#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[102]; 

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int i, n, a, b, nMax(0);
	vector<pair<int, int>> vec;

	cin >> n;
	vec.emplace_back(0, 0);

	for (i = 0; i < n; i++)
	{
		cin >> a >> b;
		vec.emplace_back(a, b);
	}
	sort(vec.begin(), vec.end());

	for (i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (vec[i].second > vec[j].second)
			{
				if (dp[j] >= dp[i])
					dp[i] = dp[j] + 1;
			}
		}
		nMax = max(nMax, dp[i]);
	}

	cout << n - nMax;

	return 0;
}