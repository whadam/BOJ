#include <iostream>
using namespace std;

static int* arr;

int tile(int n)
{
	if (arr[n] == -1)
		arr[n] = (tile(n - 2) + tile(n - 1)) % 15746;
	return arr[n];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;

	cin >> n;
	arr = new int[n + 2];
	fill(arr, arr + n + 2, -1);

	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;

	cout << tile(n);

	delete[] arr;
	return 0;
}