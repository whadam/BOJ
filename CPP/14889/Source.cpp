#include <iostream>
using namespace std;

int N, ** S, result = 1000000000;
bool* matched;

void calc()
{
	int start = 0, link = 0, sub;

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (matched[i] && matched[j])
			{
				start += S[i][j];
				start += S[j][i];
			}
			else if (!matched[i] && !matched[j])
			{
				link += S[i][j];
				link += S[j][i];
			}
		}
	}

	sub = abs(start - link);

	if (sub == 0)
	{
		cout << 0;
		exit(0);
	}

	result = min(sub, result);
}

void matching(int idx, int cnt)
{
	if (cnt == N / 2)
	{
		calc();
		return;
	}

	for (int i = idx; i < N; i++)
	{
		if (!matched[i])
		{
			matched[i] = true;
			matching(i + 1, cnt + 1);
			matched[i] = false;
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

	matching(0, 0);

	cout << result;

	for (i = 0; i < N; i++)
		delete S[i];
	delete[] S, matched;
	return 0;
}