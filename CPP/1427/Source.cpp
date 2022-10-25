#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int* n;
	string str;
	
	cin >> str;
	n = new int[str.length()];

	for (int i = 0; i < str.length(); i++)
		n[i] = str[i] - '0';
	
	sort(n, n + str.length());
	reverse(n, n + str.length());

	for (int i = 0; i < str.length(); i++)
		cout << n[i];

	return 0;
}