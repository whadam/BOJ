#include <iostream>
using namespace std;

int arr[222222][26];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int q, l, r, p1, p2;
	string s;
	char a;

	cin >> s >> q;
	
	for (int i = 0; i < s.length(); i++)
	{
		if (i != 0)
		{
			for (int j = 0; j < 26; j++)
				arr[i][j] = arr[i - 1][j];
		}
		arr[i][s[i] - 'a']++;
	}

	for (int i = 0; i < q; i++)
	{
		cin >> a >> l >> r;

		p1 = l > 0 ? arr[l - 1][a - 'a'] : 0;
		p2 = arr[r][a - 'a'];

		cout << p2 - p1 << '\n';
	}

	return 0;
}