#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, * x, * tmp, cnt(0);
	map<int, int> map;

	cin >> n;
	x = new int[n];
	tmp = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		tmp[i] = x[i];
	}

	sort(tmp, tmp + n);

	for (int i = 0; i < n; i++)
	{
		if (map.find(tmp[i]) == map.end())
			map[tmp[i]] = cnt++;
	}

	for (int i = 0; i < n; i++)
	{
		cout << map[x[i]] << " ";
	}

	delete[] x, tmp;
	return 0;
}