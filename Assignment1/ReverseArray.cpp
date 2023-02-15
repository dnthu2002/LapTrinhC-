#include <iostream>
using namespace std;

int nhapmang(int a[], int n){
	for(int i = 0; i<n; i++){
		cout << "Nhap vao phan tu thu " << i << ": ";
		cin >>a[i];
	}
}

int main()
{
 	int n, List[100];
 	int start = 0;
 	cout << "Nhap n: ";
 	cin >> n;
 	int end = n-1;
 	nhapmang(List, n);
 	cout << "Mang ban dau: ";
 	for (int i = 0; i < n; i++){
		cout << List[i] << " ";
	}
	while(start < end){
		int temp = List[start];
		List[start] = List[end];
		List[end] = temp;
		start ++;
		end --;
	}
	cout << "\n Mang dao nguoc: ";
 	for (int i = 0; i < n; i++){
		cout << List[i] << " ";
	}

	return 0;
}


