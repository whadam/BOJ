#include <iostream>
#include <cmath>
using namespace std;

int cnt = 0;
int* row;

bool possibility(int col)
{
	for (int i = 0; i < col; i++)
	{
		if (row[col] == row[i])
			return false;
		else if (abs(col - i) == abs(row[col] - row[i]))
			return false;
	}

	return true;
}

void nQueen(int n, int depth)
{
	if (depth == n)
	{
		cnt++;
		return;
	}

	for (int i = 0; i < n; i++)
	{
		row[depth] = i;
		if (possibility(depth))
			nQueen(n, depth + 1);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;
	row = new int[N];

	nQueen(N, 0);
	cout << cnt;

	delete[] row;
	return 0;
}