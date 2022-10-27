#include <iostream>
using namespace std;

int cost[1000][3] = { 0, }, rgb[1000][3];

int calc(int n, int color)
{
	if (cost[n][color] == 0)
	{
		if (color == 0)
			cost[n][0] = min(calc(n - 1, 1), calc(n - 1, 2)) + rgb[n][0];
		else if (color == 1)
			cost[n][1] = min(calc(n - 1, 0), calc(n - 1, 2)) + rgb[n][1];
		else
			cost[n][2] = min(calc(n - 1, 0), calc(n - 1, 1)) + rgb[n][2];
	}

	return cost[n][color];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < 3; j++)
			cin >> rgb[i][j];

	cost[0][0] = rgb[0][0];
	cost[0][1] = rgb[0][1];
	cost[0][2] = rgb[0][2];
	
	cout << min(calc(n - 1, 0), min(calc(n - 1, 1), calc(n - 1, 2)));

	return 0;
}