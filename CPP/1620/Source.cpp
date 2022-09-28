#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	int N, M, i;
	unordered_map<string, string> map;
	string str, *arr;

	cin >> N >> M;
	arr = new string[M];

	for (i = 0; i < N; i++)
	{
		cin >> str;
		map.insert(pair<string, string>(str, to_string(i + 1)));
		map.insert(pair<string, string>(to_string(i + 1), str));
	}

	for (i = 0; i < M; i++)
	{
		cin >> str;
		arr[i] = str;
	}

	unordered_map<string, string>::iterator it;
	for (i = 0; i < M; i++)
	{
		it = map.find(arr[i]);
		if (it != map.end())
			cout << it->second << endl;
	}

	delete[] arr;
	return 0;
}