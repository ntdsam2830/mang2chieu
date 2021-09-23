#include <iostream>
using namespace std;
void nhapmang(int A[][100], int &n, int &m)
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
void xuatmang(int A[][100], int n, int m)
{
	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cout <<"  "<< A[i][j] << "    ";
		}
		cout << " " << endl;
	}
}
int foundX(int A[][100],int n,int m,int x)
{
	int count = 0;
	for (size_t i = 0; i < m; i++)
		for (size_t j = 0; j < n; j++)
		{
			if (A[i][j] == x)
			{
				count++;
			}
		}
	if (count != 0)
	{
		cout << "FOUND X" << endl;
	}
	else
	{
		cout << "NOT FOUND X" << endl;
	}
	return 0;
}
int main()
{
	int A[100][100], n, m, x;
	cout << "nhap gia tri can tim: ";
	cin >> x;
	nhapmang(A, m, n);
	xuatmang(A, m, n);
	foundX(A, m, n, x);
}

