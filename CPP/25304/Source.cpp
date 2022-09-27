#include <iostream>
using namespace std;

int main()
{
	int X, N, a, b;
	cin >> X >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		X -= a * b;
	}

	X == 0 ? cout << "Yes" : cout << "No";

	return 0;
}