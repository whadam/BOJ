#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	double r;
	cin >> r;

	cout << fixed;
	cout.precision(6);
	cout << M_PI * r * r << '\n' << 2 * r * r;

	return 0;
}