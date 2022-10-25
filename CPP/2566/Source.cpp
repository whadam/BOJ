#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n[81], nMax;

	for (int i = 0; i < 81; i++)
		cin >> n[i];
	nMax = *max_element(n, n + 81);

	for (int i = 0; i < 81; i++)
	{
		if (n[i] == nMax)
		{
			cout << nMax << '\n' << i / 9 + 1 << " " << i % 9 + 1;
			return 0;
		}
	}

	return 0;
}