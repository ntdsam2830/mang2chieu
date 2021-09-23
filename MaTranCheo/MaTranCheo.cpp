#include <iostream>
using namespace std;
void nhapmang(int A[][100], int& n)
{
	cout << "nhap so dong, so cot: ";
	cin >> n;
	for (size_t i = 0; i < n; i++)
		for (size_t j = 0; j < n; j++)
		{
			cin >> A[i][j];
		}
}
void xuatmang(int A[][100], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cout << "  " << A[i][j] << "    ";
		}
		cout << " " << endl;
	}
}
int check(int A[][100], int n)
{
	for (size_t i = 0; i  < n; i ++)
	{
		for (size_t j = i + 1; j < n; j++)
		{
			if (A[j][i] !=0 || A[i][j] != 0)
				return 0;
		}
	}
	return 1;
}
int main()
{
	int A[100][100], n;
	nhapmang(A, n);
	xuatmang(A, n);
	if (check(A, n) == 1)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}