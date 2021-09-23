#include <iostream>
using namespace std;
void nhapmang(float A[][100], int& n)
{
	cout << "nhap n: ";
	cin >> n;
	for (size_t i = 0; i < n; i++)
		for (size_t j = 0; j < n; j++)
		{
			cout << "nhap A[" << i << "][" << j << "]";
			cin >> A[i][j];
		}
}
void xuatmang(float A[][100], int n)
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
void Trace(float A[][100], int n)
{
	float sum4 = 0;
	for (size_t i = 0; i < n; i++)
	{
		sum4 += A[i][i];
	}
	cout << "tong la :" << sum4 << endl;
}
int main()
{
	float A[100][100];
	int n;
	nhapmang(A, n);
	xuatmang(A, n);
	Trace(A, n);
}

