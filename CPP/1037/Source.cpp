#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, i;
	int* N;

	cin >> n;
	N = new int[n];

	for (i = 0; i < n; i++)
	{
		cin >> N[i];
	}
	sort(N, N+n);

	cout << N[0] * N[n - 1];
	
	delete[] N;
	return 0;
}