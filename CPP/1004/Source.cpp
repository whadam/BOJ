#include <iostream>
#include <cmath>
using namespace std;

int cnt;

void Count(int x1, int y1, int x2, int y2, int* planet)
{
	double distance1, distance2;
	distance1 = sqrt(pow((x1 - planet[0]), 2) + pow((y1 - planet[1]), 2));
	distance2 = sqrt(pow((x2 - planet[0]), 2) + pow((y2 - planet[1]), 2));

	if (((distance1 < planet[2]) && (distance2 > planet[2])) || ((distance1 > planet[2]) && (distance2 < planet[2])))
		cnt++;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int T, n, t, i, * result, point[4], planet[3];

	cin >> T;
	result = new int[T];
	
	for (t = 0; t < T; t++)
	{
		cnt = 0;

		for (i = 0; i < 4; i++)
			cin >> point[i];
		
		cin >> n;
		for (i = 0; i < n; i++)
		{
			for (int j = 0; j < 3; j++)
				cin >> planet[j];

			Count(point[0],point[1], point[2], point[3], planet);
		}
		result[t] = cnt;
	}

	for (t = 0; t < T; t++)
		cout << result[t] << '\n';

	delete[] result;
	return 0;
}