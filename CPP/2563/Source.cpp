#include <iostream>
#include <malloc.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, x, y, area(0);
	bool paper[101][101] = { false, };

	cin >> n;

	while (n != 0)
	{
		cin >> x >> y;

		for (int i = x; i < x + 10; i++)
			for (int j = y; j < y + 10; j++)
				paper[i][j] = true;

		n--;
	}
	
	for (decltype(auto) a : paper)
		for (decltype(auto) b : a)
			if (b)
				area++;

	cout << area;

	return 0;
}