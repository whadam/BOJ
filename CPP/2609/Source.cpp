#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	return b ? gcd(b,a%b) : a;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	short a, b, nGcd;

	cin >> a >> b;

	nGcd = gcd(max(a, b), min(a, b));
	cout << nGcd << '\n' << a * b / nGcd;

	return 0;
}