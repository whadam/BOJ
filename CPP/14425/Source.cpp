#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main()
{
	int n, m, i, cnt;
	unordered_set<string> N;
	string str, *M;

	cin >> n >> m;
	M = new string[m];

	for (i = 0; i < n; i++)
	{
		cin >> str;
		N.insert(str);
	}

	for (i = 0; i < m; i++)
	{
		cin >> str;
		M[i] = str;
	}

	cnt = 0;
	for (i = 0; i < m; i++)
		if (N.find(M[i]) != N.end())
			cnt++;

	cout << cnt;

	delete[] M;
	return 0;
}