#include <iostream>
#include <iomanip>
using namespace std;
int khoangcach(int tocdo, int gio, int khoangcach){
	if (tocdo >= 0 && gio >= 1)
	{
		cout << "Quang duong da di la\n"
		 << "--------------------------------\n";
		for (int X = 1; X <= gio; X++)
		{
			
			khoangcach += tocdo;
			cout << right << setw(4) << X << "";
			cout << setw(6) << khoangcach << endl;
		}
	}
}
int main()
{
	int tocdo, gio, kc = 0;
	cout << "Nhap toc do cua xe: ";
	cin  >> tocdo;
	cout << "Nhap so gio: ";
	cin  >> gio;
	khoangcach(tocdo,gio,kc);
	return 0;
}
