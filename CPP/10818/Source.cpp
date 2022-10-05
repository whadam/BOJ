#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, * n;

	cin >> N;
	n = new int[N];

	for (int i = 0; i < N; i++)
		cin >> n[i];
	sort(n, n + N);

	cout << n[0] << " " << n[N - 1];

	delete[] n;
	return 0;
}