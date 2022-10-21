#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int i, a, n, arr[10001] = { 0 };
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> a;
		arr[a]++;
	}

	for (i = 1; i < 10001; i++)
	{
		for (a = 0; a < arr[i]; a++)
			cout << i << '\n';
	}
	
	return 0;
}