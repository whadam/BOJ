#include <iostream>
using namespace std;

int* tmp;

// p = arr1 start point, q = arr2 start point, r = arr end point
void merge(int* A, int p, int q, int r)
{
	// i = arr1 index, j = arr2 index, t = ?
	int i = p, j = q + 1, t = 1;

	while (i <= q && j <= r)
	{
		if (A[i] <= A[j])
			tmp[t++] = A[i++];
		else
			tmp[t++] = A[j++];
	}
	while (i <= q)
		tmp[t++] = A[i++];
	while (j <= r)
		tmp[t++] = A[j++];
	i = p;
	t = 1;
	while (i <= r)
		A[i++] = tmp[t++];
}

void merge_sort(int* A, int p, int r)
{
	if (p < r)
	{
		int q = (p + r) / 2;
		merge_sort(A, p, q);
		merge_sort(A, q + 1, r);
		merge(A, p, q, r);
	}
}

int main()
{
	int N, K, *A, i;
	
	cin >> N >> K;
	A = new int[N];
	tmp = new int[N];

	for (i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	merge_sort(A, 0, N - 1);

	for (i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}

	delete[] A, tmp;
	return 0;
}