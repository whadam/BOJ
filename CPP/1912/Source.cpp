#include <iostream>
using namespace std;

int* num, * arr, nMax;

int sum(int i)
{
	if (arr[i] == -1001)
	{
		arr[i] = max(sum(i - 1) + num[i], num[i]);
		nMax = max(arr[i], nMax);
	}

	return arr[i];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	
	cin >> n;
	num = new int[n];
	arr = new int[n];
	fill(arr, arr + n, -1001);

	for (int i = 0; i < n; i++)
		cin >> num[i];

	arr[0] = num[0];
	nMax = num[0];

	sum(n - 1);

	cout << nMax;

	delete[] num, arr;

	return 0;
}