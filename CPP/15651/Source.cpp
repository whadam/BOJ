#include <iostream>
using namespace std;

int* arr;

void DFS(int n, int m, int depth, int at)
{
	if (depth == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << '\n';
		return;
	}

	for (int i = at; i <= n; i++)
	{
		arr[depth] = i;
		DFS(n, m, depth + 1, i);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;

	cin >> N >> M;
	arr = new int[M];

	DFS(N, M, 0, 1);

	delete[] arr;
	return 0;
}