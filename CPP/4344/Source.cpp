#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int C, N;
	double avg, * n, cnt;

	cin >> C;

	for (int i = 0; i < C; i++)
	{
		cin >> N;
		n = new double[N];
		avg = 0.;
		cnt = 0;
		
		for (int j = 0; j < N; j++)
		{
			cin >> n[j];
			avg += n[j];
		}
		avg /= N;

		for (int j = 0; j < N; j++)
		{
			if (n[j] > avg)
				cnt++;
		}

		cout << fixed;
		cout.precision(3);
		cout << cnt / N * 100 << "%\n";

		delete[] n;
	}

	return 0;
}