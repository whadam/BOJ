#include <iostream>

using namespace std;

int n, nCntRecur, nCntDP;
int* f;

int fib(int n)
{
	if (n == 1 || n == 2)
	{
		nCntRecur++;
		return 1;
	}
	else
		return (fib(n - 1) + fib(n - 2));
}

int fibonacci(int n)
{
	f[0] = f[1] = 1;

	for (int i = 2; i < n; i++)
	{
		nCntDP++;
		f[i] = f[i - 1] + f[i - 2];
	}
	return f[n];
}

int main()
{
	cin >> n;
	nCntRecur = 0;
	nCntDP = 0;
	f = new int[n];

	fib(n);
	fibonacci(n);
	cout << nCntRecur << " " << nCntDP << endl;

	delete[] f;
	return 0;
}