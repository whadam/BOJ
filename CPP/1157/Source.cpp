#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int i, nMax(0), idx(0), arr[26] = { 0, }, cnt(0);
	string str;

	cin >> str;
	
	for (i = 0; i < str.length(); i++)
	{
		if (str[i] > 90)
			arr[str[i] - 97]++;
		else
			arr[str[i] - 65]++;
	}

	for (i = 0; i < 26; i++)
	{
		if (nMax < arr[i])
		{
			nMax = arr[i];
			idx = i;
		}
	}

	for (i = 0; i < 26; i++)
	{
		if (nMax == arr[i])
			cnt++;
	}

	if (cnt > 1)
		cout << "?";
	else
		cout << (char)(idx + 65);

	return 0;
}