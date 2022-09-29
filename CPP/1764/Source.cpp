#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m, i, cnt;
	string str;
	map<string, int> NM;
	
	cin >> n >> m;
	cnt = 0;

	for (i = 0; i < n + m; i++)
	{
		cin >> str;
		NM[str] += 1;
		if (NM[str] == 2)
			cnt++;
	}

	cout << cnt << '\n';

	for (auto nm : NM)
	{
		if (nm.second == 2)
		{
			cout << nm.first << '\n';
		}
	}

	return 0;
}