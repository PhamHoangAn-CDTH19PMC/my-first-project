#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	
	int tu,mau,lt,lt1=1,mau1=2;
	double S =0;
	do 
	{
		cout << "nhap tu so";
		cin >> tu;
		cout << "nhap mau so ";
		cin >> mau;
		if (mau < 2)
		{
			cout << "gia tri khong hop le";
		}
		cout << "nhap luy thua ";
		cin >> lt;
	}
	while (mau < 2);
	for (int i = 1; i <= lt; i++)
	{
		lt1 = i + 1;
		for (int i = 2; i < mau; i++)
		{
			mau1 = i + 1;
		}
		S = 1+(pow(tu, lt1) / float(mau1));
	}
	
	
	cout << "ket qua cua S la: " << S << endl;
	system("pause");
}