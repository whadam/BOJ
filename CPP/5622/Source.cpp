#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int sum(0);
	string str;

	cin >> str;

	for (auto c : str)
	{
		if (65 <= c && c <= 67)
			sum += 3;
		else if (68 <= c && c <= 70)
			sum += 4;
		else if (71 <= c && c <= 73)
			sum += 5;
		else if (74 <= c && c <= 76)
			sum += 6;
		else if (77 <= c && c <= 79)
			sum += 7;
		else if (80 <= c && c <= 83)
			sum += 8;
		else if (84 <= c && c <= 86)
			sum += 9;
		else
			sum += 10;
	}

	cout << sum;

	return 0;
}