#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, a, * arr;
	
	cin >> n;
	arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		arr[i] = a;
	}

	sort(arr, arr + n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << '\n';

	delete[] arr;
	return 0;
}