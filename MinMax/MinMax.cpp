#include <iostream>
using namespace std;
void nhapmang(int A[][100], int &m, int &n)
{
	cout << "nhap so dong, so cot: ";
	cin >> m >> n;
	for (size_t i = 0; i < m; i++)
		for (size_t j = 0; j < n; j++)
		{
			cout << "nhap A[" << i << "][" << j << "]";
			cin >> A[i][j];
		}
}
void xuatmang(int A[][100], int m, int n)
{
	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cout << "  " << A[i][j] << "    ";
		}
		cout << "  " << endl;
	}
}
void timMax(int A[][100], int m, int n)
{
	int max = A[0][0];
	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (A[i][j] > max)
				max = A[i][j];
		}
	}
	cout << "gia tri Max cua ma tran la: " << max << endl;
}
void timMin(int A[][100], int m, int n)
{
	int min = A[0][0];
	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (A[i][j] < min)
				min = A[i][j];
		}
	}
	cout << "gia tri Min cua ma tran la: " << min << endl;
}
int main()
{
	int A[100][100], n, m;
	nhapmang(A, m, n);
	xuatmang(A, m, n);
	timMax(A, m, n);
	timMin(A, m, n);
	return 0;
}