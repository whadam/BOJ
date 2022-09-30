#include <iostream>
#include <cmath>
using namespace std;

int W, H, X, Y, P, radius, cnt;

void Count(int x, int y)
{
	double distance1 = sqrt(pow(X - x, 2) + pow(Y + radius - y, 2));
	double distance2 = sqrt(pow(X + W - x, 2) + pow(Y + radius - y, 2));
	if (X <= x && x <= (X + W) && Y <= y && y <= (Y + H))
		cnt++;
	else if (distance1 <= radius && x < X)
		cnt++;
	else if (distance2 <= radius && X + W < x)
		cnt++;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int i, x, y;
	
	cin >> W >> H >> X >> Y >> P;
	cnt = 0;
	radius = H / 2;

	for (i = 0; i < P; i++)
	{
		cin >> x >> y;
		Count(x, y);
	}

	cout << cnt;

	return 0;
}