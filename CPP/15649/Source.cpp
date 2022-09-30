#include <iostream>
using namespace std;

bool* visit;
int* arr;

void DFS(int n, int m, int depth)
{
	if (depth == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << '\n';
		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (!visit[i])
		{
			visit[i] = true;
			arr[depth] = i + 1;
			DFS(n, m, depth + 1);
			visit[i] = false;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;

	cin >> N >> M;
	arr = new int[M];
	visit = new bool[N];

	DFS(N, M, 0);

	delete[] arr, visit;
	return 0;
}