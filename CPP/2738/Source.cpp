#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m, A[100][100], B[100][100];

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> A[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> B[i][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << A[i][j] + B[i][j] << " ";
		cout << '\n';
	}

	return 0;
}