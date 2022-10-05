#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, X, S;
	cin >> N >> X;

	for (int i = 0; i < N; i++)
	{
		cin >> S;
		if (S < X)
			cout << S << " ";
	}

	return 0;
}