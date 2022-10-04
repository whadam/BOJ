#include <iostream>
using namespace std;

int arr[9][9];

bool check(int row, int col, int val)
{
	int i;
	// check row
	for (i = 0; i < 9; i++)
	{
		if (arr[row][i] == val)
			return false;
	}

	// check column
	for (i = 0; i < 9; i++)
	{
		if (arr[i][col] == val)
			return false;
	}

	// check 3x3
	int r = (row / 3) * 3;
	int c = (col / 3) * 3;

	for (i = r; i < r + 3; i++)
	{
		for (int j = c; j < c + 3; j++)
		{
			if (arr[i][j] == val)
				return false;
		}
	}

	return true;
}

void sudoku(int row, int col)
{
	if (col == 9)
	{
		sudoku(row + 1, 0);
		return;
	}

	if (row == 9)
	{
		for (decltype(auto) i : arr)
		{
			for (decltype(auto) val : i)
				cout << val << " ";
			cout << '\n';
		}
		exit(0);
	}

	if (arr[row][col] == 0)
	{
		for (int i = 1; i <= 9; i++)
		{
			if (check(row, col, i))
			{
				arr[row][col] = i;
				sudoku(row, col + 1);
			}
		}
		arr[row][col] = 0;
		return;
	}

	sudoku(row, col + 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);	

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
			cin >> arr[i][j];
	}

	sudoku(0, 0);
		
	return 0;
}