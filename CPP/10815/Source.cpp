#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	int n, m, i, tmp, *M;
	unordered_set<int> N;
	
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> tmp;
		N.insert(tmp);
	}

	cin >> m;
	M = new int[m];
	for (i = 0; i < m; i++)
		cin >> M[i];

	for (i = 0; i < m; i++)
	{
		if (N.find(M[i]) != N.end())
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}
	
	delete[] M;
	return 0;
}