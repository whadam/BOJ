#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, * radius, i, nGcd;

	cin >> N;
	radius = new int[N];
	for (i = 0; i < N; i++)
		cin >> radius[i];

	for (i = 1; i < N; i++)
	{
		nGcd = gcd(radius[0], radius[i]);
		cout << radius[0] / nGcd << "/" << radius[i] / nGcd << '\n';
	}

	delete[] radius;
	return 0;
}