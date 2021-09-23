#include <iostream>
using namespace std;
void nhapmang(int A[][100], int& n)
{
	cout << "nhap so dong, so cot: ";
	cin >> n;
	for (size_t i = 0; i < n; i++)
		for (size_t j = 0; j < n; j++)
		{
			cout << "nhap x[" << i << "][" << j << "]: ";
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
		cout << "  " << endl;
	}
}
void tinhtong(int A[][100],int B[][100],int C[][100], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}
void tinhtich(int A[][100], int B[][100], int C[][100], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
				C[i][j] += A[i][j] * B[i][j];
		}
	}
}
int main()
{
	int A[100][100], B[100][100], C[100][100],nA,nB;
	cout << "tao ma tran A!" << endl;
	nhapmang(A, nA);
	cout << "tao ma tran B!" << endl;
	nhapmang(B, nB);
	if (nA == nB)
	{
		xuatmang(A, nA);
		cout << endl;
		xuatmang(B, nB);
		cout << "tong 2 ma tran la: " << endl;
		tinhtong(A, B, C, nA);
		xuatmang(C, nA);
		cout << "tich 2 ma tran la: " << endl;
		tinhtich(A, B, C, nA);
		xuatmang(C, nA);
		return 0;
	}
	else
	{
		cout << "ma tran khong hop le!!";
	}
}
