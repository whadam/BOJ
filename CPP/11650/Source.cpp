#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, x, y;
	vector<pair<int, int>> vec;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		vec.push_back(pair<int, int>(x, y));
	}

	sort(vec.begin(), vec.end());

	for (auto i : vec)
		cout << i.first << " " << i.second << '\n';

	return 0;
}