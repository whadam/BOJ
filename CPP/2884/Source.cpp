#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int h, m;
	cin >> h >> m;

	if (m >= 45)
		cout << h << " " << m - 45;
	else
	{
		if (h != 0)
			cout << h - 1 << " " << m + 15;
		else
			cout << "23 " << m + 15;
	}

	return 0;
}