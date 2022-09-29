#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string str;
	int i, sub;
	unordered_set<string> set;

	cin >> str;
	
	for (sub = 1; sub <= str.length(); sub++)
	{
		for (i = 0; i <= str.length() - sub; i++)
		{
			set.insert(str.substr(i, sub));
		}
	}
	
	cout << set.size();

	return 0;
}