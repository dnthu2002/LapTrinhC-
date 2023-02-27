#include <iostream>
#include <iomanip>
using namespace std;

double calcData(int, double, double, double);
double calcData(double, double);

int main()
{
	char   InOut;
	int    NumOfDays;
	double DailyRate,
		   ServChges,
		   MedChges,
		   TotChges;

	cout << "Nhap (I) benh nhan noi tru\nNhap (O) benh nhan ngoai tru\n";
	cin  >> InOut; 

	switch(InOut)
	{
		case 'i' :
		case 'I' :  do
					{
						cout << "So ngay nam vien? ";
				   		cin  >> NumOfDays;

				   		if (NumOfDays < 0)
				   		{
				   			cout << "Nhap so ngay nam vien.\n";
				   		}

				   	} while(NumOfDays < 0);

				   	do
				   	{
				   		cout << "Ti gai hang ngay? ";
				   		cin  >> DailyRate;

				   		if (DailyRate < 0)
				   		{
				   			cout << "Ti gia lon hon 0.\n";
				   		}

				   	} while(DailyRate < 0);
					

		case 'o' :
		case 'O' :  do
				    {
						cout << "Chi phi dich vu ";
				   		cin  >> ServChges;

				   		if (ServChges < 0)
				   		{
				   			cout << "Phai tinh dich vu";				   		
						}

				    } while (ServChges < 0);
		
				    do
				    {
				    	cout << "CHi phi thuoc: ";
				    	cin  >> MedChges;

				    	if (MedChges < 0)
				    	{
				    		cout << "Nhap chi phi thuoc";
				    	}

				    } while(MedChges < 0);

	}

	cout << "\n        CHi phi thanh toan\n"
		 << "----------------------------------------------------\n";
	cout << right << fixed << showpoint << setprecision(2);

	switch(InOut)
	{
		case 'i' :
		case 'I' : TotChges = calcData(NumOfDays, DailyRate, ServChges, MedChges);
				   cout << "So ngay nam vien : " 
				        << setw(11) << NumOfDays << endl;
				   cout << "Ti gia hang ngay : $"
				        << setw(10) << DailyRate << endl;
				   break;
		case 'o' :
		case 'O' : TotChges = calcData(ServChges, MedChges);
		
	}


	cout << "CHi phi dich vu  : $" 
	     << setw(10) << ServChges << endl;
	cout << "Chi phi thuoc    : $" 
	     << setw(10) << MedChges << endl;
	cout << "Tong             : $" 
	     << setw(10) << TotChges << endl;
	
}

double calcData(int NumOfDays, double DailyRate, double ServChges,
				double MedChges)
{
	return (NumOfDays * DailyRate) + calcData(ServChges, MedChges);
}

double calcData(double ServChges, double MedChges)
{
	return ServChges + MedChges;
}
