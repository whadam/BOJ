#include <iostream>
#include <string.h>
using namespace std;

int cnt;

int recursion(const char* s, int l, int r)
{
	cnt++;
	if (l >= r)
		return 1;
	else if (s[l] != s[r])
		return 0;
	else
		return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s)
{
	return recursion(s, 0, (int)strlen(s) - 1);
}

int main()
{
	int T, *returnValues, *cnts, i;
	char* S = new char[1001];
	
	cin >> T;
	returnValues = new int[T];
	cnts = new int[T];

	for (i = 0; i < T; i++)
	{
		cnt = 0;
		cin >> S;
		returnValues[i] = isPalindrome(S);
		cnts[i] = cnt;
	}

	for (i = 0; i < T; i++)
		cout << returnValues[i] << " " << cnts[i] << endl;

	delete[] returnValues, cnts, S;
	return 0;
}