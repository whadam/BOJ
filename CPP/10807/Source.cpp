#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, cnt[201], v;

	cin >> n;
	fill(cnt, cnt + 201, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> v;
		cnt[v + 100]++;
	}

	cin >> n;
	cout << cnt[n + 100];

	return 0;
}