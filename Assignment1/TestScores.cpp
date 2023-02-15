#include <iostream>

using namespace std;

double getTestScoreavg(double *,int);

void getSorted(double *,int);

int main()
{

int size,i;
double *ptr;

double avg=0.0;

cout << "NHap so hoc sinh" << endl;
cin >> size;

if(ptr==NULL)
{
cout <<"Khong the tao:\n";
}
ptr=new double[size];

for(i=0;i<size;i++)
{

cout <<"\Nhap diem hoc sinh thu "<< i+1 <<":";
cin >> *(ptr+i);
}
getSorted(ptr,size);

avg=getTestScoreavg(ptr,size);
cout <<"Diem theo thu tu tang dan:\n";

for(i=0;i<size;i++)
{
cout <<ptr[i] <<endl;
}
cout <<"Diem trung binh= "<<avg<<endl;
delete [] ptr;
return 0;
}

double getTestScoreavg(double * array,int size)
{
double sum=0;
for(int i=0;i<size;i++)
{
sum+=array[i];

}


sum=sum/((double)size);
return sum;

}

void getSorted(double *ptr,int size)
{
double mainnum;
int i=0,j,mainindex;

for(i=0;i<size;i++)
{
mainindex=i;
mainnum=ptr[i];
for(j=i+1;j<size;j++)
{
if(ptr[j]<mainnum)
{
mainnum=ptr[j];
mainindex=j;
}
}
ptr[mainindex]=ptr[i];
ptr[i]=mainnum;
}

}
