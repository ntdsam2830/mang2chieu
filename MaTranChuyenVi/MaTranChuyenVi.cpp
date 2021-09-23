#include <iostream>
using namespace std;
void nhapmang(int A[][100], int& m, int& n)
{
	cout << "nhap so dong: ";
	cin >> m;
	cout << "nhap so cot: ";
	cin >> n;
	for (size_t i = 0; i < m; i++)
		for (size_t j = 0; j < n; j++)
		{
			cin >> A[i][j];
		}
}
void xuatmang(int A[][100], int m,int n)
{
	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cout << "  " << A[i][j] << "    ";
		}
		cout << " " << endl;
	}
}
void MaTranChuyenVi(int A[][100], int m, int n)
{
	int B[100][100];
	int k = m;//cot
	int l = n;//dong
	for (size_t i = 0; i < l; i++)
	{
		for (size_t j = 0; j < k; j++)
		{
			B[i][j] = A[j][i];
		}
	}
	cout << "ma tran chuyen vi la: " << endl;
	for (size_t i = 0; i < l; i++)
	{
		for (size_t j = 0; j < k; j++)
		{
			cout << "  " << B[i][j] << "    ";
		}
		cout << " " << endl;
	}

}
int main()
{
	int A[100][100], n, m;
	nhapmang(A, m, n);
	xuatmang(A, m, n);
	MaTranChuyenVi(A, m, n);
	return 0;


}