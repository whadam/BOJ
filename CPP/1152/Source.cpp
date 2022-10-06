#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int cnt(1);
	string str;

	getline(cin, str);

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 32)
			cnt++;
	}
	if (str[0] == 32)
		cnt--;
	if (str[str.length() - 1] == 32)
		cnt--;

	cout << cnt;

	return 0;
}