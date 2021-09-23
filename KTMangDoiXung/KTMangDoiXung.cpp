#include <iostream>
using namespace std;
void nhapmang(int A[][100], int &n)
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
		cout << "  " << endl;
	}
}
/* 1 2 3
   2 5 8
   3 8 9 
   a[0][1]=a[1][0]
   a[2][1]=a[1][2]
   a[i][j]=a[j][i]
*/
int opposite_check(int A[][100], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0;  j < n;  j++)
		{
			if (A[i][j] != A[j][i])
			{
				return 0;
			}
		}
	}
	return 1;
}
int main()
{
	int A[100][100], n;
	nhapmang(A, n);
	xuatmang(A, n);
	if (opposite_check(A, n) == 0)
	{
		cout << "ma tran khong doi xung qua duong cheo chinh!!!" << endl;
	}
	else
	{
		cout << "ma tran doi xung qua duong cheo chinh!" << endl;
	}

}