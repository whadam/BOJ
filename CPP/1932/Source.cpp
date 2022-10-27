#include <iostream>
using namespace std;

int sum[501][501] = { 0, }, tri[501][501];

int calc(int n, int color)
{
	if (sum[n][color] == 0)
	{
		if (color == 0)
			sum[n][0] = min(calc(n - 1, 1), calc(n - 1, 2)) + tri[n][0];
		else if (color == 1)
			sum[n][1] = min(calc(n - 1, 0), calc(n - 1, 2)) + tri[n][1];
		else
			sum[n][2] = min(calc(n - 1, 0), calc(n - 1, 1)) + tri[n][2];
	}

	return sum[n][color];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < 3; j++)
			cin >> tri[i][j];

	sum[0][0] = tri[0][0];
	sum[0][1] = tri[0][1];
	sum[0][2] = tri[0][2];

	cout << min(calc(n - 1, 0), min(calc(n - 1, 1), calc(n - 1, 2)));

	return 0;