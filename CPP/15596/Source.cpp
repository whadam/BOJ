#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int> &a)
{
	long long s = 0;

	for (auto i : a)
		s += i;

	return s;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, n;
	vector<int> a;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> n;
		a.push_back(n);
	}

	cout << sum(a);

	return 0;
}