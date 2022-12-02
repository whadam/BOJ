#include <iostream>
using namespace std;

int Two(int n)
{
	int count(0);

	while (n >= 2)
	{
		count += n / 2;
		n /= 2;
	}

	return count;
}

int Five(int n)
{
	int count(0);

	while (n >= 5)
	{
		count += n / 5;
		n /= 5;
	}

	return count;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m, two, five;
	cin >> n >> m;

	two = Two(n) - Two(n - m) - Two(m);
	five = Five(n) - Five(n - m) - Five(m);

	cout << min(two, five);

	return 0;
}