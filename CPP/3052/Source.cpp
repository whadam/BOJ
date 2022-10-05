#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, cnt(0);
	map<int, int> map;
	
	for (int i = 0; i < 10; i++)
	{
		cin >> n;
		n %= 42;
		map[n]++;
	}

	for (auto i : map)
	{
		if (i.second > 0)
			cnt++;
	}

	cout << cnt;

	return 0;
}