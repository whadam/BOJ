#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, * v, cnt[8001], nMax(-4001), nMin(4001), result;
	double sum(0);

	cin >> n;
	v = new int[n];
	fill(v, v + n, 0);
	fill(cnt, cnt + 8001, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];

		sum += v[i];
		cnt[v[i] + 4000]++;
		nMax = max(v[i], nMax);
		nMin = min(v[i], nMin);
	}
	
	sort(v, v + n);

	// mean
	result = round(sum / n);
	if (result == -0)
		cout << 0 << '\n';
	else
		cout << result << '\n';

	// median
	cout << v[n / 2] << '\n';

	// mode
	n = 0;
	int max_mode = *max_element(cnt, cnt + 8001);
	for (int i = 0; i < 8001; i++)
	{
		if (cnt[i] == max_mode)
		{
			n++;
			sum = i - 4000;
		}
		if (n == 2)
			break;
	}
	cout << sum << '\n';

	// range
	cout << nMax - nMin;

	delete[] v;
	return 0;
}