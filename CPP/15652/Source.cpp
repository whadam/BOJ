#include <iostream>
#include <string>
using namespace std;

int* arr;
string str = "";

void DFS(int n, int m, int depth)
{
	if (depth == m)
	{
		for (int i = 0; i < m; i++)
			//cout << arr[i] << " ";
			str.append(to_string(arr[i]) + " ");
		//cout << '\n';
		str.append("\n");
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		arr[depth] = i;
		DFS(n, m, depth + 1);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;

	cin >> N >> M;
	arr = new int[M];

	DFS(N, M, 0);

	cout << str;

	delete[] arr;
	return 0;
}