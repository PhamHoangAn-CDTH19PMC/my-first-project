#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	int tu,mau,UCLN,mau1,tu1,BCNN;
	float tong,tich;
	do
	{
		
		cout << "nhap tu so: ";
		cin >> tu;
		cout << "nhap mau so: ";
		cin >> mau;
		if (mau < 0)
		{
			cout << "gia tri mau so khong hop le";
		}
	}
	while (mau < 0);
	cout << "phan so da nhap la: " << tu << "/" << mau << endl;
	if (tu == 0)
	{
		cout << "phan so da vua nhap co ket qua bang 0";
	}
	if (tu < mau)
	{
		for (int i=1;i<=mau/2;i++)
		{ 
			if (tu%i == 0 & mau%i == 0)
			{
				UCLN = i;
			}
			else
			{
				cout << "phan so toi gian";
			}
		}
	}
	else
	{
		for (int i = 1; i <= tu / 2; i++)
		{
			if (tu%i == 0 & mau%i == 0)
			{
				UCLN = i;
			}
			else
				cout << "phan so toi gian";
		}
	}
	cout << "phan so toi gian la: " << tu / float(UCLN) << "/" << mau / float(UCLN) << endl;
	cout << "cong hai phan so " << endl;
	cout << "nhap tu so thu 1: ";
	cin >> tu;
	cout << "nhap mau so thu 1: ";
	cin >> mau;
	cout << "nhap tu so thu 2 ";
	cin >> tu1;
	cout << "nhap mau so thu 2 ";
	cin >> mau1;
	BCNN = mau * mau1;
	if (mau != mau1)
	{
		tong = ((BCNN / mau)*tu) + ((BCNN / mau1)*tu1);
	}
	else
	{
		tong = tu + tu1;
	}
	cout << "tong 2 phan so la: " << tong << "/" << BCNN << endl;
	cout << "tich hai phan so la: " << tu * tu1 << "/" << mau * mau1 << endl;
	system("pause");
}