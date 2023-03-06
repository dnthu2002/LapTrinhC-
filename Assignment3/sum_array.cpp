#include <iostream>
using namespace std;

int nhapmang(int *a, int n){
	for(int i = 0; i<n; i++){
		cout << "Nhap vao phan tu thu " << i << ": ";
		cin >>a[i];
	}
}

int main()
{
 	int n, List[100];
 	cout << "Nhap n: ";
 	cin >> n;
 	nhapmang(List, n);
 	cout << "Mang ban dau: ";
 	int sum = 0;
 	for (int i = 0; i < n; i++){
 		sum = List[i] + sum;
	}
	cout << "Tong gia tri mang = " << sum;
	return 0;
}
