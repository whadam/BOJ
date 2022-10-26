#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, cnt(0), i(666), idx;
	string str;

	cin >> N;

	while (cnt != N)
	{
		str = to_string(i++);

		if (str.find("666") != string::npos)
			cnt++;
	}

	cout << i - 1;

	return 0;
}