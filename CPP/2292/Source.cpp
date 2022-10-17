#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, idx(1), cnt(0);
	cin >> N;

	while (N > idx + (6 * cnt))
	{
		idx += 6 * cnt;
		cnt++;
	}

	cout << cnt+1;

	return 0;
}