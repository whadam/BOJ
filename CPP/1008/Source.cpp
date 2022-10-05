#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	long double a, b;
	cin >> a >> b;

	cout.precision(16);

	cout << a / b;

	return 0;
}