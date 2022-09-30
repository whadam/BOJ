#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, i, M, * arrN, sol[500] = { 0, }, cnt(0);

	cin >> N;
	arrN = new int[N];
	
	for (i = 0; i < N; i++)
		cin >> arrN[i];
	sort(arrN, arrN + N);

	M = arrN[1] - arrN[0];
	for (i = 2; i < N; i++)
		M = gcd(M, arrN[i] - arrN[i - 1]);

	for (i = 1; i * i <= M; i++)
	{
		if (M % i == 0)
		{
			sol[cnt++] = i;
			if (i != M / i)
				sol[cnt++] = M / i;
		}
	}

	sort(sol, sol + cnt);
	for (i = 0; i < cnt; i++)
		if (sol[i] != 1)
			cout << sol[i] << " ";

	delete[] arrN;
	return 0;
}