#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	int N, M, i;
	unordered_map<string, int> map;
	string str, * arr, * strArray;

	cin >> N >> M;
	arr = new string[M];
	strArray = new string[N];

	for (i = 0; i < N; i++)
	{
		cin >> str;
		map.insert(make_pair(str, i+1));
		strArray[i] = str;
	}
	for (i = 0; i < M; i++)
	{
		cin >> str;
		arr[i] = str;
	}

	unordered_map<string, int>::iterator it;
	for (i = 0; i < M; i++)
	{
		it = map.find(arr[i]);
		if (it != map.end())
			cout << it->second << "\n";
		else
			cout << strArray[stoi(arr[i]) - 1] << "\n";
	}

	delete[] arr, strArray;
	return 0;
}