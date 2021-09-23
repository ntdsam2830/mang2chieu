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
bool kt(int A[][100],int n)
{
	int count = 0;
	for (size_t i = 0; i < n ; i++)
	{
		if (A[i][i] != 1)
			return false;
	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = i + 1; j < n; j++)
		{
			if (A[i][j] != 0)
				return false;
			if (A[j][i] != 0 ) {
				count++;
				break;
			}
		}
		if (count > 1)
			return false;
	}
	return true;
}
int main()
{
	int A[100][100], n;
	nhapmang(A, n);
	xuatmang(A, n);
	if ( kt(A,n)==true)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}
