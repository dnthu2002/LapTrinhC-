#include<iostream>
using namespace std;

void Swap_two_number(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int a = 3, b=6;
	cout << "Truoc khi hoan doi a= " << a << " , b= " << b ;
	Swap_two_number(&a, &b);
	cout << "\nSau khi hoan doi a = " << a << " , b= " << b ;
	return 0;
}
