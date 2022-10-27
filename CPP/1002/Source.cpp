#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t, t1, t2, d, x1, x2, y1, y2, r1, r2;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		t1 = (r1 - r2) * (r1 - r2);
		t2 = (r1 + r2) * (r1 + r2);
		
		if (t1 < d && d < t2)
			cout << "2\n";
		else if (!t1 && !d)
			cout << "-1\n";
		else if (t1 == d || t2 == d)
			cout << "1\n";
		else
			cout << "0\n";
	}

	return 0;
}