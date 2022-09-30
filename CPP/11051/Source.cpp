#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, K, numerator, denominator, i;

	cin >> N >> K;
	numerator = factorial(N);
	denominator = factorial(K) * factorial(N - K);

	cout << numerator / denominator;

	return 0;
}