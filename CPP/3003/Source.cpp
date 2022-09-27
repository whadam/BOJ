#include <iostream>
using namespace std;

int main()
{
	int i, chess[6];
	
	for (i = 0; i < 6; i++)
	{
		cin >> chess[i];
	}

	for (i = 0; i < 6; i++)
	{
		if (i < 2)
			cout << 1 - chess[i] << " ";
		else if (i < 5)
			cout << 2 - chess[i] << " ";
		else
			cout << 8 - chess[i];
	}

	return 0;
}