#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int a;
	string b;
	cin >> a >> b;

	cout << a * (b[2] - 48) << '\n' << a * (b[1] - 48) << '\n' << a * (b[0] - 48) << '\n' << a * stoi(b);

	return 0;
}