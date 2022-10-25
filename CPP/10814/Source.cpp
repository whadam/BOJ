#include <iostream>
#include <queue>
using namespace std;

bool comp(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, v;
	string str;
	queue<string> q[201];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> v >> str;
		q[v].push(str);
	}

	for (int i = 1; i < 201; i++)
	{
		while (!q[i].empty())
		{
			cout << i << " " << q[i].front() << '\n';
			q[i].pop();
		}
	}


	return 0;
}