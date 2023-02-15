#include <iostream>
#include <math.h>
using namespace std;

int quadraticEquation(int a, int b, int c){
	int delta = (b*b) - (4*a*c);
	if(delta < 0){
		cout << "Phuong trinh vo nghiem ";
	}else if(delta == 0){
		cout << "Nghiem kep x1, x2 = " << -b/(2*a) ;
	}else {
		float x1 = (-b+sqrt(delta))/(2*a);
		float x2 = (-b-sqrt(delta))/(2*a);
		cout << "Nghiem x1= " << x1 << "\n" ;
		cout << "Nghiem x2= " << x2 ;		
	}
	return 0;
}
int main()
{
	int a, b, c;
	cout << "Nhap ax^2= ";
	cin  >> a;
	cout << "Nhap bx= ";
	cin  >> b;
	cout << "Nhap c= ";
	cin  >> c;
	quadraticEquation(a,b,c);
	return 0;
}
