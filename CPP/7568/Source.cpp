#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, i, rank, wh[50][2];
	
	cin >> n;

	for (i = 0; i < n; i++)
		cin >> wh[i][0] >> wh[i][1];

	for (i = 0; i < n; i++)
	{
		rank = 1;

		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue;

			if (wh[i][0] < wh[j][0] && wh[i][1] < wh[j][1])
				rank++;
		}

		cout << rank << " ";
	}

	return 0;
}