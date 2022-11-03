#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t, n, cnt;
	string str;
	map<string, int> m;

	cin >> t;

	while (t--)
	{
		cin >> n;

		while (n--)
		{
			cin >> str >> str;
			
			if (m.find(str) == m.end())
				m.insert({ str, 1 });
			else
				m[str]++;
		}

		cnt = 1;
		for (auto i : m)
			cnt *= (i.second + 1);

		cout << cnt - 1 << '\n';

		m.clear();
	}

	return 0;
}