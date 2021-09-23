#include <iostream>
using namespace std;
void nhapmang(int A[][100], int& n, int& m)
{
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
		cout << " " << endl;
	}
}
void tinhtong1dong(int A[][100], int n)
{
	int x, sum1 = 0;
	cout << "ban muon tinh tong tren dong nao ???";
	cin >> x;
	for (size_t j = 0; j < n; j++)
	{
		sum1 += A[x][j];
	}
	cout << "tong la :" << sum1 << endl;
}
void tinhtong1cot(int A[][100], int m)
{
	int y, sum2 = 0;
	cout << "ban muon tinh tong tren cot nao nao???";
	cin >> y;
	for (size_t i = 0; i < m; i++)
	{
		sum2 += A[i][y];
	}
	cout << "tong la :" << sum2 << endl;
}
void tinhtongmatran(int A[][100], int m, int n)
{
	int sum3 = 0;
	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			sum3 += A[i][j];
		}
	}
	cout << "tong la :" << sum3 << endl;
}
void tinhtongtrenduongcheochinh(int A[][100], int n)
{
	int sum4 = 0;
	for (size_t i = 0; i < n; i++)
	{
		sum4 += A[i][i];
	}
	cout << "tong la :" << sum4 << endl;
}
void tinhtongnuatrendcc(int A[][100], int n)
{
	int sumup = 0;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i <= j)
				sumup += A[i][j];
		}
	}
	cout << "tong la :" << sumup << endl;
}
void tinhtongnuaduoidcc(int A[][100], int n)
{
	int sumdown = 0;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i >= j)
				sumdown += A[i][j];
		}
	}
	cout << "tong la :" << sumdown << endl;
}
int main()
{
	int A[100][100], m, n, s;
	cout << "welcome!!" << endl;
	cout << "nhap so dong, so cot: ";
	cin >> m >> n;
	cout << "chon 1 de thuc hien tinh tong tren dong" << endl;
	cout << "chon 2 de thuc hien tinh tong tren cot" << endl;
	cout << "chon 3 de thuc hien tinh tong ma tran" << endl;
	cout << "chon 4 de thuc hien tinh tong tren duong cheo chinh" << endl;
	cout << "chon 5 de thuc hien tinh tong nua tren duong cheo chinh" << endl;
	cout << "chon 6 de thuc hien tinh tong nua duoi duong cheo chinh" << endl;
	do
	{
		cout << "moi chon: ";
		cin >> s;
		if (s == 1)
		{
			nhapmang(A, m, n);
			xuatmang(A, m, n);
			tinhtong1dong(A, n);
		}
		else if (s == 2)
		{
			nhapmang(A, m, n);
			xuatmang(A, m, n);
			tinhtong1cot(A, m);
		}
		else if (s == 3)
		{
			nhapmang(A, m, n);
			xuatmang(A, m, n);
			tinhtongmatran(A, m, n);
		}
		else if (s == 4)
		{
			nhapmang(A, m, n);
			xuatmang(A, m, n);
			if (m = n) {
				tinhtongtrenduongcheochinh(A, n);
			}
			else return 0;
		}
		else if (s == 5)
		{
			nhapmang(A, m, n);
			xuatmang(A, m, n);
			if (m = n) {
				tinhtongnuatrendcc(A, n);
			}
			else return 0;
		}
		else if (s == 6)
		{
			nhapmang(A, m, n);
			xuatmang(A, m, n);
			if (m = n) {
				tinhtongnuatrendcc(A, n);
			}
			else return 0;
		}
	} while (s > 6);
}