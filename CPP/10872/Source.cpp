#include <iostream>
using namespace std;

int f(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * f(n-1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	cout << f(n);

	return 0;
}