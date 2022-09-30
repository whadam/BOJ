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

	short N, i;
	int nGcd, a, b;
	
	cin >> N;
	for (i = 0; i < N; i++)
	{
		cin >> a >> b;
		nGcd = gcd(max(a, b), min(a, b));
		cout << a * b / nGcd << '\n';
	}

	return 0;
}