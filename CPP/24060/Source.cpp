#include <iostream>
using namespace std;

int *tmp, save_count, K, k;

// p = arr1 start point, q = arr2 start point, r = arr end point
void merge(int* A, int p, int q, int r)
{
	// i = arr1 index, j = arr2 index, t = tmp arr index
	int i = p, j = q + 1, t = 0;

	// sort ascending
	while (i <= q && j <= r)
	{
		if (A[i] <= A[j])
			tmp[t++] = A[i++];
		else
			tmp[t++] = A[j++];
	}
	// one arr finished, the other arr sort
	while (i <= q)
		tmp[t++] = A[i++];
	while (j <= r)
		tmp[t++] = A[j++];
	// copy temp to A
	i = p;
	t = 0;
	while (i <= r)
	{
		A[i++] = tmp[t++];
		save_count++;
		if (save_count == K)
			k = tmp[t-1];
	}
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
	int N, *A, i;
	
	cin >> N >> K;
	A = new int[N];
	tmp = new int[N];
	save_count = 0;

	for (i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	merge_sort(A, 0, N - 1);

	cout << (save_count < K ? -1 : k);

	delete[] A, tmp;
	return 0;
}