#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	map<int, int> x, y;
	
	for (int i = 0; i < 3; i++)
	{
		cin >> n;
		x[n]++;
		cin >> n;
		y[n]++;
	}

	for (auto i : x)
	{
		if (i.second == 1)
			cout << i.first << " ";
	}
	for (auto i : y)
	{
		if (i.second == 1)
			cout << i.first;
	}

	return 0;
}