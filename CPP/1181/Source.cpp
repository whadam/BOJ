#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	string str;
	vector<pair<int, string>> vec;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		auto it = find(vec.begin(), vec.end(), pair<int, string>(str.length(), str));
		if (it == vec.end())
			vec.push_back(pair<int, string>(str.length(), str));
	}

	sort(vec.begin(), vec.end());
	
	for (auto v : vec)
		cout << v.second << '\n';
	
	return 0;
}