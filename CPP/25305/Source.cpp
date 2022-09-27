#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, k, *x;
	cin >> N >> k;
	x = new int[N];

	for (int i = 0; i < N; i++)
		cin >> x[i];

	sort(x, x + N);

	cout << x[N-k] << endl;

	delete[] x;
	return 0;
}