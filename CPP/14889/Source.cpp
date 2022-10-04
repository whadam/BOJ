#include <iostream>
using namespace std;

int N, ** S, result = 1000000000;
bool* matched;

void calc()
{
	int start = 0, link = 0, sub;
}

void matching(int idx, int cnt)
{
	if (cnt == N / 2)
	{
		calc();
		return;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (matched[i] && matched[j])
			{

			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int i;

	cin >> N;
	matched = new bool[N] {false};
	S = new int* [N];
	for (i = 0; i < N; i++)
		S[i] = new int[N];

	for (i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cin >> S[i][j];
	}

	for (i = 0; i < N; i++)
		delete S[i];
	delete[] S, matched;
	return 0;
}