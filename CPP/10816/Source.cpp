#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m, * M, i, cnt;
	map<int, int> map;

	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> m;
		map[m] += 1;
	}

	cin >> m;
	M = new int[m];
	for (i = 0; i < m; i++)
	{
		cin >> n;
		M[i] = n;
	}

	for (i = 0; i < m; i++)
		cout << map[M[i]] << " ";

	delete[] M;
	return 0;
}