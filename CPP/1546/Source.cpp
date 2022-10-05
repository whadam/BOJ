#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, i;
	double sum(0), * n, nMax(0);

	cin >> N;
	n = new double[N];

	for (i = 0; i < N; i++)
	{
		cin >> n[i];
		nMax = max(nMax, n[i]);
	}
	for (i = 0; i < N; i++)
		sum += (n[i] / nMax * 100);
	sum /= N;

	cout.precision(16);
	
	cout << sum;

	delete[] n;
	return 0;
}