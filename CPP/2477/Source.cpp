#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int K, direction[6], len[6] = { 1, }, big, mini, i, j;
	
	cin >> K;
	big = 0;
	mini = 0;

	for (i = 0; i < 6; i++)
		cin >> direction[i] >> len[i];

	for (i = 0; i < 6; i++)
	{
		if (direction[i] == direction[(i + 2) % 6] && direction[(i + 1) % 6] == direction[(i + 3) % 6])
		{
			big = len[(i + 4) % 6] * len[(i + 5) % 6];
			mini = len[(i + 1) % 6] * len[(i + 2) % 6];
		}
	}

	cout << (big - mini) * K;

	return 0;
}