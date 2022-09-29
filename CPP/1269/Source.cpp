#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, val, i;
	map<int, int> map;

	cin >> a >> b;

	for (i = 0; i < a + b; i++)
	{
		cin >> val;
		map[val] += 1;
		if (map[val] > 1)
			map.erase(val);
	}

	cout << map.size();

	return 0;
}