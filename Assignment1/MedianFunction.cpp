#include <iostream>
using namespace std;

double trungvi(int *array, int size)
{
	int mid = (size - 1) / 2;
	double med;

	if (size % 2 == 0)
	{
		med = (*(array + mid) + *(array + (mid + 1))) / 2;
	}
	else
		med = *(array + mid);


	return med;
}
int nhapmang(int a[], int n){
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
 	for (int i = 0; i < n; i++){
		List[n] == List[i];
	}
	int *pList = List;

	cout << "Trung vi: " << trungvi(pList, n) << endl;

	return 0;
}


