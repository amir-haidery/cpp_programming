#include<iostream>
#include<stdio.h>

using namespace std;

int cheackprimenumber(int);

int main()
{
	int num1,num2,i;
	bool flag;
	
	cout<<"Enter the two positive integer : "<<endl;
	cin>>num1>>num2;
	
	cout<<"Prume number between "<< num1<<" and"<<num2<<endl;
	for(i=num1;i<=num2;i++)
	{
		flag=cheackprimenumber(i);
		if(flag);
		{
			cout<<i<<" ";
		}
	}
}
int cheakprimenumber(int n)
{
	bool flag=true;
	
	
	for(int i=2;i=n/2;i++)
	{
		if(n%2==0)
		{
			flag=false;
			break;
			
		}
	}
	return flag;
	
	
	
	
}
