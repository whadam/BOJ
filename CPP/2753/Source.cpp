#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int y;
	cin >> y;

	if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
		cout << 1;
	else
		cout << 0;

	return 0;
}