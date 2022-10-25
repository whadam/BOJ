#include <iostream>
using namespace std;

// start, waypoint, destination
void hanoi(int n, int s, int w, int d)
{
	if (n == 1)
	{
		cout << s << " " << d << '\n';
		return;
	}
	
	// n-1 개를 s에서 w로 이동
	hanoi(n - 1, s, d, w);
	
	// 1개(bottom)를 s에서 d로 이동
	cout << s << " " << d << '\n';

	// n-1 개를 w에서 d로 이동
	hanoi(n - 1, w, s, d);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	cout << (1<<n) - 1 << '\n';

	hanoi(n, 1, 2, 3);

	return 0;
}