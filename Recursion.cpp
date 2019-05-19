#include<stdlib.h>
#include<iostream>

using namespace std;
int sum = 0;

int factorial(int n)
{
	if(n == 0)
	return 1;
	return (n*factorial(n-1));
}

void display(int n)
{
	if(n==0)
	return ;
	display(n-1);
	cout<<n;
	cout<<"\t";
}

int summmation(int n)
{
	if (n == 1)
	return 1;
	return (n + summmation(n-1));
	
}

int displaysumdigit(int n)
{
	if(n <= 0)
	return n;
	displaysumdigit(n/10);
	cout<<n%10<<" ";
	sum = sum + n%10;
	return sum; 
}

void convert(int n,int base)
{
	char ch;
	int rem = n%base;
	if(n == 0)
	return;
	convert(n/base,base);
	if(rem<10)
	cout<<rem;
	else
	{
		int t  = rem-10+'A';
		cout<<(char)t;
	}
	
}

int a_to_power_n(int a,int n)
{
if(n == 0)
return 1;
else
return a*a_to_power_n(a,n-1);
}

void prime_factor(int n)
{
	int i = 2;
	while(n%i != 0)
	{
		i++;
	}
	cout<<i<<"\t";
	prime_factor(n/i);
}

int GCD(int a ,int b)
{
	
	if(b==0)
	{
		return a;
		}
		return GCD(b,a%b);	
}

int fibonacci(int n)
{
	if(n == 0)
	return 1;
	if(n == 1)
	return 1;
	return fibonacci(n-1) + fibonacci(n-2);
	
}

void toh(int n,char source,char temp,char dest)
{
	if(n == 1)
	{
		cout<<"Move Disk No "<<n<<" from "<<source<<" to "<<dest;
		cout<<"\n";
		return;
	}
	toh(n-1,source,dest,temp);
	cout<<"Move Disk No "<<n<<" from "<<source<<" to "<<dest;
	cout<<"\n";
	toh(n-1,temp,source,dest);
}


int main()
{
	cout<<"Recursion problems\n";
	cout<<"Choose your Option\n";
	cout<<"1.Factorial\n2.Program to display number of sum series 1+2+3+4+5+.....+n\n3.Print n numbers\n4.Display summation of Digits of a number\n5.Convert positive Decimal to binary,Octal or Hexadecimal\n6.a to the power n\n7.Prime Factorisation of n\n";
	cout<<"8.GCD of Two numbers\n9. Fibonacci Series\n10.Tower of Hannoi\n";
	char source = 'A',tempt = 'B',dest = 'C';
	int i;
	int n;
	int sum_digits;
	int temp;
	cin>>i;
	switch(i)
	{
		case 1:
			cout<<"Enter number whose factorial is to be found\n";
			cin>>n;
			temp = factorial(n);
			cout<<"factorial is\t"<<temp;
			break;
		case 3:
			cout<<"Enter Number\n";
			cin>>n;
			display(n);
			break;
		case 2:
			cout<<"Enter n\n";
			cin>>n;
			temp = summmation(n);
			cout<<temp;
			break;
		case 4:
			cout<<"Enter  n\n";
			cin>>n;
			cout<<"\nThe digits of number are \t";
			sum_digits = displaysumdigit(n);
			cout<<"\nSum of digits of number is\t"<<sum_digits;
			//digitsum(n);
			break;
		case 5:
			cout<<"Enter a positive decimal value\n";
			cin>>n;
			convert(n,2);
			cout<<"\n";
			convert(n,8);
			cout<<"\n";
			convert(n,16);
			cout<<"\n";
			break;
		case 6:
			int a;
			cout<<"Enter a\n";
			cin>>a;
			cout<<"Enter n\n";
			cin>>n;
			a = a_to_power_n(a,n);
			cout<<a;
			break;
		case 7:
			cout<<"Enter number ";
			cin>>n;
			prime_factor(n);
			break; 
		case 8:
			int as,bs;
			cout<<"Enter Two numbers\n";
			cin>>as>>bs;
			as = GCD(as,bs);
			cout<<"GCD of above numbers is "<<as;
			break;
		case 9:
			cout<<"Enter the terms of fibonacci series\n";
			cin>>n;
			int res;
			for(int i =0;i<n;i++)
			{
				cout<<fibonacci(i)<<"  ";
			}
			break;
		case 10:
			cout<<"Enter number of disks\n";
			cin>>n;
			cout<<"The Sequence to solve the problem is\n";
			toh(n,source,tempt,dest);
			break;
		default:
			cout<<"Enter right option\n";
	}
	
} 




