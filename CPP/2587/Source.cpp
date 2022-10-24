#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n[5], sum(0);

	for (int i = 0; i < 5; i++)
	{
		cin >> n[i];
		sum += n[i];
	}

	sort(n, n + 5);

	cout << sum / 5 << '\n' << n[2];

	return 0;
}