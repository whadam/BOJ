#include <iostream>
using namespace std;

int lcs[1000][1000];
string s1, s2;

int LCS(int c1, int c2)
{
	if (c1 == -1 || c2 == -1)
		return 0;

	if (lcs[c1][c2] == -1)
	{
		lcs[c1][c2] = 0;

		if (s1[c1] == s2[c2])
			lcs[c1][c2] = LCS(c1 - 1, c2 - 1) + 1;
		else
			lcs[c1][c2] = max(LCS(c1 - 1, c2), LCS(c1, c2 - 1));
	}

	return lcs[c1][c2];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	fill(&lcs[0][0], &lcs[999][1000], -1);
	cin >> s1 >> s2;

	cout << LCS(s1.length() - 1, s2.length() - 1);

	return 0;
}