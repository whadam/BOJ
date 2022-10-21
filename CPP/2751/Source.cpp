#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a, * arr;
	string str = "";

	cin >> n;
	arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		arr[i] = a;
	}

	sort(arr, arr + n);

	for (int i = 0; i < n; i++)
		str += to_string(arr[i]) + "\n";
	cout << str;

	delete[] arr;
	return 0;
}