#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, * v, sum(0), maxCntIdx(0), cnt[8001], nMax(0), nMin(4001);

	cin >> n;
	v = new int[n];
	fill(v, v + n, 0);
	fill(cnt, cnt + 4001, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];

		sum += v[i];
		cnt[v[i] + 4000]++;
		nMax = max(v[i], nMax);
		nMin = min(v[i], nMin);
	}
	
	sort(v, v + n);

	//
	if (sum % 2 == 1)
		cout << sum / n + 1 << '\n';
	else
		cout << sum / n << '\n';

	//
	cout << v[n / 2] << '\n';

	//


	//
	cout << nMax - nMin;

	delete[] v;
	return 0;
}