#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	bool cnt[30];

	fill(cnt, cnt + 30, false);

	for (int i = 0; i < 28; i++)
	{
		cin >> n;
		cnt[n - 1] = true;
	}

	for (int i = 0; i < 30; i++)
	{
		if (!cnt[i])
			cout << i + 1 << '\n';
	}

	return 0;
}