#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int x, y, w, h, nMin(1001);

	cin >> x >> y >> w >> h;

	nMin = min(x, nMin);
	nMin = min(y, nMin);
	nMin = min(w - x, nMin);
	nMin = min(h - y, nMin);

	cout << nMin;

	return 0;
}