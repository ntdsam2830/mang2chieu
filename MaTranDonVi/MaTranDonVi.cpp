#include <iostream>
using namespace std;
void nhapmang(int A[][100], int& n)
{
	cout << "nhap so dong, so cot: ";
	cin >> n;
	for (size_t i = 0; i < n; i++)
		for (size_t j = 0; j < n; j++)
		{
			cout << "nhap A[" << i << "][" << j << "]";
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
int matrandvi_check(int A[][100], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 1; j < n; j++)
		{
			if ((A[i][j] != 0 || A[j][i] != 0 )|| A[i][i]!=1 )
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
	if (matrandvi_check(A, n) == 1 )
	{
		cout << "day chinh xac la ma tran don vi!" << endl;
	}
	else 
	{
		cout << "day khong phai la ma tran don vi!!!" << endl;
	}
}
