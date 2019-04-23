#include<stdio.h>
#include<iostream>
using namespace std;

void func(int n1,int n2,int *s,int *p,int *d)
{
	
	*s = n1 + n2;
	*p = n1*n2;
	*d = n1-n2;
}

int main(void)
{
	int n1,n2,sum,prod,diff;
	cin>>n1>>n2;
	func(n1,n2,&sum,&prod,&diff);
	cout<<"Sum:  "<<sum<<"\n";
	cout<<"Product:  "<<prod<<"\n";
	cout<<"diff:  "<<diff<<"\n";
}
