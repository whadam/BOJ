#include <iostream>
using namespace std;

long long cnt[1001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m, a;
	long long sum(0), res(0);
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		sum += a;
		cnt[sum % m]++;
	}

	for (int i = 0; i <= 1000; i++)
		res += cnt[i] * (cnt[i] - 1) / 2;
	
	cout << cnt[0] + res;

	return 0;
}