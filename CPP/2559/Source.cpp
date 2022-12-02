#include <iostream>
using namespace std;

int arr[100005];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k, nMax(-10000000), s(0);
	long long sum(0), res;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = s; i < s + k; i++)
	{
		sum += arr[i];
	}
	res = sum;

	while (true)
	{
		sum -= arr[s];

		if (s + k >= n)
			break;

		sum += arr[s + k];
		if (sum > res)
			res = sum;

		s++;
	}

	cout << res;

	return 0;
}