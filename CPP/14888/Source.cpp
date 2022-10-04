#include <iostream>
using namespace std;

int N, op[4] = { 0, }, * seq, minVal = 1000000000, maxVal = -1000000000;

void Calc(int result, int depth)
{
	if (depth == N)
	{
		maxVal = max(maxVal, result);
		minVal = min(minVal, result);
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		if (op[i] > 0)
		{
			op[i]--;

			switch (i)
			{
			case 0:
				Calc(result + seq[depth], depth + 1);
				break;
			case 1:
				Calc(result - seq[depth], depth + 1);
				break;
			case 2:
				Calc(result * seq[depth], depth + 1);
				break;
			case 3:
				Calc(result / seq[depth], depth + 1);
				break;
			}

			op[i]++;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> N;
	seq = new int[N];

	for (int i = 0; i < N; i++)
		cin >> seq[i];
	cin >> op[0] >> op[1] >> op[2] >> op[3];

	Calc(seq[0], 1);

	cout << maxVal << '\n' << minVal;

	delete[] seq;
	return 0;
}