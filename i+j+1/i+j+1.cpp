#include <iostream>
using namespace std;
int fibonacci( int x )
{ 
	if (x == 1 || x == 2)
		return 1;
	int i = 2, a1 = 1, a2 = 1, S = 0;
	while (i < x)
	{
		S = a1 + a2;
		a1 = a2;
		a2 = S;
		i++;
	}
	return S;
}
int main()
{
	int A[256][256], n, x = 0;
	do
	{
		cout << "nhap n: ";
		cin >> n;
		if (n < 2 || n >16)
			cout << "gia tri khong hop le,vui long thu lai!!!" << endl;
	} while (n < 2 || n > 16);
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			x = i + j + 1;
			A[i][j] = fibonacci(x);
			cout << " " << A[i][j] << " ";
		}
		cout << " " << endl;
	}
}
